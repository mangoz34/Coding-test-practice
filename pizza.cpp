/*
Problem Statement: Pizza Price Calculator
Design an object-oriented system for calculating the final price of a single pizza order. The system must be highly extensible, allowing for easy addition of new pizza types and new toppings without modifying existing code.

Core Requirements
Base Pizza: A pizza starts with a basic type (e.g., Veggie, Supreme) and a fixed initial price.

Toppings: Customers can add multiple toppings (e.g., Extra Cheese, Mushroom, Pepperoni) to the base pizza. Each topping has its own fixed cost.

Price Calculation: The final price of the pizza is the sum of the base pizza price and the cost of all added toppings.

OOD Goal
Demonstrate the use of the Decorator Pattern to achieve the Open/Closed Principle (OCP): the system should be open for extension (adding new toppings) but closed for modification (not changing the base pizza or existing topping classes).
*/
  
class Pizza {
  public:
    //method definition:
    virtual getPrice() = 0;
    virtual ~pizza();
}

class BasePizza : public Pizza {
  private:
    //properties
    double base_price;
    int size; //1 - S, 2 - M, 3 - L
  
  public:
    BasePizza(double price, const int &s = 2) : (base_price(price), size(s)) {};

    double getPrice() {
      return base_price;
    }
}

class PizzaDecorator : public Pizza {
  private:
    Pizza *wrappedPizza;

  public:
    PizzaDecorator(* Pizza p) : wrappedPizza(p);

    double getPrice() const override() {
      return wrappedPizze -> getPrice();
    }

    //virtual ~Pizza() = default;
}

class AddCheese : public Pizzadecorator {
  private:
    double price;

  public:
    AddCheese(*Pizza p) : PizzaDecorator(p) {};

    double getPrice() const override() {
      return wrappedPizza->getPrice() + this.price;
    }
}


    
