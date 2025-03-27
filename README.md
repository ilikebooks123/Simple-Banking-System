# Simple-Banking-System

# Project Description
the simple banking system is an easy to use system with the following operations:
1. checking balance
2. withdrawing 
3. dipositing 
4. existing the system 
# Project Feature
User Interface
-
Displays a welcoming message and operations available

![alt text](<Screenshot 2025-02-11 185002.png>)

Operation One
-
Allows the user to check their balance before and after transactions

![alt text](<Screenshot 2025-02-11 185939.png>)

Operation Two
-
Allows user to deposite money into the bank

![alt text](<Screenshot 2025-02-11 190821.png>)

Operation Three 
-
Allows the user to withdrawal money from the bank

![alt text](<Screenshot 2025-02-11 191338.png>)

However if the user trys to withdrawal more money then the current amount in their balance the system will inform you

![alt text](<Screenshot 2025-02-11 191426.png>)

Operation Four 
-
Allows the user to exit the system

![alt text](<Screenshot 2025-02-11 191808.png>)

# Implementations 
state diagram 
-
![alt text](<Screenshot 2025-02-12 160619.png>)

Error Handling Type I: Unavailable Operation
-
When entering operations if chosen operation is not available user will be told to pick one of the four operations
![alt text](<Screenshot 2025-02-11 192555.png>) 

Error Handling Type II: Non-integer input 
-
If any non-integer is imputed into the system it will ask the user to input an integer

![alt text](<Screenshot 2025-02-11 193017.png>)
  
Buffer Handling
-
while (getchar() != '\n'); This function was used to to clear the buffer. This is a loop that takes characters from the buffer and discards them until its a new line.

Buffer Explained
-
If you do not know what the buffer is or how it works I  will give a simple explanation here. The buffer is what stores the data inputted into the terminal from using scanf(or any code that request input from the user). However, if the user inputs more variables into the terminal then the code asks for, the buff will keep the data and input it into the next line of code that requests an input.

While Function
-
The while function was made using a variable called “run” that was set as true allowing the function to run on forever until operation 4 is picked setting “run” to false

![alt text](<Screenshot 2025-02-11 201506.png>)


While Function Explained
-
How the while function works is that it will have a condition that needs to be made along with code that will be attached to it, meaning as long as the while condition is true the code attached to the while function will run until the condition is no longer true

# Run Demo 
Project Features Run Demo
-
![alt text](<Screenshot 2025-03-26 150826.png>)
![alt text](<Screenshot 2025-03-26 150849.png>)

Implementations Run Demo
-
![alt text](<Screenshot 2025-03-26 151312.png>)
![alt text](<Screenshot 2025-03-26 151538.png>)

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
Buffer explained: [Problems with scanf](https://www.youtube.com/watch?v=Kl23Gjp_bmI)








