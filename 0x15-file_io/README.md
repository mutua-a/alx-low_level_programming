# 0x15. C - File I/O 

	Summary notes:

#### File descriptors are essential in operating systems as they uniquely identify open files and data resources. When a program requests to open a file or another resource like a network socket, the operating system grants access, creates an entry in the global file table, and provides the program with the location of that entry. These descriptors are represented by non-negative integers like 0, 12, or 567 and exist for every open file on the system.

####  Initially used in Unix, file descriptors are now employed by modern operating systems such as Linux, macOS, and BSD. In Windows, file descriptors are referred to as file handles.

####  In Unix-like systems, the first three file descriptors are known as STDIN (standard input), STDOUT (standard output), and STDERR (standard error). STDIN is responsible for receiving input, while STDOUT and STDERR are used for output and error messages, respectively.

####  File descriptors can be accessed directly using the default shell of Linux, macOS, and Windows Subsystem for Linux, which is bash. By redirecting file descriptors, you can control where the output goes. For instance, the find command sends successful output to STDOUT (file descriptor 1) and error messages to STDERR (file descriptor 2). By redirecting STDERR to /dev/null, you can hide error messages. Similarly, understanding the distinction between STDOUT and STDERR is crucial when working with program output, as you may need to redirect STDERR to STDOUT for proper processing.

#### In summary, file descriptors play a vital role in operating systems by uniquely identifying open files and data resources. They enable efficient resource access and manipulation, and understanding how to work with them is crucial for effective programming in various operating environments.
