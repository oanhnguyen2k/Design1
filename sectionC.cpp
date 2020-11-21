#include <list>
#include <iostream>

using namespace std;

class item {
	public:
		item(string name, long id, double price, int stock) {
			name_ = name;
			id_ = id;
			price_ = price;
			stock_ = stock;
		}
		
		string getName() {
		    return name_;
		}
		
		double getPrice() {
		    return price_;
		}
		
		int getStock() {
		    return stock_;
		}

	private:
		string name_;
		long id_;
		double price_;
		int stock_;
};

class store {
	public:
		store(list<item> items) {
			for (auto i: items) {
				sItems_.push_back(i);
			}
		}

		list<item> getItems() {
			return sItems_;
		}

		void printItems() {
			cout << "Store:" << endl;
			for (auto i: sItems_) {
				cout << i.getName() << " x " << i.getStock() << endl;
			}
		}

	private:
		list<item> sItems_;

};

class order {
	public:
		order() {
			totalPrice_ = 0;
		}

		void add(item i) {
			oItems_.push_back(i);
			totalPrice_ += i.getPrice() * i.getStock();
		}

		double price() {
			return totalPrice_;
		}

	private:
		double totalPrice_;
		list<item> oItems_;
};

int main() {
    item i1("Book", 0, 1, 12);
    item i2("Colored Pencils", 1, 2, 15);
    item i3("Coloring Paper", 2, 3, 20);

    list<item> items;
    items.push_back(i1);
    items.push_back(i2);
    items.push_back(i3);

    store store1(items);
    store1.printItems();

    order order1;
    cout << order1.price() << endl;
    order1.add(i1);
    order1.add(i2);
    order1.add(i3);
    cout << order1.price() << endl;

	return 0;
}
