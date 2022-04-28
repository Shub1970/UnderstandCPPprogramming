/*
    In this we are going to take a example of static data member.
       we have printer, and has a variable nPages_ (pages in current job)
        and a static variable nTrayPages_(page remaining in the tray)
        and a static variable nJobs_(print jobs executing)
 */
#include <iostream>
using namespace std;
class PrintJobs
{
    int nPages_;
    static int nTrayPages_;
    static int nJobs_;

public:
    PrintJobs(int nPages) : nPages_(nPages)
    {
        nJobs_++;
        cout << "printing " << nPages_ << " pages" << endl;
        nTrayPages_ -= nPages_;
    }
    ~PrintJobs()
    {
        nJobs_--;
    }
    static int getRemainingPages()
    {
        return nTrayPages_;
    }
    static int getJobs()
    {
        return nJobs_;
    }
    static void loadPaper(int nPages)
    {
        nTrayPages_ += nPages;
        cout << "Paper loaded" << nPages << endl;
    }
};
int PrintJobs::nTrayPages_ = 400;
int PrintJobs::nJobs_ = 0;
int main()
{
    cout << "Remaining pages in tray: " << PrintJobs::getRemainingPages() << endl;
    cout << "Number of jobs: " << PrintJobs::getJobs() << endl;
    PrintJobs p1(100);
    PrintJobs p2(200);
    cout << "--------------add job--------------" << endl;
    cout << "Remaining pages in tray: " << PrintJobs::getRemainingPages() << endl;
    cout << "Number of jobs: " << PrintJobs::getJobs() << endl;
    {
        cout << "--------------add job in bock--------------" << endl;
        PrintJobs::loadPaper(500);
        PrintJobs p3(300), p4(100);
        cout << "--------------block status--------------" << endl;
        cout << "Remaining pages in tray: " << PrintJobs::getRemainingPages() << endl;
        cout << "Number of jobs: " << PrintJobs::getJobs() << endl;
    }
    cout << "--------------end status--------------" << endl;
    cout << "Remaining pages in tray: " << PrintJobs::getRemainingPages() << endl;
    cout << "Number of jobs: " << PrintJobs::getJobs() << endl;
    return 0;
}
// output: img17.png