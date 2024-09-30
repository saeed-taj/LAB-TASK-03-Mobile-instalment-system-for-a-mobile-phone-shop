#include <iostream>
using namespace std;

class PhonePayments {

private:
    double phonePrice;
    double monthlyPayment;
    int totalMonths;
    double remainingAmount;

public:
    
    
    PhonePayments(double ph_pri, int t_mon) {
        
        phonePrice = ph_pri;
        totalMonths = t_mon;
        remainingAmount = ph_pri;
        
        monthlyPayment = ph_pri * 0.20;  // 20% of the price for each installment
    }

    void makePayment(bool paymentOnTime) {
        
        if (paymentOnTime) {
        
            remainingAmount -= monthlyPayment;
        
            cout << "Payment made. Remaining amount: " << remainingAmount << endl;
        } 
        
        else {
        
            double penalty = remainingAmount * 0.02;  
    
            remainingAmount += penalty;
    
            cout << "Late payment. Penalty applied. Remaining amount: " << remainingAmount << endl;
        }
    
        totalMonths--;
    
    }

    int getTotalMonths() {
    
        return totalMonths;
    
    }

    bool isPaymentComplete() {
     
        return remainingAmount <= 0;
    
    }
};

int main() {
    
    double phonePrice = 10000;  // Example phone price
    
    int totalMonths = 12;
    
    PhonePayments phone(phonePrice, totalMonths);

    while (!phone.isPaymentComplete() && totalMonths > 0) {
        
        double payment;
        
        cout << "Enter your payment (should be 20% of total price): ";
        cin >> payment;

        if (payment == phonePrice * 0.20) {
            
            phone.makePayment(true);
        } 
        
        else {
            
            phone.makePayment(false);  // Apply penalty
        }

        cout << "Total months remaining: " << phone.getTotalMonths() << endl;
    }

    if (phone.isPaymentComplete()) {
        cout << "You have submitted all your installments." << endl;
    }

    return 0;
}
