/**
* Author : Holden Smayda
* Date : 1/29/2019
* This program computes income taxes based on adjusted
* gross income and a child tax credit.
*
*/


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);

  printf("Do you have any children? (Y) or (N)? ");
  getchar(); //remove the endline character
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax:
childCredit = children * 1000;

if(agi >= 0 && agi < 17000){
	Tax = ((agi - 0)* 0.1);
}

else if(agi >= 17000 && agi < 69000){
	Tax = ((agi - 17000) * 0.15) + 1500;
}

else if(agi >= 69000 && agi < 139350){
	Tax = ((agi - 69000) * 0.25) + 9500;
}

else if(agi >= 139350 && agi < 212300){
	Tax = ((agi - 139350) * 0.28) + 27087.5;
}

else if(agi >= 212300 && agi < 379150){
	Tax = ((agi - 212300) * 0.33) + 47513.5;
}

else(agi >= 379150){
	Tax = ((agi - 379150) * .35) + 102574.0;
}

totalTax = Tax - childCredit;

  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
