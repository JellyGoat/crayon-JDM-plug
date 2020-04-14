#include <iostream>
#include <fstream>
#include <string>
#include "../../../control.cpp"

using namespace std;
using namespace cygraph;

// add JDM namespace to partly support JDM in Cyaron
// It's really hard to support this.
namespace JDM
{

// faster nextInt input (easier getcher version)
template <typename Tp>
inline Tp nextInt()
{
    Tp num = 0;
    char ch = getchar(), last = 'x';
    while (!isdigit(ch))
        last = ch, ch = getchar();
    while (isdigit(ch))
        num = ((num << 1) + (num << 3)) + (ch ^ 48), ch = getchar();
    return num;
}

// JDM IO_module
// easier to read and learn to write.
class IO_module
{
    string version;
    string in_file;
    string out_file;
    ifstream fin;
    ofstream fout;
    // init IO_module via input file name and output file name
    void init(const char *__in_file, const char *__out_file)
    {
        version = "Cyaron version 0.0.1";
        in_file = __in_file;
        out_file = __out_file;
        fin.open(in_file, std::ios_base::in);
        fout.open(out_file, std::ios_base::out | std::ios_base::trunc);
    }
    // init IO_module via input file name and output file name
    void init(const string __in_file, const string __out_file)
    {
        version = "Cyaron version 0.0.1";
        in_file = __in_file;
        out_file = __out_file;
        fin.open(in_file, std::ios_base::in);
        fout.open(out_file, std::ios_base::out | std::ios_base::trunc);
    }
    // init IO_module via input file name and output file name
    // you can just fill the argument of the input mode or 
    // both.
    void init(const char *__in_file, const char *__out_file,
              const std::ios_base::openmode in_mode = std::ios_base::in,
              const std::ios_base::openmode out_mode =
                  std::ios_base::out | std::ios_base::trunc)
    {
        version = "Cyaron version 0.0.1";
        in_file = __in_file;
        out_file = __out_file;
        fin.open(in_file, in_mode);
        fout.open(out_file, out_mode);
    }
    // init IO_module via input file name and output file name
    // you can just fill the argument of the input mode or 
    // both.
    void init(const string __in_file, const string __out_file,
              const std::ios_base::openmode in_mode = std::ios_base::in,
              const std::ios_base::openmode out_mode =
                  std::ios_base::out | std::ios_base::trunc)
    {
        version = "Cyaron version 0.0.1";
        in_file = __in_file;
        out_file = __out_file;
        fin.open(in_file, in_mode);
        fout.open(out_file, out_mode);
    }
    // init or reopen the input stream
    // fill the mode or choose to the std::ios_base::in mode
    void open_in(const string __in_file,
                 const std::ios_base::openmode in_mode = std::ios_base::in)
    {
        close_in();
        fin.open(__in_file, in_mode);
    }
    // init or reopen the input stream
    // fill the mode or choose to the std::ios_base::in mode
    void open_in(const char *__in_file,
                 const std::ios_base::openmode in_mode = std::ios_base::in)
    {
        close_in();
        fin.open(__in_file, in_mode);
    }
    // init or reopen the output stream
    // fill the mode or choose to the std::ios_base::out | trunk mode
    void open_out(const char *__out_file,
                  const std::ios_base::openmode out_mode =
                      std::ios_base::out | std::ios_base::trunc)
    {
        close_out();
        fout.open(__out_file, out_mode);
    }
    // init or reopen the output stream
    // fill the mode or choose to the std::ios_base::out | trunk mode
    void open_out(const string __out_file,
                  const std::ios_base::openmode out_mode =
                      std::ios_base::out | std::ios_base::trunc)
    {
        close_out();
        fout.open(__out_file, out_mode);
    }
    // just close the input stream
    void close_in()
    {  
        if (fin.good())
            fin.close();
    }
    //just close the output stream
    void close_out()
    {
        if (fout.good())
            fout.close();
    }
};

} // namespace JDM