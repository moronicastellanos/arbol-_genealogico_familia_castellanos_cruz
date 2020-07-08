#include<stdio.h>
#include<conio.h>

void menu();
int main(){
	
menu();	


	
getch();
return 0;
}
void menu(){
	
	int opc;
	do{
		printf("\n1.-Mi generacion");
		printf("\n2.-Padres");
		printf("\n3.-Abuelos"); 
		printf("\n4.-Bisabuelos");
		printf("\nSelecciona una opcion: ");
		scanf("%d",&opc);
		
		
		switch(opc){
			case 1: printf("\n1.-Mi generacion");
			        printf("\n yo      hermano");
			        printf("\n carlos  jesus");
			        printf("\n\n");
		
			break;
			case 2:printf("\n2.-Padres");
			       printf("\n padre    madre");
			       printf("\n juan     Avi");
				  printf("\n\n");		
			break;
			case 3:printf("\n3.-Abuelos"); 
			       printf("\n abuelo paterno | abuela paterna | abuelo materno  | abuela materno");
			       printf("\n Salomon          gloria           noe               noemi");
			       printf("\n\n");
	
			break;
			case 4:	printf("\n4.-Bisabuelos");
			break;
		}
		
		
		
	}while(opc=!5);
		
}
