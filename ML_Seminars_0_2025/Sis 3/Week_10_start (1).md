# Logistic Regression for Identifying Depression Among Students

## Overview
In this task, you will use Logistic Regression to predict whether a student is experiencing depression based on different factors such as academic pressure, sleep habits, and financial stress.

## Dataset
We will use the Student Depression Dataset.

### Features:
- **Gender**: Male/Female
- **Age**: Student’s age
- **City**: City where the student lives
- **Academic Pressure**: Level of academic stress
- **Work Pressure**: Level of work-related stress
- **CGPA**: Student’s academic performance
- **Study Satisfaction**: How satisfied the student is with their studies
- **Job Satisfaction**: Satisfaction with a job (if applicable)
- **Sleep Duration**: Sleep hours category (e.g., "Less than 5 hours", "5-6 hours")
- **Dietary Habits**: Eating habits (e.g., Healthy, Moderate)
- **Degree**: The degree the student is pursuing
- **Suicidal Thoughts**: Whether the student has had suicidal thoughts (Yes/No)
- **Work/Study Hours**: Hours spent working or studying daily
- **Financial Stress**: Level of financial pressure
- **Family History of Mental Illness**: Whether the student has a family history of mental illness (Yes/No)
- **Depression**: (Target variable: 1 = Has depression, 0 = No depression)

## Tasks

### Task 1 – Explore the Data
Understand the dataset and find interesting patterns:
- Use basic pandas functions to check the data.
- Look for missing values, outliers, and patterns in the features.
- Create visualizations such as heatmap, histograms, bar charts, scatter plots etc. to explore relationships between different features and depression.

```python
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# Load the dataset
df = pd.read_csv('student_depression.csv')

# Basic data exploration
print(df.head())
print(df.info())
print(df.describe())

# Check for missing values
print(df.isnull().sum())

# Visualizations
plt.figure(figsize=(10, 6))
sns.heatmap(df.corr(), annot=True, cmap='coolwarm')
plt.title('Heatmap of Feature Correlations')

plt.figure(figsize=(10, 6))
sns.histplot(df['Age'], kde=True)
plt.title('Distribution of Age')

plt.figure(figsize=(10, 6))
sns.barplot(x='Gender', y='Depression', data=df)
plt.title('Depression by Gender')

plt.figure(figsize=(10, 6))
sns.scatterplot(x='CGPA', y='Depression', data=df)
plt.title('Depression by CGPA')

plt.show()
```

### Task 2 – Data Preprocessing
Clean and prepare the data for modeling:
- Handle missing values (e.g., filling or removing them).
- Convert categorical variables into numbers using encoding.
- Normalize or standardize numerical features if needed.
- Explain why you made certain preprocessing choices.

```python
from sklearn.preprocessing import StandardScaler, LabelEncoder

# Handle missing values
df.fillna(df.mean(), inplace=True)

# Encode categorical variables
label_encoders = {}
categorical_columns = ['Gender', 'City', 'Dietary Habits', 'Degree', 'Suicidal Thoughts', 'Family History of Mental Illness']

for column in categorical_columns:
    le = LabelEncoder()
    df[column] = le.fit_transform(df[column])
    label_encoders[column] = le

# Standardize numerical features
scaler = StandardScaler()
numerical_columns = ['Age', 'Academic Pressure', 'Work Pressure', 'CGPA', 'Study Satisfaction', 'Job Satisfaction', 'Sleep Duration', 'Work/Study Hours', 'Financial Stress']

df[numerical_columns] = scaler.fit_transform(df[numerical_columns])

# Explanation of preprocessing choices:
# - Filled missing values with mean to maintain the dataset size.
# - Encoded categorical variables to numerical values for model compatibility.
# - Standardized numerical features to ensure they have a mean of 0 and a standard deviation of 1, which helps the model converge faster.
```

### Task 3 – Train the Model
Train a Logistic Regression model to predict depression:
- Split the data into training and testing sets.
- Train a Logistic Regression model using scikit-learn. Look at the different parameters in scikit learn libraries and try to change some of them (only if you can understand them).
- Make predictions on the test data.

