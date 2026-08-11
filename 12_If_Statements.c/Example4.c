// Multiple If Statements

    #include <stdio.h>
    
    int main() {
        
        int amount;
        float discount, net;

        amount;
        printf("Enter Your Purchase Amount: ");
        scanf("%d", &amount);

        if (amount < 1000){
      discount=0;
   }
   if (amount >= 1000 && amount<5000){
      discount=5;
   }
   if (amount >= 5000){
      discount=10;
   }
   net = amount - amount*discount/100;
   printf("Amount: %d Discount: %f Net payable: %f", amount, discount, net);
   
   return 0;
}