
using namespace std;
#include <iostream>
#include <fstream>
#include <ctime>
#include <gperftools/profiler.h>
#include <cfloat>
#include <vector>

#include <examples.h>
#include <algonquin/mvalgonquin.h>



vector<vector<double> > read_bins(const string &fileName)
{
    vector<vector<double> > result;
    ifstream infile(fileName);
    string line;
    getline(infile, line);
    size_t count = atoi(line.c_str());
    while (infile.good())
    {
        vector<double> curr(count, 0);
        for (size_t i = 0; i < count; ++i)
        {
            getline(infile, line, ',');
            curr[i] = atof(line.c_str());
        }
        result.push_back(curr);
    }
    return result;
}



int main()
{
    using namespace vmp;

    testMVMoG();
//    testMVGaussian();

//    Parameters<Wishart> p(3, 1e-2 * eye(2,2));
//    Moments<Wishart> m(p);



    return 0;
}



