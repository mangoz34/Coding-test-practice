class ILibraryItem {
  private:
    bool inStock;
  public:
    bool isInStock();
}

class Book : public ILibraryItem {
  private:
    string ISBN;
  public:
    string getISBN;
}

class Magazine : public ILibraryItem {
  private:
    string dateNumber;
  public:
    string getDateNumber;
}
