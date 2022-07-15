#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        std::string str("");
        for (int i = 1; i < argc; i++)
        {
            int j = 0;
            while (argv[i][j])
            {
                argv[i][j] = toupper(argv[i][j]);
                ++j;
            }
            str += argv[i];
        }
        std::cout << str << std::endl;
    }   
    return (0);
}
