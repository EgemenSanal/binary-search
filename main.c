#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int binarysearch(int arr[],int l,int r,int x){ //diziyi ve aranacak elamani alir
	while(l <= r){
		int mid = l + (r - l) /2;
		
		if(arr[mid] == x)
			return mid;
		if(arr[mid] < x)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}


int main(int argc, char *argv[]) {
	
	int dizi[] = {3,4,8,9,25,47,68,76,84}; // ikili arama icin dizinin sirali olmasi gerekir dolayisiyla diziyi siraladim
	int arananEleman; 
	int boyut = 9;
	
	printf("ARANACAK ELEMANI GIRINIZ\n");
	scanf("%d",&arananEleman);
	int sonuc = binarysearch(dizi,0,boyut-1,arananEleman);
	if(sonuc ==-1) // girilen eleman bulunamadiysa fonksiyon -1 degeri dondurecegi icin elemanin bulunamadigini belirtecek
		printf("ELEMAN BULUNAMADI\n"); 
	else
		printf(" ELEMEAN %d. SIRADA BULUNDU\n ARANAN ELEMAN = %d\n",sonuc + 1,arananEleman);	
	return 0;
}
