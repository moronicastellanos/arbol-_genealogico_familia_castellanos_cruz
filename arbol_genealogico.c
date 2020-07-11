#include<stdio.h>
#include<conio.h>
void arbol();
int main(){


	arbol();
	
	
	return 0;
	getch();
}

void arbol(){
	int i;
	char a[3][50] = {
	                 "      yo               hermano",
				  "carlos moroni      jesus abraham",   
				  "castellanos cruz  castellanos cruz" };
	 char b[3][50] = {
	                 "     padre               madre",
				  "  juan carlos           avi cruz ",
				  "castellanos garcia     guitierrez"};
	char c[3][50] = {
	                 "abuelo paterno      abuela paterna",
				  "Pedro salomon         gloria",
				  "castellanos           garcia"};
     char d[3][50] = {
	                 "abuelo materno      abuela materna",
				  " noe cruz               noemi ",
				  "  ruperto            guitierrez"};
	char a1[2][70] = {
	                 "padre del abuelo paterno   madre del abuelo paterno",
				  "david castellanos              alicia "};
	char b1[2][70] = {
	                 "padre de la abuela paterna   madre de la abuela paterna",
				  "ernesto                         gregoria "};
	char c1[2][70] = {
	                 "padre del abuelo materno   madre del abuelo materno",
				  "jose                            lorenza "};
	char d1[2][70] = {
	                 "padre de la abuela materna  madre de la abuela materna",
				  "nombre1                          nombre2 "};
	for(i=0;i<3;i++){
		printf("%s\n",a+i,a+i);
	}
	printf("\n\n");
		for(i=0;i<3;i++){
		printf("%s\n",b+i,b+i);
	}
	printf("\n\n");
		for(i=0;i<2;i++){
		printf("%s\n",c+i,c+i);
	}
	printf("\n\n");
		for(i=0;i<3;i++){
		printf("%s\n",d+i,d+i);
	}
	printf("\n\n");
		for(i=0;i<2;i++){
		printf("%s\n",a1+i,a1+i);
	}
		printf("\n\n");
		for(i=0;i<2;i++){
		printf("%s\n",b1+i,b1+i);
	}
	printf("\n\n");
		for(i=0;i<2;i++){
		printf("%s\n",c1+i,c1+i);
	}
	printf("\n\n");
		for(i=0;i<2;i++){
		printf("%s\n",d1+i,d1+i);
	}


}