```python
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score, confusion_matrix, roc_curve, auc

# Split the data into training and testing sets
X = df.drop('Depression', axis=1)
y = df['Depression']

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42)

# Train the Logistic Regression model
model = LogisticRegression()
model.fit(X_train, y_train)

# Make predictions on the test data
y_pred = model.predict(X_test)
y_pred_prob = model.predict_proba(X_test)[:, 1]
```

### Task 4 – Evaluate the Model
Measure how well the model performs:
- Calculate accuracy, precision, recall, and F1-score.
- Create a confusion matrix to see how often the model makes correct and incorrect predictions.
- Plot an ROC curve to analyze model performance.
- Think on how we could analyze predicted probabilities.

```python
# Evaluate the model
accuracy = accuracy_score(y_test, y_pred)
precision = precision_score(y_test, y_pred)
recall = recall_score(y_test, y_pred)
f1 = f1_score(y_test, y_pred)
conf_matrix = confusion_matrix(y_test, y_pred)

print(f'Accuracy: {accuracy}')
print(f'Precision: {precision}')
print(f'Recall: {recall}')
print(f'F1 Score: {f1}')
print(f'Confusion Matrix:\n {conf_matrix}')

# Plot ROC curve
fpr, tpr, _ = roc_curve(y_test, y_pred_prob)
roc_auc = auc(fpr, tpr)

plt.figure()
plt.plot(fpr, tpr, color='darkorange', lw=2, label=f'ROC curve (area = {roc_auc:.2f})')
plt.plot([0, 1], [0, 1], color='navy', lw=2, linestyle='--')
plt.xlim([0.0, 1.0])
plt.ylim([0.0, 1.05])
plt.xlabel('False Positive Rate')
plt.ylabel('True Positive Rate')
plt.title('Receiver Operating Characteristic')
plt.legend(loc='lower right')
plt.show()

# Analyze predicted probabilities
print(y_pred_prob)
```

## Part two

### Task 1 – Evaluate and Visualize Metric Changes Across Thresholds
As we have seen in class, different metrics vary according to the threshold. Explain why.

Compute the TN, TP, FN and FP manually. 
Find a way to visualize their evolution according to the threshold. 
Explain the different variations. What does it tell about your predictions?

Do the same with evaluation metrics.

How would you define the optimal threshold?

```python
import numpy as np

thresholds = np.arange(0.0, 1.0, 0.05)
metrics = []

for threshold in thresholds:
    y_pred_threshold = (y_pred_prob >= threshold).astype(int)
    
    tn, fp, fn, tp = confusion_matrix(y_test, y_pred_threshold).ravel()
    accuracy = accuracy_score(y_test, y_pred_threshold)
    precision = precision_score(y_test, y_pred_threshold)
    recall = recall_score(y_test, y_pred_threshold)
    f1 = f1_score(y_test, y_pred_threshold)
    
    metrics.append([threshold, tn, fp, fn, tp, accuracy, precision, recall, f1])

metrics = np.array(metrics)

# Plot metrics
plt.figure(figsize=(10, 6))
plt.plot(metrics[:, 0], metrics[:, 1], label='True Negative')
plt.plot(metrics[:, 0], metrics[:, 2], label='False Positive')
plt.plot(metrics[:, 0], metrics[:, 3], label='False Negative')
plt.plot(metrics[:, 0], metrics[:, 4], label='True Positive')
plt.xlabel('Threshold')
plt.ylabel('Count')
plt.title('Confusion Matrix Components vs. Threshold')
plt.legend()
plt.show()

plt.figure(figsize=(10, 6))
plt.plot(metrics[:, 0], metrics[:, 5], label='Accuracy')
plt.plot(metrics[:, 0], metrics[:, 6], label='Precision')
plt.plot(metrics[:, 0], metrics[:, 7], label='Recall')
plt.plot(metrics[:, 0], metrics[:, 8], label='F1 Score')
plt.xlabel('Threshold')
plt.ylabel('Metric')
plt.title('Evaluation Metrics vs. Threshold')
plt.legend()
plt.show()

# Explanation of variations:
# - As the threshold increases, the number of true positives and false positives generally decreases, while the number of true negatives and false negatives increases.
# - The optimal threshold can be defined based on the specific requirements of the problem, such as maximizing precision, recall, or a combination of both (F1 score).
```

