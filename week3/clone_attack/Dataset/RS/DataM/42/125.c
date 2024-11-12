int main () {
    int Mxceg2wXhn = (148 - 148), m = (358 - 358), sQeoXIH = (275 - 275), dVrIAw = (856 - 856), JHhmoWTK = 0, sum = 0, s = 0;
    int gev6MbrKH3Y [(1000945 - 945)] = {0};
    cin >> Mxceg2wXhn;
    for (sQeoXIH = (166 - 165); Mxceg2wXhn >= sQeoXIH; sQeoXIH++)
        cin >> gev6MbrKH3Y[sQeoXIH];
    cin >> m;
    {
        sQeoXIH = 374 - 373;
        while (Mxceg2wXhn >= sQeoXIH) {
            if (!(m != gev6MbrKH3Y[sQeoXIH])) {
                sum++;
            }
            sQeoXIH = sQeoXIH + 1;
        };
    }
    {
        sQeoXIH = 425 - 424;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Mxceg2wXhn >= sQeoXIH) {
            s = 0;
            if (gev6MbrKH3Y[sQeoXIH] == m) {
                {
                    JHhmoWTK = 336 - 335;
                    while (JHhmoWTK < 1000) {
                        s++;
                        if (gev6MbrKH3Y[sQeoXIH + JHhmoWTK] != m)
                            break;
                        JHhmoWTK = JHhmoWTK +1;
                    };
                }
                for (dVrIAw = sQeoXIH; dVrIAw <= Mxceg2wXhn -JHhmoWTK; dVrIAw++)
                    gev6MbrKH3Y[dVrIAw] = gev6MbrKH3Y[dVrIAw + JHhmoWTK];
            }
            sQeoXIH++;
        };
    }
    {
        sQeoXIH = 1;
        while (sQeoXIH <= Mxceg2wXhn -sum - 1) {
            cout << gev6MbrKH3Y[sQeoXIH] << " ";
            sQeoXIH++;
        };
    }
    cout << gev6MbrKH3Y[Mxceg2wXhn -sum];
    cin.get ();
    cin.get ();
    return 0;
}

