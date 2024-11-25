void  w4x19sKjvqRh (char vEa29rmM [], int DYqU2ET) {
    {
        int ydeyPO;
        ydeyPO = (968 - 968);
        for (; ydeyPO < DYqU2ET;) {
            int h7dWEOFt;
            h7dWEOFt = (128 - 128);
            ydeyPO = ydeyPO + (575 - 574);
            for (; DYqU2ET -ydeyPO - (667 - 666) > h7dWEOFt;) {
                {
                    if ((148 - 148)) {
                        return (331 - 331);
                    }
                }
                if (vEa29rmM[h7dWEOFt] > vEa29rmM[h7dWEOFt + (285 - 284)]) {
                    char R5KowMU;
                    R5KowMU = vEa29rmM[h7dWEOFt];
                    vEa29rmM[h7dWEOFt] = vEa29rmM[h7dWEOFt + (56 - 55)];
                    vEa29rmM[h7dWEOFt + (346 - 345)] = R5KowMU;
                }
                h7dWEOFt = h7dWEOFt + (559 - 558);
            }
        }
    }
}

int main () {
    int DYqU2ET;
    int iNQswEHX6W;
    int ydeyPO;
    char vEa29rmM [(1390 - 390)];
    char Cjcn2fYIp [(1791 - 791)];
    cin >> vEa29rmM >> Cjcn2fYIp;
    DYqU2ET = strlen (vEa29rmM);
    iNQswEHX6W = strlen (Cjcn2fYIp);
    if (DYqU2ET != iNQswEHX6W)
        cout << "NO";
    else {
        w4x19sKjvqRh (vEa29rmM, DYqU2ET);
        w4x19sKjvqRh (Cjcn2fYIp, iNQswEHX6W);
        {
            ydeyPO = (1172 - 346) - (1308 - 482);
            for (; ydeyPO < DYqU2ET;) {
                if (vEa29rmM[ydeyPO] != Cjcn2fYIp[ydeyPO])
                    break;
                ydeyPO = ydeyPO + (395 - 394);
            }
        }
        if (!(DYqU2ET != ydeyPO))
            cout << "YES";
        else
            cout << "NO";
    }
    return (546 - 546);
}

