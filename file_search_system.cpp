/*
Goal: implement file search system

Use case: search by name, filename extension, edit time, file size, user

class File {
  private:
    string name;
    string ext;
    string time;
    double size;
    string user;

  public:
    //Constructor

    //Method
    string getName()...
}

class Find {
  public:
    //Constructor

    //Method
    vector<File> searchByAnd(File A, File B)

    vector<File> seachbyOR()
}

*/

class isSpecification {
  public:
    virtual bool isSatisfied(const File& f) const = 0;

    virtual ~ISpecification() = dafault;
}
    
class isLargerThan : public isSpecifiacation {
  private:
    double specific_size;

  public:
    isLargerThan(double size) : specific_size(size) {}

    bool isSatistfied(const File&f) const ovverride {
      return f.getSize() > specific_size;
    }
}

//-----------Search Criterion----------------


class FileFinder {
  




