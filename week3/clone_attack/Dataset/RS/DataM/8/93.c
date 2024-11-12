int Rl0OuhqzFm (int XiRPAD [], int RgJZfoTN4) {
    int yBMyQ7S, GBMP3szHYKAR, jOp2ar;
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
    for (yBMyQ7S = (325 - 324); RgJZfoTN4 > yBMyQ7S; yBMyQ7S = yBMyQ7S + 1) {
        GBMP3szHYKAR = 549 - 549;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RgJZfoTN4 -yBMyQ7S > GBMP3szHYKAR) {
            if (XiRPAD[GBMP3szHYKAR] > XiRPAD[GBMP3szHYKAR +(204 - 203)]) {
                jOp2ar = XiRPAD[GBMP3szHYKAR];
                XiRPAD[GBMP3szHYKAR] = XiRPAD[GBMP3szHYKAR +(645 - 644)];
                XiRPAD[GBMP3szHYKAR +(672 - 671)] = jOp2ar;
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
            GBMP3szHYKAR = GBMP3szHYKAR +1;
        };
    };
}

int yAmNoV (int tztwMk [], int SmSRY2rBocF, int hyKDNj [], int CJxGaCE47u) {
    int yBMyQ7S;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        yBMyQ7S = 0;
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
        while (CJxGaCE47u > yBMyQ7S) {
            tztwMk[yBMyQ7S + SmSRY2rBocF] = hyKDNj[yBMyQ7S];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            yBMyQ7S++;
        };
    };
}

int main () {
    int tztwMk [200], hyKDNj [100], SmSRY2rBocF, CJxGaCE47u, yBMyQ7S, GBMP3szHYKAR;
    cin >> SmSRY2rBocF >> CJxGaCE47u;
    {
        yBMyQ7S = 0;
        while (yBMyQ7S < SmSRY2rBocF) {
            cin >> tztwMk[yBMyQ7S];
            yBMyQ7S++;
        };
    }
    {
        yBMyQ7S = 0;
        while (yBMyQ7S < CJxGaCE47u) {
            cin >> hyKDNj[yBMyQ7S];
            yBMyQ7S++;
        };
    }
    cin.get ();
    cin.get ();
    Rl0OuhqzFm (tztwMk, SmSRY2rBocF);
    Rl0OuhqzFm (hyKDNj, CJxGaCE47u);
    yAmNoV (tztwMk, SmSRY2rBocF, hyKDNj, CJxGaCE47u);
    {
        yBMyQ7S = 0;
        while ((SmSRY2rBocF +CJxGaCE47u) > yBMyQ7S) {
            cout << tztwMk[yBMyQ7S];
            if (yBMyQ7S < (SmSRY2rBocF +CJxGaCE47u-1))
                cout << " ";
            yBMyQ7S++;
        };
    }
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

