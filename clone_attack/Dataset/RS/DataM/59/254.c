int main () {
    int jalI10;
    jalI10 = 0;
    char touZbH2 [110] [110] = {'\0'};
    int uygMZn;
    char HCyP8FwUEgt [110] [110] = {'\0'};
    int m;
    getchar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    getchar ();
    cin >> uygMZn;
    {
        int XeXwa4TEsZ8 = (883 - 882);
        while (XeXwa4TEsZ8 <= uygMZn) {
            {
                int rfxTVi = (563 - 562);
                while (uygMZn >= rfxTVi) {
                    cin >> HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    rfxTVi = rfxTVi + 1;
                };
            }
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
            XeXwa4TEsZ8++;
        };
    }
    cin >> m;
    if (!((98 - 97) == m)) {
        for (int XeXwa4TEsZ8 = 1;
        m > XeXwa4TEsZ8; XeXwa4TEsZ8++) {
            {
                int XeXwa4TEsZ8 = 1;
                while (XeXwa4TEsZ8 <= uygMZn) {
                    {
                        int rfxTVi = 1;
                        while (rfxTVi <= uygMZn) {
                            touZbH2[XeXwa4TEsZ8][rfxTVi] = HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi];
                            rfxTVi++;
                        };
                    }
                    XeXwa4TEsZ8++;
                };
            }
            for (int XeXwa4TEsZ8 = 1;
            XeXwa4TEsZ8 <= uygMZn; XeXwa4TEsZ8++) {
                int rfxTVi = 1;
                while (rfxTVi <= uygMZn) {
                    if (!('@' != HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi]) && !('#' == HCyP8FwUEgt[XeXwa4TEsZ8 -1][rfxTVi]))
                        touZbH2[XeXwa4TEsZ8 -1][rfxTVi] = '@';
                    if (!('@' != HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi]) && HCyP8FwUEgt[XeXwa4TEsZ8 +1][rfxTVi] != '#')
                        touZbH2[XeXwa4TEsZ8 +1][rfxTVi] = '@';
                    if (HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi] == '@' && HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi - 1] != '#')
                        touZbH2[XeXwa4TEsZ8][rfxTVi - 1] = '@';
                    if (HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi] == '@' && HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi + 1] != '#')
                        touZbH2[XeXwa4TEsZ8][rfxTVi + 1] = '@';
                    rfxTVi++;
                };
            }
            {
                int XeXwa4TEsZ8 = 1;
                while (XeXwa4TEsZ8 <= uygMZn) {
                    {
                        int rfxTVi = 1;
                        while (rfxTVi <= uygMZn) {
                            HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi] = touZbH2[XeXwa4TEsZ8][rfxTVi];
                            rfxTVi++;
                        };
                    }
                    XeXwa4TEsZ8++;
                };
            };
        };
    }
    {
        int XeXwa4TEsZ8 = 1;
        while (XeXwa4TEsZ8 <= uygMZn) {
            {
                int rfxTVi = 1;
                while (rfxTVi <= uygMZn) {
                    if (HCyP8FwUEgt[XeXwa4TEsZ8][rfxTVi] == '@')
                        jalI10++;
                    rfxTVi++;
                };
            }
            XeXwa4TEsZ8++;
        };
    }
    cout << jalI10 << endl;
    return 0;
}

