#include <QCoreApplication>
#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm> // for std::copy
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::ifstream is("/home/viktor/my_projects_qt_2/Funktsiya_Resheniya_2/synapses.txt");
     std::istream_iterator<unsigned long long> start(is), end;
     std::vector<unsigned long long> numbers(start, end);
     std::cout << "Read " << numbers.size() << " numbers" << std::endl;

     // print the numbers to stdout
     std::cout << "numbers read in:\n";
     std::copy(numbers.begin(), numbers.end(),
               std::ostream_iterator<unsigned long long>(std::cout, "\n"));
     std::cout << std::endl;
    return a.exec();
}
