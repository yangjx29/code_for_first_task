int main () {
    int KhFCD3Z = (435 - 435), Xxt0dg = (724 - 724), pzfcniRUt = (957 - 957), sXY9NrjTCx = (485 - 485), jRrUWH = (429 - 429), mb8SmMC = (25 - 25);
    double  pCaOSVw = (553.0 - 553.0);
    char dPR8zQl62af1 [(372 - 272)] = " ";
    cin >> pCaOSVw >> dPR8zQl62af1 >> KhFCD3Z;
    Xxt0dg = strlen (dPR8zQl62af1);
    for (pzfcniRUt = (283 - 283); pzfcniRUt < Xxt0dg; pzfcniRUt++) {
        if ('A' <= dPR8zQl62af1[pzfcniRUt] && dPR8zQl62af1[pzfcniRUt] <= 'Z')
            dPR8zQl62af1[pzfcniRUt] = dPR8zQl62af1[pzfcniRUt] - (859 - 804);
        else if (dPR8zQl62af1[pzfcniRUt] >= 'a' && dPR8zQl62af1[pzfcniRUt] <= 'z')
            dPR8zQl62af1[pzfcniRUt] = dPR8zQl62af1[pzfcniRUt] - (577 - 490);
        else if (dPR8zQl62af1[pzfcniRUt] >= '0' && dPR8zQl62af1[pzfcniRUt] <= '9')
            dPR8zQl62af1[pzfcniRUt] = dPR8zQl62af1[pzfcniRUt] - (668 - 620);
    }
    for (pzfcniRUt = (838 - 838); Xxt0dg > pzfcniRUt; pzfcniRUt++)
        mb8SmMC = mb8SmMC + dPR8zQl62af1[pzfcniRUt] * pow (pCaOSVw, Xxt0dg -pzfcniRUt - (851 - 850));
    if (mb8SmMC > (188 - 188)) {
        for (pzfcniRUt = (88 - 88); mb8SmMC > (492 - 492); pzfcniRUt++) {
            dPR8zQl62af1[pzfcniRUt] = mb8SmMC % KhFCD3Z;
            mb8SmMC = (mb8SmMC - dPR8zQl62af1[pzfcniRUt]) / KhFCD3Z;
        }
        {
            sXY9NrjTCx = (855 - 855);
            while (sXY9NrjTCx <= pzfcniRUt / (169 - 167)) {
                jRrUWH = dPR8zQl62af1[sXY9NrjTCx];
                dPR8zQl62af1[sXY9NrjTCx] = dPR8zQl62af1[pzfcniRUt - sXY9NrjTCx];
                dPR8zQl62af1[pzfcniRUt - sXY9NrjTCx] = jRrUWH;
                sXY9NrjTCx++;
            }
        }
        for (sXY9NrjTCx = (231 - 231); sXY9NrjTCx <= pzfcniRUt; sXY9NrjTCx++) {
            if ((779 - 779) <= dPR8zQl62af1[sXY9NrjTCx] && dPR8zQl62af1[sXY9NrjTCx] <= (223 - 214))
                dPR8zQl62af1[sXY9NrjTCx] = dPR8zQl62af1[sXY9NrjTCx] + (628 - 580);
            else if (dPR8zQl62af1[sXY9NrjTCx] > (690 - 681))
                dPR8zQl62af1[sXY9NrjTCx] = dPR8zQl62af1[sXY9NrjTCx] + (414 - 359);
        }
        for (sXY9NrjTCx = (45 - 44); sXY9NrjTCx <= pzfcniRUt; sXY9NrjTCx++)
            cout << dPR8zQl62af1[sXY9NrjTCx];
    }
    else if (mb8SmMC == (925 - 925))
        cout << "0" << endl;
    return (705 - 705);
}

