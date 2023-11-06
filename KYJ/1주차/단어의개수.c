#include <stdio.h>
#include <stdbool.h>

int main() {
	char mystr[1000000];
	scanf("%[^\n]", mystr);

	int i = 0;
	int count = 0;
	bool isWord = false; // 앞뒤 공백때문에

	while (mystr[i] != NULL) {
		if (mystr[i] == ' ') {
			isWord = false;
			if (i != 0) {   // 앞의 공백 제외
				count++;
			}
			
		}
		else {
			isWord = true;  
		}
		i++;
	}
	

// 뒤 공백 제외
	if (isWord) {
		count++;  
	}
	
	printf("%d", count);

	return 0;
}