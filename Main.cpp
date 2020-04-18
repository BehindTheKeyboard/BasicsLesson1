/********************************************************************
 ********************************************************************
 **          Behind the Keyboard                                    *
 **                                                                 *
 ** LESSON 1: Bits, Bytes, and Data Types!                          *
 **                                                                 *
 ** This program will demonstrate                                   *
 ** primitive values                                                *
 **                                                                 *
 ** Author: The Loose Nut (Adam)                                    *
 ** Date: April 2020                                                *
 ********************************************************************/

//Set up all of our includes here
#include <iostream> //We want this for CIN and COUT
#include <iomanip>  //We need this for our floats

//Set up our namespace for ease of use
using namespace std; //We use std to make life easier when using cin/cout

//Put our functions here before main, or, if after main, place our 
//forward declarations here. They are void because they don't return anything.
void getInput(int& i, char& c, bool& b, float& f, double& d);
void printValuesToConsole(int& i, char& c, bool& b, float& f, double& d);
void educate();

//Put our MAIN class here
/********************************************************************
 ********************************************************************
 *                MAIN                                              *
 * This is the workhorse of our program. We're going to declare a   *
 * few primitive type variables and then print them out to console  *
 *                                                                  *
 ********************************************************************/
int main() {
   //Declare our primitives here
   int      i = 0;
   char     c = 'a';
   bool     b = false;
   float    f = 0.0;
   double   d = 0.0;

   //Now we want to get our input, so call getInput() 
   //and passin our variables
   getInput(i, c, b, f, d);
   
   //Now we want to print them out to the conosle
   //call printToConsole()
   printValuesToConsole(i, c, b, f, d); 
   
   
}

/********************************************************************
 * This is where the functions will live if we used forward -       *
 * declarations.                                                    *
 ********************************************************************/

/********************************************************************
 ********************************************************************
 *                GET INPUT                                         *
 * This function will get our input values for our varuables.       *
 * It takes in an int, char, bool, float and double by REFERENCE    *
 * because we want the values to change in main                     *
 *                                                                  *
 ********************************************************************/
void getInput(int& i, char& c, bool& b, float& f, double& d) {
   //Give our welcome message
   //Note: \n is the same as endl. They both end the line and
   // are like pressing return on the keyboard when typing.
   cout  << "\n\n"
         << "  WELCOME TO LESSON 1: Bits, Bytes, and Data Types!" 
         << endl;
   cout  << "     This simple program demonstrates\n"
         << "     primitive types. Please read the\n"
         << "     following information and then\n"
         << "     follow the prompts carefully.\n" 
         << "  ______________________________________"
         << endl
         << endl;
   cout  << "  --PRESS ENTER TO CONTINUE--\n";
   //cin.get() is a method of getting input. 
   //This is here to allow us to pause the readout.
   cin.get(); 

   //Call educate to print out important information.
   educate();
   
   
   //Give our prompts for input

   cout  << "   Now we are ready to move on.\n\n"
         << "   **Please follow the prompts carefully**\n";

   //Ask for an INT
   cout  << "\n"
         << "   Enter a whole number between -2147483648 and 2147483647: ";
   
   //Get and error check the value
   while (!(cin >> i)) {
      cout << "   Ooops, please enter a whole number.\n";
      //clear cin and ignore limits so we don't go into an eternal loop of doom.
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   }

   //Ask for a CHAR
   cout  << "   Enter a single character: ";
   //Get and error check the value     
   
   while (!(cin >> c)) {
      cout << "  Ooops, please enter a single char.\n";
      //clear cin and ignore limits so we don't go into an eternal loop of doom.
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      
   }
  
   
   //Ask for a BOOL
   cout  << "   Enter 1 for true and 0 for false: ";
   //Get and error check the value
   while (!(cin >> b)) {
      cout  << "  Ooops, please enter a whole number, 1 (or any number other than 0)\n"
            << "  for true and 0 for false.\n";
      //clear cin and ignore limits so we don't go into an eternal loop of doom.
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   }
   
   //Ask for a FLOAT
   cout  << "   Enter a decimal number no longer than 7 decimal places long: ";
   //Get and error check the value
   while (!(cin >> f)) {
      cout << "   Ooops, please enter a decimal number (it can still be an int).\n";
      //clear cin and ignore limits so we don't go into an eternal loop of doom.
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   }
   
   //Ask for a DOUBLE
   cout  << "   Enter a decimal number no longer than 15 decimals places long: ";
   //Get and error check the value
   while (!(cin >> d)) {
      cout << "   Ooops, please enter a decimal number (it can still be an int).\n";
      //clear cin and ignore limits so we don't go into an eternal loop of doom.
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   }

}


