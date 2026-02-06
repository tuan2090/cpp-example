#include <iostream>

class Student {
  public:
    std::string name;
    std::string gender;
    double score;

    void print_student_info() {
      std::cout << "Student Info" << std::endl;
      std::cout << "============" << std::endl;
      std::cout << "Student name: " << name << std::endl;
      std::cout << "Student gender: " << gender << std::endl;
      std::cout << "Student score: " << score << std::endl;
    }
  
  Student(std::string name, std::string gender, double score){
    this->name = name;
    this->gender = gender;
    this->score = score;
  }
};

int main() {
  Student student1("John", "male", 85.8);
  Student student2("Alice", "female", 92.3);

  student1.print_student_info();
  student2.print_student_info();

  return 0;
}
