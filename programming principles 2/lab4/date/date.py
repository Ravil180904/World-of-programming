# 1. Write a Python program to subtract five days from current date.

from datetime import date, timedelta

today = date.today()

credit = today - timedelta(days = 5)
print(credit)
print()

#2. Write a Python program to print yesterday, today, tomorrow.
from datetime import date, timedelta
import datetime

today = date.today()

yesterday = today - timedelta(days = 1)

tomorrow = today + timedelta(days = 1)

print("Yesterday day: ", yesterday.strftime("%Y/%m/%d, %H:%M:%S"))
print("Today is ", today.strftime("%Y/%m/%d"))
print("Tomorrow day is ", tomorrow.strftime("%Y/%m/%d"))
print()

# 3. Write a Python program to drop microseconds from datetime.
from datetime import date, timedelta
import datetime

today = datetime.datetime.now()

today_drop_microseconds = today.replace(microsecond = 0)
print(today_drop_microseconds)
print()

# 4. Write a Python program to calculate two date difference in seconds.
from datetime import datetime, timedelta
year = int(input("Year: "))
month = int(input("Month: "))
day = int(input("Day: "))
hours = int(input("Hours: "))
minutes = int(input("Minutes: "))
seconds = int(input("Seconds: "))
def date_difference(date2, date1):
    timedelta = date2 - date1
    return timedelta.days * 24 * 3600 + timedelta.seconds
#date1 = datetime.strptime('2020-02-19 14:30:00', '%Y-%m-%d %H:%M:%S')
date1 = datetime(year, month, day, hours, minutes, seconds)
date2 = datetime.now()
print("\n%d seconds" %(date_difference(date2, date1)))