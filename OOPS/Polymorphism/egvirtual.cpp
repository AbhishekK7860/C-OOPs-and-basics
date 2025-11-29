#include <iostream>
#include <string>
using namespace std;

class ABR {
protected:
    string repository;
    float topic_coverage;
public:
    ABR(string s, float r) {
        repository = s;
        topic_coverage = r;
    }
    virtual void display(){}
};

class CODEfile : public ABR {
    int lines_of_code;
public:
    CODEfile(string s, float r, int l) : ABR(s, r) {
        lines_of_code = l;
    }
    void display(){
        cout << "Repository: " << repository << " (Codes)" << endl;
        cout << "Topic Coverage: " << topic_coverage << "% (out of 100%)" << endl;
        cout << "Lines of Code: " << lines_of_code << endl;
    }
};

class DOCnotes : public ABR {
    int words;
public:
    DOCnotes(string s, float r, int w) : ABR(s, r) {
        words = w;
    }
    void display(){
        cout << "Repository: " << repository << " (Notes)" << endl;
        cout << "Topic Coverage: " << topic_coverage << "%" << endl;
        cout << "Words: " << words << endl;
    }
};

int main() {
    string repo1 = "DataStructures";
    float coverage1 = 85.5;
    int loc = 1500;

    // For Abhishek's GitHub Repository
    CODEfile repos(repo1, coverage1, loc);
    // repos.display();
    string repo2 = "DataStructure Notes";
    float coverage2 = 83.6;
    int word = 15000;
    DOCnotes repnotes(repo2, coverage2, word);
    // repnotes.display();

    ABR *absptr[2];
    absptr[0] = &repos;
    absptr[1] = &repnotes;

    absptr[0]->display();
    absptr[1]->display();
    return 0;
}

//Rules for virtual functions:
//1. They cannot be static.
//2. They are accessed by object pointers.
//3. virtual functions can be a friend of another class.
//4. A virtual function in base class might not be used.
//5. if virtual function is defined in base class, there is no necessity to redefine it in derived class.