/********************************************************************
 ********************************************************************
 *                PRINT VALUES TO CONSOLE                           *
 * This function will get our input values for our varuables.       *
 * It takes in an int, char, bool, float and double by REFERENCE    *
 * because we want the values to change in main                     *
 *                                                                  *
 ********************************************************************/
void printValuesToConsole(int& i, char& c, bool& b, float& f, double& d) {
   
   //Lets print out the values

   cout  << "   Here are the 'Output Values'" << endl << endl;
   cout  << "   Int i is:   '" << i << "' Notice it is a whole number.\n" 
         << endl;
   cout  << "   Char c is:  '" << c << "' A character is one letter or symbol.\n"
         << endl;
   cout  << "   Bool b is:  '" << b << "' 0 equals false, any other number\n"
         << "     indicates true. Keep that in mind.\n"
         << endl;
   cout  << fixed << setprecision(7) << "   Float f is:   '" << f 
         << "'   notice the number of decimal places? (The system may round\n"
         << "   your original number if it wasn't long enough)\n"
         << endl;
   cout  << fixed << setprecision(15) << "   Double d is: '" << d 
         << "'   A double has even more decimal places to the right.\n"
         << endl;
   cout << "   Now you know enough to get started on the next tutorial about\n"
         << "   variables and containers.\n"
         << "      *****END****"
         << endl;
}

/********************************************************************
 ********************************************************************
 *                EDUCATE                                           *
 * This function will educate the user about bits, bytes, and       *
 * Primitive Data Types used in this tutorial. It uses cout to      *
 * print to the console                                             *
 *                                                                  *
 ********************************************************************/
void educate() {

   //Educate the user about bits and bytes
   cout  << "  Before we begin, it is necessary to understand\n"
         << "  the difference between a bit and a byte.\n"
         << "  A BIT is the smallest unit of storage in a computer.\n"
         << "  It is a 'bit' of information. A bit can be either a\n"
         << "  0 or a 1. Example: there are 3 bits in this sentence-\n"
         << "  0 1 0"
         << endl
         << endl;

   cout  << "  --PRESS ENTER TO CONTINUE--\n";
   //cin.get() is a method of getting input. 
   //This is here to allow us to pause the readout.
   cin.get();

   cout  << "  A BYTE is the next step up from a bit and contains 8\n"
         << "  bits of information. When thinking of bits vs bytes,\n"
         << "  imagine that you take a bite(byte) of bits.\n\n"
         << "  Byte Example Sentence: 01100110.\n" 
         << "  A single byte can contain a single character, like\n"
         << "  the letter 'a or A'.\n"
         << "  ______________________________________________________\n"
         << endl;

   cout  << "  --PRESS ENTER TO CONTINUE--\n";
   //cin.get() is a method of getting input. 
   //This is here to allow us to pause the readout.
   cin.get();

   //Educate the user about the data types
   cout  << "\n"
         << "  PRIMITIVE DATA TYPES\n\n"
         << "  INT or INTEGER\n\n"
         << "     Integers contain 4 bytes and are a whole\n"
         << "     number between -2147483648 to 2147483647."
         << endl
         << endl;

   cout  << "  CHAR or CHARACTER\n\n"
         << "     Characters contain 1 byte and are a single character\n"
         << "     value between -128 to 127 or 0 to 255."
         << endl
         << endl;

   cout  << "  BOOL or BOOLEAN\n\n"
         << "     Boolean contains 1 byte and is a value between 0 and 1\n"
         << "     with 0 indicating false and 1 (or any other number)\n"
         << "     indicating true values. The 'boolalpha' flag allows\n"
         << "     for the inclusion of 'true' and 'false' words instead."
         << endl
         << endl;

   cout  << "  FLOAT or FLOATING POINT\n\n"
         << "     Floating points contain 4 bytes and are decimals numbers\n"
         << "     of up to 7 places right of the decimal."
         << endl
         << endl;

   cout  << "  DOUBLE or DOUBLE FLOATING POINT\n\n"
         << "     Double floating points contain 8 bytes and are decimals\n"
         << "     numbers of up to 15 places right of the decimal."
         << endl
         << endl
         << "  _________________________________________________________\n"
         << endl;

   cout  << "  --PRESS ENTER TO CONTINUE--\n";
   //cin.get() is a method of getting input. 
   //This is here to allow us to pause the readout.
   cin.get();

}
