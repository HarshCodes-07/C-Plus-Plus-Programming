 #include<stdio.h >
 #include<pthread.h>
int a[8];
 int sum1=0,sum2=0,sum3=0,sum4=0;
 void* aa(void* arg) { 
for(int i=0;i<2;i++){ 
sum1=sum1+a[i];
 } 
}
 void *b(void *arg) { 
for(int i=2;i<4;i++){ 
sum2=sum2+a[i];
 } 
}
 void *c(void *arg) { 
for(int i=4;i<6;i++){ 
sum3=sum3+a[i];
 } 
}
 void *d(void *arg) { 
for(int i=6;i<8;i++){ 
sum4=sum4+a[i];
 } 
}
 int main() {
 pthread_t t1,t2,t3,t4; 
printf("Enter the elements of array\n");
 for(int i=0;i<8;i++){ 
scanf("%d",&a[i]);
 } 
pthread_create(&t1,NULL,aa,NULL);
 pthread_join(t1,NULL);
 pthread_create(&t2,NULL,b,NULL);
 pthread_join(t2,NULL);
 pthread_create(&t3,NULL,c,NULL);
 pthread_join(t3,NULL);
 pthread_create(&t4,NULL,d,NULL);
 pthread_join(t4,NULL);
 printf("First quarter sum :  %d\n",sum1);
 printf("Second quarter sum :  %d\n",sum2);
 printf("Third quarter sum :   %d\n",sum3);
 printf("Fourth quarter sum :  %d\n",sum4);
 printf("Total sum : %d\n",sum1+sum2+sum3+sum4); 
}
