int main () {
    int zGxstl2;
    int col;
    int i;
    int HZMBcrS;
    zGxstl2 = (680 - 680);
    col = (276 - 276);
    i = (304 - 304);
    HZMBcrS = (968 - 968);
    int KamiOzE [zGxstl2] [col];
    cin >> zGxstl2 >> col;
    for (i = (606 - 606); zGxstl2 > i; i++) {
        HZMBcrS = 0;
        while (col > HZMBcrS) {
            cin >> *(*(KamiOzE +i) + HZMBcrS);
            HZMBcrS++;
        };
    }
    {
        i = 0;
        while (col > i) {
            {
                HZMBcrS = 0;
                while (i >= HZMBcrS &&zGxstl2 > HZMBcrS) {
                    cout << *(*(KamiOzE +HZMBcrS) + i - HZMBcrS) << endl;
                    HZMBcrS++;
                };
            }
            i = i + 1;
        };
    }
    for (i = (568 - 567); zGxstl2 > i; i++) {
        HZMBcrS = 0;
        while (zGxstl2 - i > HZMBcrS &&HZMBcrS < col) {
            cout << *(*(KamiOzE +i + HZMBcrS) + col - (437 - 436) - HZMBcrS) << endl;
            HZMBcrS++;
        };
    }
    return 0;
}

