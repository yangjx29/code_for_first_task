int main () {
    int PUwjx8dbaFi = (883 - 883);
    cin >> PUwjx8dbaFi;
    int yBW5q7bm [100];
    {
        int gZFNV0sUB = (625 - 625);
        while (gZFNV0sUB < PUwjx8dbaFi) {
            int QyeNB9M0r4 = (330 - 330);
            int CwIC48ibNgoS = 0;
            cin >> QyeNB9M0r4 >> CwIC48ibNgoS;
            int WSaiBUOp [100] [100];
            {
                int j3qsKa4UQTf = 0;
                while (j3qsKa4UQTf < QyeNB9M0r4) {
                    {
                        int x4dxmSzfo = 0;
                        for (; x4dxmSzfo < CwIC48ibNgoS;) {
                            cin >> WSaiBUOp[j3qsKa4UQTf][x4dxmSzfo];
                            x4dxmSzfo++;
                        };
                    }
                    j3qsKa4UQTf++;
                };
            }
            yBW5q7bm[gZFNV0sUB] = 0;
            {
                int j3qsKa4UQTf = 0;
                while (j3qsKa4UQTf < QyeNB9M0r4) {
                    if (j3qsKa4UQTf == 0 || j3qsKa4UQTf == QyeNB9M0r4 -(356 - 355)) {
                        int x4dxmSzfo = 0;
                        while (x4dxmSzfo < CwIC48ibNgoS) {
                            yBW5q7bm[gZFNV0sUB] = yBW5q7bm[gZFNV0sUB] + WSaiBUOp[j3qsKa4UQTf][x4dxmSzfo];
                            x4dxmSzfo++;
                        };
                    }
                    else {
                        yBW5q7bm[gZFNV0sUB] = yBW5q7bm[gZFNV0sUB] + WSaiBUOp[j3qsKa4UQTf][0];
                        yBW5q7bm[gZFNV0sUB] = yBW5q7bm[gZFNV0sUB] + WSaiBUOp[j3qsKa4UQTf][CwIC48ibNgoS -1];
                    }
                    j3qsKa4UQTf++;
                };
            }
            gZFNV0sUB++;
        };
    }
    {
        int gZFNV0sUB = 0;
        while (gZFNV0sUB < PUwjx8dbaFi) {
            cout << yBW5q7bm[gZFNV0sUB];
            if (gZFNV0sUB < PUwjx8dbaFi -1)
                cout << endl;
            gZFNV0sUB++;
        };
    }
    return 0;
}

