//#include <stdio.h>
//
//int timSoNhoNhat (int a, int b, int c){
//
//
// if((a<b)&&(a<c)){
//
// 	printf("%d",a);
// }
// if((b<a)&&(b<c)){
// 	printf("%d", b);
// }
// if((c<a)&&(c<b)){
//     printf("%d", c);
//}
//return 0;
//}
//int main(){
//
//int a, b, c ;
//scanf("%d%d%d", &a, &b, &c);
//timSoNhoNhat (a, b, c);
//
//}
#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int min = a;
	if(b<=min) {
		min=b;
	}
	if(c<=min) {
		min=c;
	}
	printf("%d",min);
}