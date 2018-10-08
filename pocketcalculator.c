/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 02
 * Title:			pocketcalculator
 * Author:		Moritz Polleichtner
 * ----------------------------------------------------------
 * Description:
 * you can choose between 4 different Calculator function. 
 * ----------------------------------------------------------
 */
#include <stdio.h>
#include <float.h>



int PrintMenu()
{
  int choice;
  do {
    printf("Add (1), Subtract (2), Multiply (3), Divide (4), Stop program(-1) Enter your choice: ");
    scanf("%d", &choice);
  } while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != -1);

  return choice;
}
void ExecuteOption(int choice)
{
  switch (choice) {
    case 1:
      Add(firstNumber, secondNumber);
      break;
    case 2:
      Subtract(firstNumber, secondNumber);
      break;
    case 3:
     Multiply(firstNumber, secondNumber);
      break;
    case 4:
      Divide(firstNumber, secondNumber);
      break;
      case -1:
      break;
      default:
        printf("inavlid input, please try again\n");
        PrintMenu();
        break;
  }
}

  void GetOperants(double* firstNumber, double* secondNumber)
{
    printf("First operand: ");
    scanf("%lf", firstNumber);

    printf("Second operand: ");
    scanf("%lf", secondNumber);
  }

  void Add(double firstNum, double secondNum)
  {
      int result =  firstNum + secondNum;
      PrintResult(result);

  }
  void Subtract(double firstNum, double secondNum)
  {
      int result = firstNum - secondNum;
      PrintResult(result);
  }

  void Multiply(double firstNum, double secondNum) {
    int result =  firstNum * secondNum;
    PrintResult(result);
  }

  void Divide(double firstNum, double secondNum)
  {
    int result;
    if (secondNum == 0) {
      GetOperants(&firstNum, &secondNum);
    }
    else{
      result =  firstNum / secondNum;
      PrintResult(result);
    }
  }

  void PrintResult(double result)
  {
    if(result < DBL_MIN) {
       printf("Number overflow\n");
    }

    else if(result > DBL_MAX){
      printf("Number underflow\n");
  }
  else{
    printf("Ergebniss : %lf", result);
  }

 }
 int main(int argc, char const *argv[])
 {

    double* firstNumber;
    double* secondNumber;
    int choice;

    choice = PrintMenu();
    GetOperants(&firstNumber, &secondNumber);
    ExecuteOption(choice);

   return 0;
 }
