#1 
"""
import datetime

today = datetime.datetime.now()

print(today)

#2. 
import datetime

today = datetime.datetime.now()
today = today.replace(microsecond = 0)
print(today)

#3. 
import datetime

today = datetime.datetime.now()
print(today.strftime("%d-%m-%Y, %H:%M"))

#4. 
import datetime

today = datetime.datetime.now()
yesterday = today - datetime.timedelta(days=1)
print(yesterday)

# diff between 2 days
diff = today - yesterday
print(diff)
"""
