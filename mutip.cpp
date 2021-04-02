#include<stdio.h>
int main(){
int a,b;
int table,max=0;
char  islem;
printf("kaclik carpin Tablosu olusturmak istersiniz?\nMaksimum 20 olsun:");
scanf("%d",&table);
max=table;
for(a=1;a<table;a++){


for(b=0;b<=max;b++){
	printf("%d x %d =%d\n",a,b,a*b);
}
printf("\n");

}

printf("tekrar etmek isterseniz 'e'veya 'E'harfinbasiniz");
scanf("%c",&islem);
switch(islem){
	case 'e':
		printf("kaclik carpin Tablosu olusturmak istersiniz?\nMaksimum 20 olsun:");
scanf("%d",&table);
max=table;
for(a=1;a<table;a++){


for(b=0;b<=max;b++){
	printf("%d x %d =%d\n",a,b,a*b);
}
printf("\n");

}
	break;
	case 'E':
		printf("kaclik carpin Tablosu olusturmak istersiniz?\nMaksimum 20 olsun:");
scanf("%d",&table);
max=table;
for(a=1;a<table;a++){


for(b=0;b<=max;b++){
	printf("%d x %d =%d\n",a,b,a*b);
}
printf("\n");

}
	break;
	default:
		("cikmak istersenin baska bir harf basin");
}







return 0;
}
