#include<stdio.h>
int main ()
{
int locks,stocks,barrels,tlocks,tstocks,tbarrels;
float lprice,sprice,bprice,lsales,bsales,ssales,sales,comm;
lprice=45.0;
sprice=30.0;
bprice=25.0;
tlocks=0;
tstocks=0;
tbarrels=0;
int c1,c2,c3,temp;

printf("\n Enter the number of locks and to exit the loop press -1 for locks \n");
scanf("%d",&locks);

while(locks!=-1)
{
c1=(locks<=0||locks>=70);
printf("\n Enter the number of stocks and barrels \n");
scanf("%d%d",&stocks,&barrels);
c2=(stocks<=0||stocks>80);
c3=(barrels<=0||barrels>90);
if(c1){
printf("VAlue of locks not in ranhe 1...70");

}
else{
temp=tlocks +locks;
if(temp>70)
printf("The number of locks are not in range %d",temp);
else
tlocks=temp;
}
printf("total number of locks%d\n",tlocks);
if(c2){
printf("VAlue of stocks not in ranhe 1...80");

}
else{
temp=tstocks +stocks;
if(temp>80)
printf("The number of stocks are not in range %d",temp);
else
tstocks=temp;
}
printf("total number of stocks%d\n",tstocks);
if(c3){
printf("VAlue of stocks not in ranhe 1...90");

}
else{
temp=tbarrels +barrels;
if(temp>90)
printf("The number of barrels are not in range %d\n",temp);
else
tbarrels=temp;
}
printf("total number of barrelss%d\n",tbarrels);
printf("\n Enter the number of locks and to exit the loop press -1 for locks \n");
scanf("%d",&locks);


}

printf("\n Total locks = %d \n",tlocks);
printf("\n Total stocks = %d \n",tstocks);
printf("\n Total barrels = %d \n",tbarrels);
 
lsales = lprice * tlocks;
ssales = sprice * tstocks;
bsales = bprice * tbarrels;

sales = lsales + ssales + bsales;
printf("\n The Total Sales = %f \n",sales);
if (sales>1800.0)
{
comm=0.10*1000.0;
comm += 0.15*800;
comm += 0.20*(sales-1800.0);
}
else if(sales >1000)
{
comm=0.10*1000.0;
comm += 0.15*(sales-1000.0);
}
else
comm = 0.10*sales;

printf("The commission is = %f \n",comm);
return 0;
}