### Task 2 - Include a financial cost
In the context of predicting student depression, if the model outputs a positive prediction (the student is predicted as being depressed), you must pay for the student to go to the hospital. This cost is substantial, therefore, it is crucial not only to evaluate the standard classification metrics—such as accuracy, precision, recall, and F1-score—but also to consider the financial cost.

Find a way to define the optimal threshold, including the cost of a positive prediction.

```python
cost_per_prediction = 1000  # Example cost per positive prediction
total_costs = []

for threshold in thresholds:
    y_pred_threshold = (y_pred_prob >= threshold).astype(int)
    fp_cost = fp * cost_per_prediction
    total_cost = fp_cost  # Add other costs if applicable
    total_costs.append(total_cost)

total_costs = np.array(total_costs)

# Plot total costs vs. threshold
plt.figure(figsize=(10, 6))
plt.plot(thresholds, total_costs, label='Total Cost')
plt.xlabel('Threshold')
plt.ylabel('Total Cost')
plt.title('Total Cost vs. Threshold')
plt.legend()
plt.show()

# Optimal threshold can be defined as the one that minimizes the total cost
optimal_threshold = thresholds[np.argmin(total_costs)]
print(f'Optimal Threshold: {optimal_threshold}')
```

### Task 3 - Cross validation & hyperparameters optimization
What are the hyperparameters in the logistic regression? 
Change your code to find the optimal hyperparameters and train it with cross validation.

```python
from sklearn.model_selection import GridSearchCV

# Hyperparameters for logistic regression
param_grid = {
    'C': [0.1, 1, 10, 100],
    'solver': ['liblinear', 'saga'],
    'max_iter': [100, 200, 300]
}

# Grid search with cross-validation
grid_search = GridSearchCV(LogisticRegression(), param_grid, cv=5, scoring='f1')
grid_search.fit(X_train, y_train)

# Best hyperparameters
best_params = grid_search.best_params_
print(f'Best Hyperparameters: {best_params}')

# Train with best hyperparameters
model_optimized = LogisticRegression(**best_params)
model_optimized.fit(X_train, y_train)

# Make predictions with the optimized model
y_pred_optimized = model_optimized.predict(X_test)
y_pred_prob_optimized = model_optimized.predict_proba(X_test)[:, 1]
```

### Task 4 - Investigate and understand predictions
Now that you have an optimized classification (almost), you want to understand why it predicts some students as depressed.
You might be interested by analyzing the difference of feature values for different predicted populations (TP, TN, FP & FN).
You could also have a look at the weights of your logistic regression.

```python
# Analyzing feature values for different predicted populations
df_test = X_test.copy()
df_test['True Label'] = y_test
df_test['Predicted Label'] = y_pred_optimized

true_positives = df_test[(df_test['True Label'] == 1) & (df_test['Predicted Label'] == 1)]
true_negatives = df_test[(df_test['True Label'] == 0) & (df_test['Predicted Label'] == 0)]
false_positives = df_test[(df_test['True Label'] == 0) & (df_test['Predicted Label'] == 1)]
false_negatives = df_test[(df_test['True Label'] == 1) & (df_test['Predicted Label'] == 0)]

print('True Positives:')
print(true_positives.describe())
print('True Negatives:')
print(true_negatives.describe())
print('False Positives:')
print(false_positives.describe())
print('False Negatives:')
print(false_negatives.describe())

# Weights of logistic regression
feature_weights = pd.DataFrame({'Feature': X.columns, 'Weight': model_optimized.coef_[0]})
feature_weights = feature_weights.sort_values(by='Weight', ascending=False)
print(feature_weights)
```