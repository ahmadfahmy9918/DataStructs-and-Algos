README File:

Question: Suppose that towers(5, 2, 3) is invoked.

1.How will the first recursive call to towers() be invoked? 
Answer this question in the form: towers(x, y, z) where you give
the actual values to the three parameters.

From the question we see that (5,2,3) inidictae 5 blocks, they are 
located at the second block and the final destination is slot 3. 

..towers(4, 2, 1)

2. How many recursive calls to towers() will be made before this 
first recursive call actually returns to the initial invocation?

31 Recursive calls were made in-order to get to the initial 
invocation.


3. Once towers(5, 2, 3) has invoked its first recursive call to
towers() and this invocation has returned, what will be printed
to stdout? (i.e. What actual move will be made by towers(5, 2, 3) ?)

2 3
2 1
3 1
2 3
1 2
1 3
2 3
2 1
3 1
3 2
1 2
3 1
2 3
2 1
3 1
2 3
1 2
1 3
2 3
1 2
3 1
3 2
1 2
1 3
2 3
2 1
3 1
2 3
1 2
1 3
2 3


4. How will the second recursive call to towers() be invoked? Answer 
this question in the form: towers(x, y, z) where you give the actual
values to the three parameters

....towers(3, 1, 2)

5. Suppose that towers(8, 1, 2) is invoked. How many lines will be printed to stdout?

255 Moves. 

6. The task accomplished from this main file is allowing the user to be interactive with the system.
The user is now able to enter values from which they can virutally play the hanoi game. 
One was required to generate error messages for negative inputs, or a lack of proper 
in-listment of the commands which require 3 connstraints to run this game. This was established
by formulating if statements. To add, atoi was utlizied to make usage of string to integer methods
in order to run the game