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

  int displayMenu(){
  int selection;

    printf("Add(1), Subtract(2), Multiply(3), Divide(4) or Stop Program(-1)");
    scanf("%d", &selection);

    return selection;
  }

  void getOperants(double* firstNumber, double* secondNumber){

    printf("first operand: ");
    scanf("%lf", firstNumber);

    printf("second operand: ");
    scanf("%lf", secondNumber);
  }

  void printResults(double result){
    printf("Ergebnis: %lf\n", result);
  }

  void add(double firstNumber, double secondNumber){
    double sum;

    sum = firstNumber + secondNumber;
    printResults(sum);
 }

  void subtract(double firstNumber, double secondNumber){
    double sum;

    sum = firstNumber - secondNumber;
    printResults(sum);
  }

  void multiply(double firstNumber, double secondNumber){
    double sum;

    sum = firstNumber * secondNumber;
    printResults(sum);
  }

  void divide(double firstNumber, double secondNumber){
    double sum;

    if (secondNumber == 0) {
      printf("Division by zero\n");
    }
    else{
      printResults(sum = firstNumber/secondNumber);
    }



  }

  void execute(int selection, double firstNumber, double secondNumber) {
    switch (selection) {
      case 1:
       add(firstNumber, secondNumber);
       break;
      case 2:
       subtract(firstNumber, secondNumber);
       break;
      case 3:
       multiply(firstNumber, secondNumber);
       break;
      case 4:
       divide(firstNumber, secondNumber);
       break;
      case -1:
       break;
     default :
       printf("invalid input! try again\n");
       displayMenu();
       break;
    }
  }

  int main(int argc, char const *argv[])
  {
    int selection;

    do {
      double firstNumber;
      double secondNumber;

      selection = displayMenu();
      getOperants(&firstNumber, &secondNumber);
      execute(selection, firstNumber, secondNumber);
    } while(selection == -1);


    return 0;
  }
