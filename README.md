# Simple-Banking-System

# Project Description
the simple banking system is an easy to use system to help you track money with the following operations:
1. checking balance
2. withdrawing 
3. dipositing 
4. existing the system 
# Project Feature
User Interface
-
Welcomes the user to the bank and provides the operations available 
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):
```
Operation One
-
Allows the user to check their balance before and after transactions
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):1
Your current balance is:0
```

Operation Two
-
Allows user to deposite money into the bank
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):2
Enter Deposit amount:
50
Depost successful!
Your new balance is:50
```
Operation Three 
-
Allows the user to withdrawal money from the bank

```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):3
enter withdrawal amount:
20
Withdrawal successful!
Your new balance is:30
```

However if the user trys to withdrawal more money then the current amount in their balance the system will inform you
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):3
enter withdrawal amount:
100
Insufficent balance. Withdrawal failed.
```

Operation Four 
-
Allows the user to exit the system
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):4
Thank you for using the Simple Bank System. Goodbye!
```
# Implementations 
state diagram 
-
![alt text](<Screenshot 2025-03-27 183327.png>)

Error Handling Type I: Unavailable Operation
-
When entering operations if chosen operation is not available user will be told to pick one of the four operations
 
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):5
You have entered an integer greater then 4 or less then 1 please enter a variable between one and four```
Error Handling Type II: Non-integer input 
-
If any non-integer is imputed into the system it will ask the user to input an integer
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):a
you have entered a non-integer character please enter an integer bewteen 1 and 4
```

  
Buffer Handling
-
while (getchar() != '\n'); This function was used to to clear the buffer. This is a loop that takes characters from the buffer and discards them until its a new line.

Buffer Explained
-
If you do not know what the buffer is or how it works I  will give a simple explanation here. The buffer is what stores the data inputted into the from using scanf(or any code that request input from the user). However, if the user inputs more variables into the terminal then the code asks for, the buff will keep the data and input it into the next line of code that requests an input. However the the problem that arised for my code is caused from the user pressing enter which in c programming is counted as '\n' a charater of its own

While Function
-
The while function was made using a variable called “run” that was set as true allowing the function to run on forever until operation 4 is picked setting “run” to false
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):1
Your current balance is:0

------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):4
Thank you for using the Simple Bank System. Goodbye!
```

While Function Explained
-
How the while function operates is that it will have a condition that needs to be made along with code that will be attached to it, which makes it so as long as the while condition is true the code attached to the while function will run until the condition is no longer true.

# Run Demo 
Project Features Run Demo
-
### Checking balance
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):1
```
### Depositing money
```
Your current balance is:0
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):2
Enter Deposit amount:
30
Depost successful!
Your new balance is:30
```
### Withdrawing money
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):3
enter withdrawal amount:
20
Withdrawal successful!
Your new balance is:10
```

### Exiting the system
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):4
Thank you for using the Simple Bank System. Goodbye!
```

Implementations Run Demo
-
### User enters unavalable options
```
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):a
you have entered a non-integer character please enter an integer bewteen 1 and 4

------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):5
You have entered an integer greater then 4 or less then 1 please enter a variable between one and four
------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):2
Enter Deposit amount:
a
you have entered a non-integer character please enter an integer bewteen 1 and 4

------------------------------------
      Welcome to the simple bank
------------------------------------
Please select an operation:
1. Check Balance
2. Deposit
3. Withdrawal
4. Exit
Enter your choice(1-4):3
enter withdrawal amount:
a
you have entered a non-integer character please enter an integer bewteen 1 and 4
```

# Challenges and Future Improvements
Challenges
-
- Creating the while condition
- Code architecture 
- Error Handling
  
Future Improvements
-
- Ability to check transactions
- Taking out loans
  
# References 
Buffer explanation: [Problems with scanf](https://www.youtube.com/watch?v=Kl23Gjp_bmI)

While Condition: @alextianyf 

Code architecture: @alextianyf

Error handling: help from @alextainyf
