# 0x09. C - Static libraries
Summary:

A static library is a collection of precompiled object code that is combined into a single file, often with the extension ".a" (on Unix-based systems) or ".lib" (on Windows systems). It contains functions, data, and other resources that can be used by a program at compile-time. When using a static library, the object code is directly linked into the executable, making it self-contained and independent of external dependencies.

To create a static library, you typically follow these steps:

1. Write the source code for the functions and modules you want to include in the library.
2. Compile each source file into object files using a compiler (e.g., GCC, Clang).
3. Use the archiver tool (usually "ar") to create the library file by combining the object files into a single archive.
   - Example: `ar rcs libexample.a file1.o file2.o`
   - This command creates a library file called "libexample.a" from the object files "file1.o" and "file2.o".

The archiver tool, "ar," is commonly used to create and manage static libraries. It provides various commands to manipulate library files:

- `ar rcs library.a file1.o file2.o`: Creates or updates the library file "library.a" by adding the object files "file1.o" and "file2.o."
- `ar t library.a`: Lists the contents of the library file "library.a" (i.e., the object files it contains).
- `ar x library.a`: Extracts the object files from the library file "library.a."
- `ar d library.a file.o`: Deletes the object file "file.o" from the library file "library.a."

To use a static library in your program, you need to follow these steps:

1. Include the library's header file(s) in your source code, which contain the function declarations and other necessary information.
2. During the compilation process, specify the library file as an input to the linker.
   - Example: `gcc -o myprogram myprogram.c -L/path/to/library -lmylibrary`
   - This command links the object file "myprogram.o" with the static library "libmylibrary.a" located in "/path/to/library."

The linker, which is invoked by the compiler, resolves the function references in your code with the corresponding implementations from the static library. The resulting executable contains the necessary code from the library, allowing your program to utilize its functionality.

The "ranlib" command is often used on Unix-based systems to generate an index for the library, which improves the efficiency of certain operations on the library file.

- `ranlib library.a`: Generates an index for the library file "library.a" to speed up symbol lookup.
- The "nm" command can be used to list the symbols (functions and variables) defined in an object file or library.
  - `nm library.a`: Lists the symbols defined in the library file "library.a" with their corresponding addresses.

Overall, static libraries provide a convenient way to package and distribute reusable code, allowing programs to link against them for easy integration of functionality.