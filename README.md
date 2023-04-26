# Dynamic-Memory-Allocation

C Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure is changed during the runtime.

##### Example
If there is a situation where only 5 elements are needed to be entered in this array.  
In this case, the remaining 4 indices are just wasting memory in this array. So there is a requirement to lessen the length (size) of the array from 9 to 5.  

Take another situation.  
In this, there is an array of 9 elements with all 9 indices filled.  
But there is a need to enter 3 more elements in this array. In this case, 3 indices more are required.   
So the length (size) of the array needs to be changed from 9 to 12.

This procedure is referred to as **Dynamic Memory Allocation in C.**

Dynamic Memory Allocation can be done using:
1) malloc()  
2) calloc()  
3) free()  
4) realloc()  

## DYNAMIC MEMORY ALLOCATION USING MALLOC  

The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size.  
It returns a pointer of type void which can be cast into a pointer of any form.  
It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

![image](https://user-images.githubusercontent.com/91966613/234441386-69a7fd7c-500c-447d-a2b5-b953cd4f0514.png)

##### Syntax: 

      ptr = (cast-type*) malloc(byte-size)

#### For Example:
ptr = (int*) malloc(100 * sizeof(int)); 

Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory.     
And, the pointer ptr holds the address of the first byte in the allocated memory. 
If space is insufficient, allocation fails and returns a NULL pointer.

Parameters  
size − This is the size of the memory block, in bytes.  

Return Types of malloc() 
If the size is zero, the return value depends on the particular library implementation (it may or may not be a null pointer), but the returned pointer shall not be dereferenced.  
1) void pointer is used to the uninitialized the initialized memory block that is allocated by the function.  
2) null pointer if the allocation failsbut the returned pointer shall not be dereferenced.  

void pointer is used to the uninitialized the initialized memory block that is allocated by the function
null pointer if the allocation fails

### OUTPUT SCREENSHOT  
![image](https://user-images.githubusercontent.com/91966613/234442125-98319846-0d35-4e0b-a8de-69bc40c4c3ea.png)
