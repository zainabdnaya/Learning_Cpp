# Learning_Cpp 
    In this repository,you will see tests and exercises and solutions in C++in order to learn it .
# Pointers,
        References and Dynamic Memory Allocation 
<a href="https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html">Pointers,References and Dynamic Memory Allocation</a>
# Ressources
 <a href="http://www.exelib.net/">For exercises To practice</a><br><a href="https://www.cplusplus.com/doc/tutorial/program_structure/">program_structur</a><br><a href="https://www.geeksforgeeks.org/getline-string-c/">Getline</a><br>
 <a href="http://www.cplusplus.com/reference/iomanip/">Iomanip</a><br><a href="https://www.javatpoint.com/cpp-object-and-class">Iomanip</a><br><a href="https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/">new and delete operator</a>
 <a href="https://www.softwaretestinghelp.com/stringstream-class-in-cpp/">To undrstand stringstram!</a><br><a href="https://www.programiz.com/cpp-programming/library-function/cstdlib/srand/">Srand</a><br>
 <a href="https://www.iro.umontreal.ca/~pift1166/cours/ift1166/communs/Cours/2P/C14-1166.pdf">french: Constructeur de recopie</a><br><a href="https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/">Fixed-Point Conversion </a>
 <br><a href="https://embeddedartistry.com/blog/2017/08/25/c11-fixed-point-arithmetic-library/">Fixed Point Arithmetic Library</a><br><a href="https://mrproof.blogspot.com/2011/10/cours-de-c-heritage-et-polymorphisme.html">heritage</a>
 <br><a href="https://www.w3schools.com/cpp/cpp_switch.asp">Switch</a><br><a href="https://www.programiz.com/cpp-programming/inheritance">inhiritance</a><br>
 <a href="https://blog.miyozinc.com/core-tutorials/cpp/constructor-destructor-inheritance/#:~:text=Base%20class%20constructors%20are%20called,the%20base%20is%20called%20next.">inhiritance_constructos_distructor</a><br>
 <a href="https://studylibfr.com/doc/10026565/c--">Complete C++book</a><br><a href="https://isocpp.org/wiki/faq/virtual-functions#:~:text=A%20virtual%20function%20allows%20derived,rather%20than%20a%20derived%20pointer.">Virtual</a><br>
 <a href="https://www.youtube.com/watch?v=SvesRBYu65k">Abstact claas and Pure virtual</a><br>
 # Iostream Library (Standard Input / Output Streams Library) 
    cin: Standard input stream (object) 
    out: Standard output stream (object) 
# Class && Constructor && destructor When you define a class,

     you define a blueprint for a data type. A class constructor is a special member function of a class that is executed whenever we create new objects of that class. A constructor will have exact same name as the class and it does not have any return type at all,
    not even void. C onstructors can be very useful for setting initial values for certain member variables. A destructor is a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete 
    expression is applied to a pointer to the object of that class.
  # Class VS Struct in C++
    The only difference between a struct and class in C++is the default accessibility of member variables and methods. In a struct they are public;
    in a class they are private. 
# Member function 
    Member functions are the functions,which have their declaration inside the class definition and works on the data members of the class.
    The definition of member functions can be inside or outside the definition of class. 
            Exemple: class x {
                            public: int add() {
                                return a+b+c;};
                            private: int a, b,c;};
        It can be also defined outsize class like:
             Exemple: 
                        class Cube {
                                    public: int side;
                                    int getVolume();}
                        int Cube :: getVolume() return side*side*side;

# Rand and Srand function: 

    The rand() function is used in C/C++to generate random numbers in the range [0,
    RAND_MAX). The srand() function in C++seeds the pseudo-random number generator used by the rand() function. The seed for rand() function is 1 by default. It means that if no srand() is called before rand(),
    the rand() function behaves as if it was seeded with srand(1). Note: A "seed" is the starting point for a sequence of pseudo-random numbers. 
        Exemple: "geerate  6 alphabet word" 
                    int main() {
                            srand(time(0));
                            int j=0;
                            int k=0;
                            for (int i=0;i < 127;i++) {
                                j=rand() % 127;
                                if ((j >=65 && j < 90) || (j >=95 && j < 122)) {
                                    std: : cout << (char)j;
                                    k++;
                                }
                                if (k==6) break;
                            }
                        return 0;
                        }

# Virtual 
    A virtual function allows derived classes to replace the implementation provided by the base class. 
    The compiler makes sure the replacement is always called whenever the object in question is actually of the derived class,even if the object is accessed by a base pointer rather than a derived pointer. 
    This allows algorithms in the base class to be replaced in the derived class,even if users don’t know about the derived class. 



# C++Abstract class 

    In C++class is made abstract by declaring at least one of its functions as <>strong>pure virtual function. 
    A pure virtual function is specified by placing "= 0" in its declaration. 
    Its implementation must be provided by derived classes. 
    
    Exemple: 
    
    class ADatabase {
                        protected: std: : string name;
                        public: virtual void getName()=0;
                    };
    class Manager: public ADatabase {
                                        public: void getName() {
                                        std: : cout << "Manager  Class" << std: : endl;}
                                    };
    class Accountant: public ADatabase {
                                    public: void getName() {
                                    std: : cout << "Account Class" << std: : endl;}
                                    };
    class Customers: ADatabase {
                                    public: void getName() {
                                    std: : cout << "Customers Class" << std: : endl;}
                            };
    int main() {
        ADatabase *ptr;
        Manager m;
        ptr=&m;
        ptr->getName();
        Accountant a;
        a.getName();
        Customers c;
        c.getName();
    }
Output:

    Manager  Class
    Account Class
    Customers Class
# Interfaces in C++
    Interface are like a contract, and any object that fulfills that contract can be used wherever that interface is required.
<a href="https://stackoverflow.com/questions/1216750/how-can-i-simulate-interfaces-in-c">Look at the second Exemple</a>
