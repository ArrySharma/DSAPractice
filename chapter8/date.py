import datetime
import random

# Set the current year
current_year = datetime.datetime.now().year

# Create a list of 100 random days in the current year
random_days = [datetime.datetime(current_year, 1, 1) + datetime.timedelta(days=random.randint(0, 365)) for _ in range(100)]

# Sort the list of random days in chronological order
random_days.sort()

# Print each random day as a Git commit
for day in random_days:
  print("git commit -m 'Commit on {}' --date='{}'".format(day.strftime("%B %d, %Y"), day.strftime("%Y-%m-%d %H:%M:%S")))
