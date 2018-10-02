#include <stdio.h>
int main(int argc, char const *argv[])
{
   int choice = printMenu();
   executeOption(choice);
   double firstNumber;
   double secondnumber;
   getOperants(&firstNumber, &secondNumber)
   add(firstNumber, secondNumber);
   subtract(firstNumber, secondNumber);
   multiply(firstNumber, secondNumber);
   divide(firstNumber, secondNumber);



  return 0;
}

int printMenu()
{
  int choice;
  printf("Add (1), Subtract (2), Multiply (3), Divide (4), Stop program(-1) ");
  printf("Enter your choice; \n");
  scanf("%d\n", &choice);
}
void executeOption(int choice)
{
  switch (choice) {
    case 1:
      add();
      break;
    case 2:
      subtract();
      break;
    case 3:
      multiply();
      break;
    case 4:
      Divide();
      break;
      case -1:
      break;
      default:
        printf("inavlid input\n");
        displayMenu();
        break;
  }

  void getOperants(double &firstNumber, double &secondNumber)
{
    printf("First operand: \n");
    scanf("%lf\n", &firstNumber);
    printf("Second operand: \n");
    scanf("%lf\n", &secondNumber);
  }

  void add(double firstNum, double secondNum)
  {
      int result =  firstNum + secondNum;
      printResult(result);

  }
  int subtract(double firstNum, double secondNum)
  {
      int result = firstNum - secondNum;
      printResult(result);
  }

  int multiply(double firstNum, double secondNum) {
    int result =  firstNum * secondNum;
    printResult(result);
  }

  int divide(double firstNum, double secondNum)
  {
    int result =  firstNum / secondNum;
    printResult(result);
  }

  void printResult(double result)
  {
      printf("result: ", result);
  }

}
