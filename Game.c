#include <stdio.h>
#include <string.h>

struct house {
	char inside;
	char name;
	int x;
	int y;
	long int Energy;
	int EnergyPerMove;
	int EnergyPerMating;
	int Attack;
	int Defense;
	int Heaven;
	int Alive;
	long int Food;
};
int chartoint(char c){
	int num = 0;
	num = c - '0'; 					// turns character into an integer
	return num;
}

int main() {
	
	int x,y,n,m,i,j,end;
	long int energy;
	char word;
	printf("Enter The Size Of The Map: ");
	scanf("%d",&m);
	struct house Map[m][m];
	for(x=0;x<m;x++) {					// makes the map
		for(y=0;y<m;y++) {
			Map[x][y].inside = 'e';
		}
	}
	
	for(x=0;x<m;x++) {
		for(y=0;y<m;y++) {
			switch (Map[x][y].inside) {		// prints the map
				case 'e':
					printf("0	");
				case '#':
					printf("#	");
				case 'f':
					printf("F	");
				case 'a':
					printf("%c	",Map[x][y].name);
				case 'h':
					printf("h	");
				}
		}
		printf("\n\n");
	}
	
	printf("Enter The Amount Of Blocked Rooms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		printf("Enter The Location Of The Blocked Room In X Y Format: ");
		scanf("%d %d",&x,&y);
		Map[x][y].name  = '#';
	}
	printf("Enter The Amount Of Heavens: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		printf("Enter The Location Of The Heaven In X Y Format: ");
		scanf("%d %d",&x,&y);
		Map[x][y].name = 'h';
	}
	
	return 0;
}

