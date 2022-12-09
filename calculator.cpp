#include <iostream>
# include <sstream>
# include <cmath>
# include <cstdio>
# include <cstring>
#include <fstream>

using namespace std;






void print(string text){
  cout << "\n";
  cout << text;
  cout << "\n";
}


string input(string question){
  string userInput;
  cout<< question;
  cin >> userInput;
  cout <<"\n";
  return userInput;
  
}


int string_conversion(string str){
  
  
  int num2;
  num2 = stoi(str);
  return num2;
  
  
}

void writeToFile(){
  ofstream myfile;
  myfile.open ("outputfile.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
}

void printQuadEQ(int a, int b, int c){
  print(" ");
  cout<<"Your equation is: ";

  // A
  if(a != 0){
    
    
        if (a != 1){
          cout<< a;
        }
    cout<<"x^2 ";

    } // end a != 0

  // B
    
  if (b != 0){
    if (b > 0){
      cout<< " + ";
        if (b != 1){
          cout<< b;
          cout<< "x";
        }
      }
    else if (b < 0) {
      cout<< " - ";
      cout<< b;
    }
    else{
    cout << "x";
      }
  }

  // C
    
  if (c != 0){
    if (c > 0){
      cout<< " + ";
      cout<< c;
      }
    else {
      cout<<" - ";
      cout << c * -1;
    }
  
  }
  
  cout<<"";



  } // end of function


float findYInt(int x, int y, int m){

// Example Case:
    // (2, 3) y= 6x+b > solve for b
  
  // find the y Intercept given an equation and a point

  // print formula
  cout<< "y = mx + b";
  cout<< "\n";
  // print formula with slope
  cout<< "y = ";
  cout<< m;
  cout<< "x + b";
  cout<< "\n";

  // insert (x, y) and print formula
  
  cout<< y;
  cout<< " = ";
  cout<< m;
  cout<<"(";
  cout<<x;
  cout<<") + b";
  cout<< "\n";

  // show m*x
  
  cout<< y;
  cout<< " = ";
  cout<< m * x;
  cout<<" + b";
  

  // Isolate b by moving mx to the other side


  // perform inverse operation
  cout<<"\n";
  if (m*x > 0){
    cout<< "-";
    cout<< m*x;
    cout<<"  ";
    cout<< " -";
    cout<< m*x;
    cout<< "\n";
  }
  else if (m*x < 0){
    cout<< " +";
    cout<< m*x*-1;
    cout<<"  ";
    cout<< " +";
    cout<< m*x*-1;
    cout<<"\n";
  }


  // print EQ with b isolated
  cout<< y;
  
  if (m*x > 0){
    cout<< "-";
    cout<< m*x;
    }
  else if (m*x < 0){
    cout<< " +";
    cout<< m*x*-1;
    }
  cout<< " = b";
  cout<<"\n";


  // simplify
  float b = y - m*x;


  // print y int
  cout<< "Your y intercept is "; 
  cout<< b;
  // return
  return b;
   
  
} // end find y int function




// Put main last that way everything is defined before hand

// main program function that does not need to be called
int main() {
  
   int x = string_conversion(input("X= "));
   int y = string_conversion(input("Y= "));
   int m = string_conversion(input("M= "));
  findYInt(x, y, m);
//   findYInt(2, 3, 5);
//   
//   cout << "Hello World!";
//   cout << 9;
// 
//   // new lines
//   cout << "\nI know how to... \n";
//   cout << "print on multiple lines";
// 
// 
//   // data types
//   int integerExample = 4;
//   double doubleExample = 34.2;
// 
// 
// 
//   cout << "\n";
//   cout << integerExample;
//   cout << "\n";
//   cout << doubleExample;
// 
// 
//   // constants
//   const string title = "This is my title forever and always";
// 
//   print(title);
// 
//   // user input
//   string userInputString = input("What is your number? ");
//   int userNum = string_conversion(userInputString);
// 
//   cout << "this is your number squared: ";
//   cout << userNum * userNum;
//   
//   
//   printQuadEQ(7, 3, 2);
  
return 0;

  }

