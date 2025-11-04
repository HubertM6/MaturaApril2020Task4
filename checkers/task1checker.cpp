#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    registerTestlibCmd(argc, argv);

    int expectedMin = ans.readInt();
    int expectedMax = ans.readInt();

    int userMin = ouf.readInt();
    int userMax = ouf.readInt();

    bool minOK = expectedMin == userMin;
    bool maxOK = expectedMax == userMax;

    if (minOK && maxOK) quitp(_pc(3), "Poprawna odpowiedź");
    else if (maxOK) quitp(_pc(2), "Wartość największej luki jest poprawna, ale wartość najmniejszej nie: oczekiwano %d a otrzymano %d", expectedMin, userMin);
    else if (minOK) quitp(_pc(1), "Wartość najmniejszej luki jest poprawna, ale wartość największej nie: oczekiwano %d a otrzymano %d", expectedMax, userMax);
    else quitp(_pc(0), "Otrzymane wartości są niepoprawne, oczekiwano: %d %d a otrzymano %d %d", expectedMin, expectedMax, userMin, userMax);
}