# 98. Get System Time
# Sample solution 1

# Import the 'time' module to work with time-related functions.
#import time 

# Print an empty line for formatting.
#print()

# Get and print the current time using 'time.ctime()'.
#print(time.ctime())

# Print an empty line for formatting.
#print()



# 99. Clear Terminal
# Sample solution 1

# Import the 'os' and 'time' modules to work with system commands and time-related functions, respectively.

#import os
#import time

# Execute the 'ls' command to list the contents of the current directory.
#os.system("ls")

# Pause the program's execution for 2 seconds.
#time.sleep(2)

# Clear the terminal screen. (This comment is not entirely accurate; 'os.system('clear')' is used to clear the terminal screen.)
#os.system('clear')



# 100. Get Host Name
# Sample solution 1

# Import the 'socket' module to work with networking functionalities.

#import socket
# Use 'socket.gethostname()' to retrieve the name of the current host or machine.
#host_name = socket.gethostname()

# Print the host name to the console
#print("Host name:", host_name)


# Sample solution 2

# Import the 'platform' module to retrieve system-related information.
#import platform
# Use 'platform.uname()' to obtain a tuple of information about the system, including the host name.
#host_name = platform.uname()[1]

# Print the host name to the console.
#print("Host name:", host_name)

# Sample solution 3

# Import the 'os' module to access operating system-related functionality.
#import os
# Use 'os.uname().nodename' to retrieve the host name of the current system.
#host_name = os.uname().nodename
# Print the host name to the console.
#print("Host name:", host_name)
