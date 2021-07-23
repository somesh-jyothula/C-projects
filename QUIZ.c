
#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g;
    printf("==>\t\t\t\t\t-------> QUIZ <-------\t\t\t\t\n. \t\t\t\t\t!!!Integer Type Only!!!\t\t\t.\n");
     printf("\t\t\t\t\t\t**MAIN MENU**\t\t\t\n1.Start\n2.Instructions\n3.Exit\n");
    printf("Enter u r option: ");
    scanf("%d",&c);
    if(c==1){
    printf("=>\t\t\t\t\t*********ROUND 1*********\n");
    printf("1)HOW MANY CATEGORIES OF ASSIGNMENT OPERATORS ARE THERE IN C?\n Ans-");
    scanf("%d",&a);
    if(a==2){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }
     printf("2)WHAT IS THE SIZE OF 'int' DATA TYPES?\n Ans-");
    scanf("%d",&b);
    if(b==4){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }
     printf("3)what is the first index of an array?\n Ans-");
    scanf("%d",&d);
    if(d==0){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }

    printf("4)C-language was developed in which year?\n Ans-");
    scanf("%d",&f);
    if(f==1972){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }


    printf("5)HOW MANY LOGICAL OPERATORS ARE THERE IN C?\n Ans-");
    scanf("%d",&g);
    if(g==3){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }

    if(a==2&&b==4&&d==0&&f==1972&&g==3){
        printf("\t\t\tCONGRATS!!YOU PASSED ROUND 1 AND QUALIFIED TO ROUND 2 :)\t\t\t\n");
    }
    if(a!=2&&b==4&&d==0&&f==1972&&g==3||a==2&&b!=4&&d==0&&f==1972&&g==3||a==2&&b==4&&d!=0&&f==1972&&g==3||a==2&&b==4&&d==0&&f!=1972&&g==3||a==2&&b==4&&d==0&&f==1972&&g!=3){
        printf("\t\t\tYOU SCORED 4 MARKS\n You are not eligible to ROUND 2!!!GAME OVER:(!!! \t\t\t\n");

    }
    if(a==2&&b!=4&&d!=0&&f==1972&&g==3||a!=2&&b!=4&&d==0&&f==1972&&g==3||a!=2&&b==4&&d!=0&&f==1972&&g==3||a!=2&&b==4&&d==0&&f!=1972&&g==3||a!=2&&b==4&&d==0&&f==1972&&g!=3||a==2&&b!=4&&d==0&&f!=1972&&g==3||a==2&&b!=4&&d==0&&f==1972&&g!=3||a!=2&&b!=4&&d==0&&f==1972&&g==3||a==2&&b==4&&d!=0&&f!=1972&&g==3||a==2&&b==4&&d!=0&&f==1972&&g!=3||a!=2&&b==4&&d!=0&&f==1972&&g==3||a==2&&b!=4&&d!=0&&f==1972&&g==3||a==2&&b==4&&d==0&&f!=1972&&g==3||a==2&&b==4&&d==0&&f!=1972&&g!=3||a!=2&&b==4&&d==0&&f!=1972&&g==3||a==2&&b!=4&&d==0&&f!=1972&&g==3||a==2&&b==4&&d!=0&&f!=1972&&g==3||a!=2&&b==4&&d==0&&f==1972&&g!=3||a==2&&b!=4&&d==0&&f==1972&&g!=3||a==2&&b==4&&d!=0&&f==1972&&g!=3||a==2&&b==4&&d==0&&f!=1972&&g!=3){
        printf("\t\t\t!!YOU SCORED 3 MARKS OUT OF 5\n You are not eligible to ROUND 2!!!GAME OVER:(!!!\t\t\t\n");

    }
    if(a==2&&b==4&&d!=0&&f!=1972&&g!=3||a!=2&&b==4&&d==0&&f!=1972&&g!=3||a!=2&&b!=4&&d==0&&f==1972&&g!=3||a!=2&&b!=4&&d!=0&&f==1972&&g==3||a==2&&b!=4&&d!=0&&f!=1972&&g==3||a!=2&&b==4&&d!=0&&f==1972&&g!=3){
        printf("\t\t\t!!YOU SCORED 2 MARKS!! \n You are not eligible to ROUND 2!!!GAME OVER:(!!!\t\t\t\n");
    }
    if(a!=2&&b!=4&&d!=0&&f!=1972&&g==3||a!=2&&b!=4&&d!=0&&f==1972&&g!=3||a!=2&&b!=4&&d==0&&f!=1972&&g!=3||a!=2&&b!=4&&d!=0&&f==1972&&g!=3||a==2&&b!=4&&d!=0&&f!=1972&&g!=3)
    {
        printf("!!YOU SCORED 1 MARK ONLY!!\nYou are not eligible to ROUND 2!!!GAME OVER:(!!! \n");
    }
    if(b!=4&&d!=0&&a!=2&&f!=1972&&g!=3){
        printf("\t\t\t!!!!!'YOU SCORED 0 MARKS :(' !!!!!!\nYou are not eligible to ROUND 2!!!GAME OVER:(!!!\t\t\t\n");
    }
    if(a==2&&b==4&&d==0&&f==1972&&g==3)

    {


        printf("=>\t\t\t\t\t*********ROUND 2*********\n");
        printf("1)A pointer is a memory address. Suppose the pointer variable has p address 1000, and that p is declared to have type int*, and an int is 4 bytes long. What address is represented by expression p + 2?\n Ans-");
    scanf("%d",&a);
    if(a==1008){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }
     printf("2) What is the maximum number of characters that can be held in the string variable char address line [40]?\n Ans-");
    scanf("%d",&b);
    if(b==39){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }
    if(a==1008&&b==39){
        printf("\t\t\tCONGRATS! YOU CLEARED ROUND 2 :)\n\t\t\t(:**********YOU WON***********:)");
    }
    else{
        printf("YOU FAILED IN ROUND 2!!!GAME OVER!!!:(");
    }


    }

    }
    if(c!=1&&c!=2&&c!=3){
        printf("!!!Enter correct option!!!");
    }
    if(c==3){
        printf("Exited!");
    }
    if(c==2){
        printf("\t\t\t\t*INSTRUCTIONS*\n1.This is a simple quiz game.\n2.First of all start the QUIZ.\n3.Then,simply answer the Questions.\n4.This game contains 2 rounds.\n5.If u answered all questions in two rounds correctly ,You won otherwise you lose...\n\t\t\tGOOD LUCK:)\n");
         printf("\t\t\t\t\t**MAIN MENU**\t\t\t\n1.Start\n2.Instructions\n3.Exit\n");
    printf("Enter u r option: ");
    scanf("%d",&c);
    if(c==1){
    printf("=>\t\t\t\t\t*********ROUND 1*********\n");
    printf("1)HOW MANY CATEGORIES OF ASSIGNMENT OPERATORS ARE THERE IN C?\n Ans-");
    scanf("%d",&a);
    if(a==2){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }
     printf("2)WHAT IS THE SIZE OF 'int' DATA TYPES?\n Ans-");
    scanf("%d",&b);
    if(b==4){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }
     printf("3)what is the first index of an array?\n Ans-");
    scanf("%d",&d);
    if(d==0){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }

    printf("4)C-language was developed in which year?\n Ans-");
    scanf("%d",&f);
    if(f==1972){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }


    printf("5)HOW MANY LOGICAL OPERATORS ARE THERE IN C?\n Ans-");
    scanf("%d",&g);
    if(g==3){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }

    if(a==2&&b==4&&d==0&&f==1972&&g==3){
        printf("\t\t\tCONGRATS!!YOU PASSED ROUND 1 AND QUALIFIED TO ROUND 2 :)\t\t\t\n");
    }
    if(a!=2&&b==4&&d==0&&f==1972&&g==3||a==2&&b!=4&&d==0&&f==1972&&g==3||a==2&&b==4&&d!=0&&f==1972&&g==3||a==2&&b==4&&d==0&&f!=1972&&g==3||a==2&&b==4&&d==0&&f==1972&&g!=3){
        printf("\t\t\tYOU SCORED 4 MARKS \nYou are not eligible to ROUND 2!!!GAME OVER:(!!!\t\t\t\n");

    }
    if(a==2&&b!=4&&d!=0&&f==1972&&g==3||a!=2&&b!=4&&d==0&&f==1972&&g==3||a!=2&&b==4&&d!=0&&f==1972&&g==3||a!=2&&b==4&&d==0&&f!=1972&&g==3||a!=2&&b==4&&d==0&&f==1972&&g!=3||a==2&&b!=4&&d==0&&f!=1972&&g==3||a==2&&b!=4&&d==0&&f==1972&&g!=3||a!=2&&b!=4&&d==0&&f==1972&&g==3||a==2&&b==4&&d!=0&&f!=1972&&g==3||a==2&&b==4&&d!=0&&f==1972&&g!=3||a!=2&&b==4&&d!=0&&f==1972&&g==3||a==2&&b!=4&&d!=0&&f==1972&&g==3||a==2&&b==4&&d==0&&f!=1972&&g==3||a==2&&b==4&&d==0&&f!=1972&&g!=3||a!=2&&b==4&&d==0&&f!=1972&&g==3||a==2&&b!=4&&d==0&&f!=1972&&g==3||a==2&&b==4&&d!=0&&f!=1972&&g==3||a!=2&&b==4&&d==0&&f==1972&&g!=3||a==2&&b!=4&&d==0&&f==1972&&g!=3||a==2&&b==4&&d!=0&&f==1972&&g!=3||a==2&&b==4&&d==0&&f!=1972&&g!=3){
        printf("\t\t\t!!YOU SCORED 3 MARKS OUT OF 5\nYou are not eligible to ROUND 2!!!GAME OVER:(!!!\t\t\t\n");

    }
    if(a==2&&b==4&&d!=0&&f!=1972&&g!=3||a!=2&&b==4&&d==0&&f!=1972&&g!=3||a!=2&&b!=4&&d==0&&f==1972&&g!=3||a!=2&&b!=4&&d!=0&&f==1972&&g==3||a==2&&b!=4&&d!=0&&f!=1972&&g==3||a!=2&&b==4&&d!=0&&f==1972&&g!=3||a!=2&&b==4&&d!=0&&f!=1972&&g==3){
        printf("\t\t\t!!YOU SCORED 2 MARKS!!\nYou are not eligible to ROUND 2!!!GAME OVER:(!!! \t\t\t\n");
    }
    if(a!=2&&b!=4&&d!=0&&f!=1972&&g==3||a!=2&&b!=4&&d!=0&&f==1972&&g!=3||a!=2&&b!=4&&d==0&&f!=1972&&g!=3||a!=2&&b!=4&&d!=0&&f==1972&&g!=3||a==2&&b!=4&&d!=0&&f!=1972&&g!=3)
    {
        printf("!!YOU SCORED 1 MARK ONLY!! \nYou are not eligible to ROUND 2!!!GAME OVER:(!!!\n");
    }
    if(b!=4&&d!=0&&a!=2&&f!=1972&&g!=3){
        printf("\t\t\t!!!!!'YOU SCORED 0 MARKS :(' !!!!!!\nYou are not eligible to ROUND 2!!!GAME OVER:(!!!\t\t\t\n");
    }
    if(a==2&&b==4&&d==0&&f==1972&&g==3)

    {


        printf("=>\t\t\t\t\t*********ROUND 2*********\n");
        printf("1)A pointer is a memory address. Suppose the pointer variable has p address 1000, and that p is declared to have type int*, and an int is 4 bytes long. What address is represented by expression p + 2?\n Ans-");
    scanf("%d",&a);
    if(a==1008){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }
     printf("2) What is the maximum number of characters that can be held in the string variable char address line [40]?\n Ans-");
    scanf("%d",&b);
    if(b==39){
        printf("YOU ARE CORRECT\n");
    }
    else
    {
        printf("WRONG!!\n");
    }
    if(a==1008&&b==39){
        printf("\t\t\tCONGRATS! YOU CLEARED ROUND 2 :)\n\t\t\t(:**********YOU WON***********:)");
    }
    else{
        printf("YOU FAILED IN ROUND 2 !!!GAME OVER!!!:(");
    }


    }

    }
    if(c!=1&&c!=2&&c!=3){
        printf("!!!Enter correct option!!!");
    }
    if(c==3){
        printf("Exited!");
    }
    if(c==2){
        printf("\t\t\t\t*INSTRUCTIONS*\n1.This is a simple quiz game.\n2.First of all start the QUIZ.\n3.Then,simply answer the Questions.\n4.This game contains 2 rounds.\n5.If u answered all questions in two rounds correctly ,You won otherwise you lose...\n\t\t\tGOOD LUCK:)");
    }

    }

    return 0;
}
