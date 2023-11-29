In this project, I will be learning about linked lists.

Linked lists are nodes who have a data part and an address part and when these nodes are linked they create linked lists. These lists offer better flexibility than an array.

The nodes are scattered around the memory, but are linked by addresses. 


# How to start a node:
First you create a struct with the desired data and add a self-referential pointer to that same struct. 

![carbon (7)](https://github.com/GabrielVelez13/singly_linked_lists/assets/144173998/28d6b102-a07d-4219-8c20-7d9120fe2105)


After that it is necessary to link the struct and allocate memory to it.

![carbon (8)](https://github.com/GabrielVelez13/singly_linked_lists/assets/144173998/ffeb403e-4e20-4d15-89a6-259771ea44fb)


This is a simple node of a link list that from a starting place in memory (pointer) to the struct.

To create an actual linked list with more than one link. We need to understand that the arrow operator '->' in C dereferences a value in memory when using structs  and that we also need a temporary space to hold the other memory address.  The code would look something like this.

![carbon (6)](https://github.com/GabrielVelez13/singly_linked_lists/assets/144173998/c60e917e-361c-45e9-8f36-e4f14d37deed)
