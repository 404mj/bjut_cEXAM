#include "mydecl.h"

//----------------
int choiceItem();
//---------------

int main(void){
	char str_1[80]="this is a ";
	char str_2[] = "program.";
	char str_3[] = "Java ";
	char str_4[] = "C ";
	char str_5[] = "C++ ";
	char str_6[] = "Python ";
	int choice;

	choice=choiceItem();

	switch(choice){
		case 1:
			strcat(str_1,str_3);
			strcat(str_1,str_2);
			break;
		case 2:
			strcat(str_1,str_4);
			strcat(str_1,str_2);
			break;
		case 3:
			strcat(str_1,str_5);
			strcat(str_1,str_2);
			break;
		case 4:
			strcat(str_1,str_6);
			strcat(str_1,str_2);
			break;
		default:
			strcat(str_1,"error!");
			break;
	}

	printf("%s\n", str_1);/*显示字符串*/

	return 0;
}

int choiceItem(){/*显示菜单做选择*/
	int item;

	printf("\n    === MENU ===\n");
	printf("\n    Java........1");
	printf("\n    C...........2");
	printf("\n    C++.........3");
	printf("\n    Python......4");

	puts("\nChoice:");
	scanf("%d",&item);
	return item;

}
