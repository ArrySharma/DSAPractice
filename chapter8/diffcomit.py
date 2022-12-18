import os


# Set the directory containing the files to commit
directory = os.path.join('C:', 'Users', 'arshd', 'Desktop', 'DSA C++', 'chapter8')

# Iterate over the files in the directory
for filename in os.listdir(directory):
  # Build the Git commit command
  command = "git commit {} -m 'Commit file {}'".format(os.path.join(directory, filename), filename)
  # Execute the Git commit command
  os.system(command)
