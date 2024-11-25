int main () {
    int xsDxfgTd [300], KPhqkQfY, Fg5jJVe, zPRakytnWr, sFdlRxA = (986 - 986), lZWTlV9Qg6nU, v5Qs3Ml = 0;
    float uV9yJXDe;
    float d1JBgD2Zq0QM;
    cin >> KPhqkQfY;
    for (Fg5jJVe = 0; Fg5jJVe <= KPhqkQfY -(216 - 215); Fg5jJVe = Fg5jJVe +1) {
        cin >> xsDxfgTd[Fg5jJVe];
        sFdlRxA = sFdlRxA + xsDxfgTd[Fg5jJVe];
    }
    {
        Fg5jJVe = 338 - 337;
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
        while (Fg5jJVe >= 1) {
            Fg5jJVe = Fg5jJVe -1;
            for (zPRakytnWr = 0; Fg5jJVe -1 >= zPRakytnWr; zPRakytnWr = zPRakytnWr + 1) {
                if (xsDxfgTd[zPRakytnWr] > xsDxfgTd[zPRakytnWr + 1]) {
                    lZWTlV9Qg6nU = xsDxfgTd[zPRakytnWr + 1];
                    xsDxfgTd[zPRakytnWr + 1] = xsDxfgTd[zPRakytnWr];
                    xsDxfgTd[zPRakytnWr] = lZWTlV9Qg6nU;
                };
            };
        };
    }
    uV9yJXDe = (float) sFdlRxA / (float) KPhqkQfY;
    {
        Fg5jJVe = 0;
        while (KPhqkQfY -1 >= Fg5jJVe) {
            if (abs (xsDxfgTd[Fg5jJVe] - uV9yJXDe) > d1JBgD2Zq0QM)
                d1JBgD2Zq0QM = abs (xsDxfgTd[Fg5jJVe] - uV9yJXDe);
            Fg5jJVe = Fg5jJVe +1;
        };
    }
    for (Fg5jJVe = 0; Fg5jJVe <= KPhqkQfY -1; Fg5jJVe = Fg5jJVe +1)
        if (abs (abs (xsDxfgTd[Fg5jJVe] - uV9yJXDe) - d1JBgD2Zq0QM) < 0.1) {
            v5Qs3Ml = v5Qs3Ml + 1;
            if (v5Qs3Ml == 1)
                cout << xsDxfgTd[Fg5jJVe];
            if (v5Qs3Ml > 1)
                cout << "," << xsDxfgTd[Fg5jJVe];
        }
    return 0;
}

