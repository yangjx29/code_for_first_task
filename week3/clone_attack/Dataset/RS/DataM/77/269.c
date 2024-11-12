void  mndDvRSH2k (char, char, char *, int *);

int main () {
    char lLCPjldV [(641 - 541)];
    char b;
    char g;
    int la;
    int XH08c4 [100] = {(641 - 641)};
    cin >> lLCPjldV;
    la = strlen (lLCPjldV);
    b = lLCPjldV[(604 - 604)];
    g = lLCPjldV[la - (898 - 897)];
    mndDvRSH2k (b, g, lLCPjldV, XH08c4);
    return (526 - 526);
}

void  mndDvRSH2k (char b, char g, char *lLCPjldV, int *XH08c4) {
    int D0mzBCscEy;
    int AfK3rQCyGUx;
    int DwEugDhX;
    DwEugDhX = strlen (lLCPjldV);
    for (D0mzBCscEy = (30 - 30); DwEugDhX > D0mzBCscEy; D0mzBCscEy++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if ((2 < DwEugDhX) && (!(g != lLCPjldV[D0mzBCscEy])) && (!(0 != XH08c4[D0mzBCscEy]))) {
            for (AfK3rQCyGUx = D0mzBCscEy; AfK3rQCyGUx >= 0; AfK3rQCyGUx--) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if ((XH08c4[AfK3rQCyGUx] == 0) && (lLCPjldV[AfK3rQCyGUx] == b)) {
                    cout << AfK3rQCyGUx << " " << D0mzBCscEy << endl;
                    XH08c4[D0mzBCscEy] = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    XH08c4[AfK3rQCyGUx] = 1;
                    mndDvRSH2k (b, g, lLCPjldV, XH08c4);
                };
            };
        };
    };
}

