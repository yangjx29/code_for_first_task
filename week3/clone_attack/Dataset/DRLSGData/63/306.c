int main (void ) {
    int dKpdu8x9m, kRIKAu1ODWL, y1, y2, FsbUG6kC, YEOojXupYM9, azQr7fSN;
    int DK9psX7 [(549 - 448)] [(884 - 783)];
    int PZXe0FL [(416 - 315)] [(952 - 851)];
    int IMsp28A7 [(681 - 580)] [(547 - 446)];
    cin >> dKpdu8x9m >> y1;
    {
        FsbUG6kC = 234 - 233;
        for (; dKpdu8x9m >= FsbUG6kC;) {
            {
                YEOojXupYM9 = 143 - 142;
                for (; y1 >= YEOojXupYM9;) {
                    cin >> DK9psX7[FsbUG6kC][YEOojXupYM9];
                    YEOojXupYM9++;
                };
            }
            FsbUG6kC++;
        };
    }
    cin >> kRIKAu1ODWL >> y2;
    {
        FsbUG6kC = 600 - 599;
        for (; FsbUG6kC <= kRIKAu1ODWL;) {
            {
                YEOojXupYM9 = 378 - 377;
                for (; y2 >= YEOojXupYM9;) {
                    cin >> PZXe0FL[FsbUG6kC][YEOojXupYM9];
                    YEOojXupYM9++;
                };
            }
            FsbUG6kC++;
        };
    }
    {
        FsbUG6kC = 375 - 374;
        for (; dKpdu8x9m >= FsbUG6kC;) {
            {
                YEOojXupYM9 = 783 - 782;
                for (; YEOojXupYM9 <= y2;) {
                    IMsp28A7[FsbUG6kC][YEOojXupYM9] = (60 - 60);
                    {
                        azQr7fSN = 1;
                        for (; azQr7fSN <= kRIKAu1ODWL;) {
                            IMsp28A7[FsbUG6kC][YEOojXupYM9] += DK9psX7[FsbUG6kC][azQr7fSN] * PZXe0FL[azQr7fSN][YEOojXupYM9];
                            azQr7fSN++;
                        };
                    }
                    cout << IMsp28A7[FsbUG6kC][YEOojXupYM9];
                    if (YEOojXupYM9 % y2 == (402 - 402) && FsbUG6kC != dKpdu8x9m)
                        cout << endl;
                    else {
                        if (YEOojXupYM9 % y2 != 0)
                            cout << " ";
                    }
                    YEOojXupYM9++;
                };
            }
            FsbUG6kC++;
        };
    };
}

