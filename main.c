// Author: Mack Mason mjm8542@psu.edu
// Collaborator: Jiulong Tang jzt5526@psu.edu
// Collaborator: Brendan Corso bvc5434@psu.edu
// Collaborator Peter Schulman pks5481@psu.edu
// Section: 4
// Breakout: 6

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
 
  char *charGrade = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(charGrade);
  if (grade >= 93.0)
    printf("Your letter grade for CMPSC 131 is A.");
  if (grade < 93.0 && grade >= 90.0)
    printf("Your letter grade for CMPSC 131 is A-.");
  if (grade < 90.0 && grade >= 87.0)
    printf("Your letter grade for CMPSC 131 is B+.");
  if (grade < 87.0 && grade >= 83.0)
    printf("Your letter grade for CMPSC 131 is B.");
  if (grade < 83.0 && grade >= 80.0)
    printf("Your letter grade for CMPSC 131 is B-");
  if (grade < 80.0 && grade >= 77.0)
    printf("Your letter grade for CMPSC 131 is C+.");
  if (grade < 77.0 && grade >= 70.0)
    printf("Your letter grade for CMPSC 131 is C.");
  if (grade < 70.0 && grade >= 60.0)
    printf("Your letter grade for CMPSC 131 is D.");
  if (grade < 60.0)
    printf("Your letter grade for CMPSC 131 is F.");
  return 0;
}