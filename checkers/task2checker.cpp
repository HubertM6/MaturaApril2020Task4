#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    registerTestlibCmd(argc, argv);

    int expectedLength = ans.readInt();
    int expectedL = ans.readInt();
    int expectedR = ans.readInt();

    int userLength = ouf.readInt();
    int userL = ouf.readInt();
    int userR = ouf.readInt();

    bool lengthOK = expectedLength == userLength;
    bool lOK = expectedL == userL;
    bool rOK = expectedR == userR;

    int score = 2 * lengthOK + lOK + rOK;

    if (lengthOK && lOK && rOK) quitp(_pc(score), "Poprawna odpowiedź");
    else if (!lengthOK && !lOK && !rOK) quitp(_pc(score), "Błędna odpowiedź, oczekiwano: %d %d %d a otrzymano %d %d %d", expectedLength, expectedL, expectedR, userLength, userL, userR);
    else quitp(_pc(score), "Odpowiedź częściowo poprawna, oczekiwano: %d %d %d a otrzymano %d %d %d", expectedLength, expectedL, expectedR, userLength, userL, userR);
}