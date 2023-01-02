1. Advantage & Disadvantage of Array.

Sol: Array is a data structure which can store multiple similar type data under one variable name.

Here is some advantage of array:

1.Array helps us to store multiple similar type data under one variable name.
2.In an array, accessing an element is very easy by using the index number.
3.The search process can be applied to an array easily.
4.2D Array is used to represent matrices.
5.For any reason a user wishes to work with multiple similar type data then the Array can be used and utilized efficiently.

Disadvantage of Array:

1.Array can't store values of two data type. For example, in an integer array only integer values can be stored, while in a float array only floating value and character array can have only characters.
2.While declaring an array, passing size of an array is compulsory.
3.Size of an Array ust be a constant. Thus, there is either shortage or wastage of memory.
4.Shifting is required for insertion or deletion of elements in an array.
5.An Array doesn't check boundaries. We cannot check, if the values entered in an array are exceeding the size of that array or not.




2. Define string function with example.

Sol: We're often required to modify the strings and perform several operations on them according to our needs. If we want to get the length of the string, we could run a loop and calculate its length, but it is not the best way in case of complex problems. Hence, string functions are used to make our code efficient and straightforward as they are pre-written so we can use them directly.

The string handling functions are defined in the header file string.h. This header file must be included in the C program to use the string handling functions.

Example:
1. strlen() - It returns the string's length.
2. strcmp() - It compares two strings and returns 0 if the strings are the same.
3. strcat() - It concatenates two strings and returns the concatenated string.
4. strcpy() - It copies one string into another.




3. Function.

Sol:

Function:
Function is block of code that performs a specific task.

Type of Function:
1.Built-in/Library Function.
2.User Define Function.

Built-in/Library Function:
The Function which provided by the system and stored in library is called Built-in/Library Function.
Example: scanf() , printf() , strcpy , strlwr , strcmp , strlen , strcat , etc.

User Define Function:
User-defined functions are a block of code written by the user to perform a specific action. A user-defined function has a return type, a function name, parameters, and the body of the function.

Call by value:
Call by value is the method of passing arguments to a function copies the actual value of an argument into the formal parameter of the function. In this case, changes made to the parameter inside the function have no effect on the argument.

Call by reference:
The call by reference method of passing arguments to a function copies the address of an argument into the formal parameter. Inside the function, the address is used to access the actual argument used in the call. It means the changes made to the parameter affect the passed argument.

Advantage of Function:
Function is block of code that performs a specific task. Here is some advantage of Function:
1.Function break a big code in smaller functions keeps the program organized and easy to understand.
2.Use of functions enhances the readability of a program.
3.Using function the flow of a program can be easily managed.
4.It reduces the complexity of a program and gives it a modular structure.
5.A function can be used to create our own header file which can be used in any number of programs.

Recursive function:
The function which calls itself is called a recursive function, and the function call is termed a recursive call.

Here is some advantage of Recursive function:
1.The code may be easier to write.
2.Reduce unnecessary calling of function.
3.Extremely useful when applying the same solution.
4.Recursion reduce the length of code.
5.It is very useful in solving the data structure problem.





4. File handling.

Sol: in the software industry, most of the programs are written to store the information fetched from the program. One such way is to store the fetched information in a file.

Some common mood of file:
1.fopen() - create a new file or open a existing file.
2.fclose() - close a file.
3.getc() - reads a character from a file.
4.putc() - writes a character to a file.
5.fscanf() - reads a set of data from a file.
6.fprintf() - writes a set of data to a file.

Why we use file handling:
1.Reusability: It helps in preserving the data or information generated after running the program.
2.Large storage capacity: Using files, you need not worry about the problem of storing data in bulk.
3.Saves time: There are certain programs that require a lot of input from the user. You can easily access any part of the code with the help of certain commands.
4.Portability: You can easily transfer the contents of a file from one computer system to another without having to worry about the loss of data.





5. Structure.

Sol: In C programming, a structure is a collection of variables under a single name. And these variables can be of different data types.

Advantage of using structure:
1.By using structures we can store variable with different data types in our program.
2.Structure allow us to store data type like int, float ,double ,char.
3.By using structure we can create array of given structure and can access or modify all the variables in that structure.
4.Structure help to reduce complexity of program.
5.Structure keeps our code clean.


Difference between Array & Structure.

Array:
1.Array is a collection of multiple similar type data under one variable name.
2.Array uses subscripts or “[ ]” (square bracket) for element access.
3.Array is pointer as it points to the first element of the collection.
4.Instantiation of Array objects is not possible.
5.Size of Array is fix.
6.Bit field is not possible in an Array.
7.Array declaration is done simply using [] and not any keyword.
8.Arrays is a non-primitive datatype.
9.Array traversal and searching is easy and fast.
10.Array elements are accessed by their index number using subscripts.



Structure:
1.Structure is the collection of multiple different type data.
2.Structure uses “.” (Dot operator) for element access.
3.Structure is not a pointer.
4.Instantiation of Structure objects is possible.
5.Size of structure isn't fix.
6.Bit field is possible in an Structure.
7.Structure declaration is done with the help of “struct” keyword.
8.Structure is a user-defined datatype.
9.Structure traversal and searching is complex and slow.
10.Structure elements are accessed by their names using dot operator.