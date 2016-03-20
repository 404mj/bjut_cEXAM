#include "mydecl.h"

#define King 5
#define Spade 4
#define Hearts 3
#define Diamonds 2
#define Club 1

#define N 54

typedef struct{
	int rank;
	int suit;
}Card;

//----------
void creatCard(Card[]);
void riffle(Card[]);
void deal(Card[]);
//----------

int main(void){
	Card cards[N];

	creatCard(cards);
	riffle(cards);
	deal(cards);

	return 0;
}

void creatCard(Card cards[]){
	int i;

	for(i=1;i<=N;++i){
		cards[i].rank=i%13+1;
		cards[i].suit=i/13+1;//learn!
	}
}

void riffle(Card cards[]){
	int i,rand1,rand2;
	Card temp;

	srand(time(NULL));
	for(i=0;i<100;++i){//老是把i打成1，书写错误!!!!
		rand1=rand()%N;//0-53
		rand2=rand()%N;
		if(rand1==rand2){//swap!
			temp=cards[rand1];
			cards[rand1]=cards[rand2];
			cards[rand2]=temp;
		}
	}
}

void deal(Card cards[]){
	int i, count;

	for(i=0;i<4;++i){
		printf("\n\n%drd man:\n",i+1);
		for(count=0;count<N;count+=4){
			if(count+i >= N)
				break;
			switch(cards[count+i].suit){
				case King: 
					printf("(King,");
					break;
				case Spade: 
					printf("(Spade,"); 
					break;
				case Hearts:
					printf("(Hearts,");
					break;
				case Diamonds:
					printf("(Diamonds,");
					break;
				case Club:
					printf("(Club,");
					break;
			}

			switch(cards[count+i].rank){
				case 1: 
					if(cards[count+i].suit==King)
						printf("Big_King)");
					else
						printf("A)  ");
					break;
				case 2:
					if(cards[count+i].suit==King)
						printf("Small_King)");
					else
						printf("2)  ");
						break;
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					printf("%d)  ",cards[count+i].rank);
					break;
				case 11:
					printf("J)  ");
					break;
				case 12:
					printf("Q)  ");
					break;
				case 13:
					printf("K)  ");
					break;
			}	
		}
	}
	putchar('\n');
}
