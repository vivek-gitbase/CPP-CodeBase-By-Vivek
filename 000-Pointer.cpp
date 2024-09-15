#include <stdio.h>

int main(){
	const int q = 5;
	int const* p = &q;

	//Compilation error
	//*p = 7;

   // q=8; q can't be updated
   void *ptr;
   ptr=(int*)&q;
   printf("%d",*(int*)ptr);

	const int q2 = 7;

	//Valid
	p = &q2; 

    
	
	return 0;
}
