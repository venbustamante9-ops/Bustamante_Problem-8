# include <stdio.h>
int main() {
    int students, subjects;
    int totalSubjects = 0;
    float totalFees = 0, studentFee;

    printf("Enter number of students: ");
    scanf("%d", &students);

    for (int i = 1; i <= students; i++ ) {
        printf("\nStudent %d\n", i);

        printf("Enter number of subjects:");
        
        scanf("%d", &subjects);

        studentFee = subjects * 500;

        printf("Total enrollment fee PHP %.2f\n", studentFee);

        totalSubjects += subjects;
        totalFees += studentFee;
    }
    printf("\nTotal number of subjects: %d\n", totalSubjects);
    printf("Total fees collected: PHP %.2f\n", totalFees);
    
    return 0;
}