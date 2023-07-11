## 0x15. C - File I/O 

Summary notes: 
###  A file descriptor is a number that uniquely identifies an open file in a computer's operating system. It describes a data resource, and how that resource may be accessed 

####  Initially used in Unix, file descriptors are now employed by modern operating systems such as Linux, macOS, and BSD. In Windows, file descriptors are referred to as file handles.

####  In Unix-like systems, the first three file descriptors are known as:
		### STDIN (standard input), 
		### STDOUT (standard output), and 
		### STDERR (standard error). 
	-> STDIN is responsible for receiving input, 
	-> while STDOUT and STDERR are used for output and error messages, 
	   respectively.

####  File descriptors can be accessed directly using the default shell of Linux, macOS, and Windows Subsystem for Linux, which is bash. By redirecting file descriptors, you can control where the output goes. 

	For instance, 
		> the find command sends successful output to STDOUT (file descriptor 1) and error messages to STDERR (file descriptor 2). 
		> By redirecting STDERR to /dev/null, you can hide error messages. therefore, understanding the distinction between STDOUT and STDERR is crucial when working with program output, as you may need to redirect STDERR to STDOUT for proper processing.

#### In summary, file descriptors play a vital role in operating systems by uniquely identifying open files and data resources. They enable efficient resource access and manipulation, and understanding how to work with them is crucial for effective programming in various operating environments.


