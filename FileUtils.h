#include<string>
#include<vector>
#include"Point.h"
using namespace std;

class FileUtils
{
    public:
    static vector<Point> readDatasetFromFile();
    static void readDatasetFromFile(int startPos);
    static Point extractAndFormPoint(string line);
};