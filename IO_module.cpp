#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace cy_IO_module
{

class IO_module
{
    string version;
    string in_file;
    string out_file;
    ifstream fin;
    ofstream fout;
    void init(const char *__in_file, const char *__out_file)
    {
        version = "0.0.1";
        in_file = __in_file;
        out_file = __out_file;
        fin.open(in_file, std::ios_base::in);
        fout.open(out_file, std::ios_base::out | std::ios_base::trunc);
    }
    void init(const string __in_file, const string __out_file)
    {
        version = "0.0.1";
        in_file = __in_file;
        out_file = __out_file;
        fin.open(in_file, std::ios_base::in);
        fout.open(out_file, std::ios_base::out | std::ios_base::trunc);
    }
    void close_in()
    {
        fin.close();
    }
    void close_out()
    {
        fout.close();
    }
};

} // namespace cy_IO_module