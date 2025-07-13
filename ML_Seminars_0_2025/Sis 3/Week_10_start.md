# Logistic Regression for Identifying Depression Among Students

## Overview
In this task, you will use Logistic Regression to predict whether a student is experiencing depression based on different factors such as academic pressure, sleep habits, and financial stress.

## Dataset
We will use the Student Depression Dataset (good timing after mid term exam I guess).

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
### **Use the df DataFrame from the cell below for all tasks.**
### Task 1 – Explore the Data
Understand the dataset and find interesting patterns :
- Use basic pandas functions to check the data.
- Look for missing values, outliers, and patterns in the features.
- Create visualizations such as heatmap, histograms, bar charts, scatter plots etc. to explore relationships between different features and depression.

### Task 2 – Data Preprocessing
Clean and prepare the data for modeling : 
- Handle missing values (e.g., filling or removing them). 
- Convert categorical variables into numbers using encoding. 
- Normalize or standardize numerical features if needed.
- Explain why you made certain preprocessing choices.

### Task 3 – Train the Model
Train a Logistic Regression model to predict depression : 
- Split the data into training and testing sets.
- Train a Logistic Regression model using scikit-learn. Look at the different parameters in scikit learn libraries ant try to change some of them (only if you can understand them).
- Make predictions on the test data.

### Task 4 – Evaluate the Model
Measure how well the model performs : 
- Calculate accuracy, precision, recall, and F1-score.
- Create a confusion matrix to see how often the model makes correct and incorrect predictions.
- Plot an ROC curve to analyze model performance.
- Think on how we could analyse predicted probabilities

#### Some documentation 

[Seaborn Heatmap](https://seaborn.pydata.org/generated/seaborn.heatmap.html)

[Pairplot](https://seaborn.pydata.org/generated/seaborn.pairplot.html)
(There are many different plots and possible analysis to do with Seaborn. Navigate by yourself and feel free to do some insighful analysis)

[Imputing values](https://scikit-learn.org/stable/modules/impute.html)

[scikit-learn preprocessing documentation](https://scikit-learn.org/stable/modules/preprocessing.html)

[Logistic regression](https://scikit-learn.org/stable/modules/generated/sklearn.linear_model.LogisticRegression.html)

[Classification metrics](https://scikit-learn.org/stable/modules/model_evaluation.html#classification-metrics)

---
---

## Part two

### Task 1 – Evaluate and Visualize Metric Changes Across Thresholds
As we have seen in class, different metrics varry according to the threshold. Explain why.

Compute the TN, TP, FN and FP manually. 
Find a way to visualise their evolution according to the threshold. 
Explain the different variations. What does it tell about your predictions ?

Do the same with evaluation metrics.

How would you define the optimal threshold? 

### Task 2 - Include a financial cost
In the context of predicting student depression, if the model outputs a positive prediction (the student is predicted as being depressed), you must pay for the student to go to the hospital. [...]
This cost is substantial, therefore, it is crucial not only to evaluate the standard classification metrics—such as accuracy, precision, recall, and F1-score—but also to consider the fina[...]

Find a way to define the optimal threshold, including the cost of a positive prediction.

### Task 3 - Cross validation & hyperparameters optimization
What are the hyperparameters in the logistic regression? 
Change your code to find the optimal hyperparameters and train it with cross validation

### Task 4 - Investigate and understand predictions
Now that you have an optimized classification (almost), you want to understand why it predicts some students as depressed.
You might be interested by analysing the difference of feature values for different predicted populations (TP TN FP & FN).
You could also have a look at the weights of you logistic regression.