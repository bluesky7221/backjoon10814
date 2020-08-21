#include <cstdio>
#include <vector>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;

#define NAME_LENGTH 101
#define AGE_LENGTH 201

struct age
{
    vector<char*> name;
};

age list[AGE_LENGTH];
int main() {

    int n;
    scanf("%d", &n);

    int age; char name[NAME_LENGTH];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &age, &name);

        char* temp = new char[NAME_LENGTH];
        strcpy(temp, name);

        list[age].name.push_back(temp);
    }

    for (int i = 0; i < AGE_LENGTH; i++)
    {
        if (!list[i].name.empty())
        {
            for (int j = 0; j < list[i].name.size(); j++)
            {
                printf("%d %s\n", i, list[i].name[j]);
            }
        }
    }

    return 0;
}
