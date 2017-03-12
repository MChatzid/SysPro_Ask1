#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

printHelp() {
   cout << "1. insert cdr-record" << endl;
   cout << "   -Insert a new CDR." << endl << endl;
   cout << "2. delete <caller> <cdr-id>" << endl;
   cout << "   -Delete a record with specific caller and cdr-id." << endl << endl;
   cout << "3. find caller [time1][year1] [time2][year2]" << endl;
   cout << "   -Present all CDRs of a specific caller, (within a specific range of time and/or date)." << endl;
   cout << "   -If [time1] is provided, [time2] should be given as well. Same goes for [year1] and [year2]." << endl << endl;
   cout << "4. lookup <callee> [time1][year1] [time2][year2]" << endl;
   cout << "   -Find all calls to a specific callee (previous rules for time/date range apply as well)." << endl << endl;
   cout << "5. indist1 <caller1> <caller2>" << endl;
   cout << "   -Present all subscribers who got in contact with <caller1> and <caller2>, provided that <caller1> and <caller2> had no cintact with each other." << endl << endl;
   cout << "6. topdest <caller>" << endl;
   cout << "   -Get the country code that <caller> has called to the most, as well as the number of calls to that country." << endl << endl;
   cout << "7. top <k>" << endl;
   cout << "   -Get the numbers of the subscribers who are responsible for the top-k\% of the company's profits." << endl << endl;
   cout << "8. bye" << endl;
   cout << "   -werhauz operation is complete." << endl << endl;
   cout << "9. print hashttable<X>" << endl;
   cout << "   -Print the contents of hastable No <X>." << endl << endl;
   cout << "10.   dump hashttable<X> <filename>" << endl;
   cout << "   -Extract the whole struucture of hashtable No <X> to a file named <filename>." << endl << endl;
}

int main(int argc, char* argv[]) {
   cout << "Awaiting command..." << endl;
   cout << " (Type \"help\" to see a list of the available commands)."<< endl;

}