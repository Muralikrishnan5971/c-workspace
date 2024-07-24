#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <list>

using namespace std;

int main()
{
    map<string, string> myDict;
    myDict.insert(pair<string, string>("eat", "dearfaple"));
    myDict.insert(pair<string, string>("apple", "sdaflppe"));
    myDict.insert(pair<string, string>("zenrun", "cweunrwtes"));
    myDict.insert(pair<string, string>("run", "gsesasuns"));

   // myDict.erase("apple");
    //myDict.clear();

    for (auto pair : myDict)
        cout << pair.first << " - " << pair.second << endl;

    auto it = myDict.find("eat");
    cout << it->first << " --- " << it->second << endl;

    cout << "****************************************" << endl;

    unordered_map<string, string> myUODict;
    myUODict.insert(pair<string, string>("eat", "dearfaple"));
    myUODict.insert(pair<string, string>("apple", "sdaflppe"));
    myUODict.insert(pair<string, string>("zenrun", "cweunrwtes"));
    myUODict.insert(pair<string, string>("run", "gsesasuns"));

    myUODict["run"] = "GSESASUNS";

    for (auto pair : myUODict)
        cout << pair.first << " - " << pair.second << endl;

    cout << "SIZE OF THE MAP IS: " << myUODict.size() << endl;

    map<string, list<string>> myFavs;
    list<string> qtfilms = {"pulpfiction", "reserviordogs", "ouatih"};
    list<string> ssfilms = {"ET", "RPO", "jurrasicpark"};
    list<string> ptafilms = {"master", "boogienights", "inherentvice"};
    list<string> wkwfilms = {"itnfl", "chunkingexpress", "intothewild"};
    myFavs.insert(pair<string, list<string>>("QT", qtfilms));
    myFavs.insert(pair<string, list<string>>("SS", ssfilms));
    myFavs.insert(pair<string, list<string>>("PTA", ptafilms));
    myFavs.insert(pair<string, list<string>>("WKW", wkwfilms));

    for (auto l : myFavs)
    {
        cout << l.first << " - ";
        for (auto m : l.second)
        {
            cout << m << ", ";
        }
        cout << endl;
    }

    cout << "****************************************" << endl;






    return 0;
}
