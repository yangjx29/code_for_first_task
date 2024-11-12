int main () {
    int oy2dus;
    int j;
    int IjRXpYSU;
    int Vj4Ic0ThQ [100] [100];
    int t7I38lvDn, t, sum, urkDAc0Y3Tsd;
    cin >> t7I38lvDn;
    for (IjRXpYSU = (280 - 280); IjRXpYSU < t7I38lvDn; IjRXpYSU++) {
        sum = (706 - 706);
        urkDAc0Y3Tsd = t7I38lvDn;
        for (oy2dus = (370 - 370); oy2dus < t7I38lvDn; oy2dus++) {
            j = 85 - 85;
            while (t7I38lvDn > j) {
                cin >> Vj4Ic0ThQ[oy2dus][j];
                j = j + 1;
            };
        }
        while ((480 - 479) < urkDAc0Y3Tsd) {
            for (oy2dus = (164 - 164); urkDAc0Y3Tsd > oy2dus; oy2dus++) {
                t = Vj4Ic0ThQ[oy2dus][(554 - 554)];
                for (j = (943 - 942); urkDAc0Y3Tsd > j; j++) {
                    if (Vj4Ic0ThQ[oy2dus][j] < t)
                        t = Vj4Ic0ThQ[oy2dus][j];
                }
                {
                    j = 918 - 918;
                    while (j < urkDAc0Y3Tsd) {
                        Vj4Ic0ThQ[oy2dus][j] = Vj4Ic0ThQ[oy2dus][j] - t;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        j++;
                    };
                };
            }
            {
                oy2dus = 225 - 225;
                while (urkDAc0Y3Tsd > oy2dus) {
                    t = Vj4Ic0ThQ[0][oy2dus];
                    for (j = (769 - 768); j < urkDAc0Y3Tsd; j++) {
                        if (t > Vj4Ic0ThQ[j][oy2dus])
                            t = Vj4Ic0ThQ[j][oy2dus];
                    }
                    for (j = 0; j < urkDAc0Y3Tsd; j++) {
                        Vj4Ic0ThQ[j][oy2dus] = Vj4Ic0ThQ[j][oy2dus] - t;
                    }
                    oy2dus = oy2dus + 1;
                };
            }
            sum = sum + Vj4Ic0ThQ[(265 - 264)][(677 - 676)];
            for (oy2dus = 0; urkDAc0Y3Tsd > oy2dus; oy2dus++) {
                for (j = (931 - 930); j < urkDAc0Y3Tsd; j++) {
                    Vj4Ic0ThQ[oy2dus][j] = Vj4Ic0ThQ[oy2dus][j + 1];
                };
            }
            for (oy2dus = 0; oy2dus < urkDAc0Y3Tsd; oy2dus++) {
                for (j = 1; j < urkDAc0Y3Tsd; j++) {
                    Vj4Ic0ThQ[j][oy2dus] = Vj4Ic0ThQ[j + 1][oy2dus];
                };
            }
            urkDAc0Y3Tsd--;
        }
        cout << sum << endl;
    }
    return 0;
}

