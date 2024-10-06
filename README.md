# Phone Payments Simulation in C++

This repository contains a C++ program that simulates phone payments with monthly installments. It allows users to make payments towards the price of a phone, apply penalties for late payments, and track the remaining balance and months.

## Class Description

The `PhonePayments` class manages the following:

- **phonePrice**: The total price of the phone.
- **monthlyPayment**: A fixed payment, 20% of the total phone price, paid each month.
- **totalMonths**: The number of months in the payment plan.
- **remainingAmount**: The remaining balance left to be paid.

### Methods

1. **PhonePayments() Constructor**: Initializes the phone price, total months, and calculates the monthly payment.
2. **makePayment(bool paymentOnTime)**: Processes the monthly payment. If payment is on time, it deducts the monthly payment from the remaining balance. If the payment is late, a penalty of 2% is applied to the remaining amount.
3. **getTotalMonths()**: Returns the number of months left in the payment plan.
4. **isPaymentComplete()**: Returns `true` if all payments are complete (i.e., the remaining amount is 0 or less).
