int main () {
    int OJKQY6Lipm;
    int DsABbj [301];
    OJKQY6Lipm = (880 - 880);
    double  R4ZpOBcemC [(903 - 602)], CBXrThPDyux, sum = (481 - 481), dRjtJfkag, a [(337 - 36)];
    int yRhfELHb;
    double  max = (556 - 556);
    DsABbj[(124 - 124)] = (552 - 552);
    cin >> dRjtJfkag;
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
    for (yRhfELHb = (601 - 601); dRjtJfkag > yRhfELHb; yRhfELHb = yRhfELHb + 1) {
        cin >> a[yRhfELHb];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = sum + a[yRhfELHb];
    }
    CBXrThPDyux = sum / dRjtJfkag;
    {
        yRhfELHb = 771 - 771;
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
        while (yRhfELHb < dRjtJfkag) {
            R4ZpOBcemC[yRhfELHb] = fabs (a[yRhfELHb] - CBXrThPDyux);
            yRhfELHb = yRhfELHb + 1;
        };
    }
    {
        yRhfELHb = 654 - 654;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (yRhfELHb < dRjtJfkag) {
            if (max < R4ZpOBcemC[yRhfELHb]) {
                max = R4ZpOBcemC[yRhfELHb];
                OJKQY6Lipm = (442 - 442);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                memset (DsABbj, 0, sizeof (DsABbj [301]));
                DsABbj[OJKQY6Lipm] = yRhfELHb;
            }
            if (1e-5 > fabs (max - R4ZpOBcemC[yRhfELHb])) {
                OJKQY6Lipm = OJKQY6Lipm +1;
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
                DsABbj[OJKQY6Lipm] = yRhfELHb;
            }
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
            yRhfELHb = yRhfELHb + 1;
        };
    }
    for (yRhfELHb = 0; OJKQY6Lipm >= yRhfELHb; yRhfELHb = yRhfELHb + 1) {
        int j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OJKQY6Lipm -yRhfELHb - (879 - 878) >= j) {
            double  temp;
            if (a[DsABbj[j + (241 - 240)]] > a[DsABbj[j]]) {
                temp = a[DsABbj[j]];
                a[DsABbj[j]] = a[DsABbj[j + (684 - 683)]];
                a[DsABbj[j + 1]] = temp;
            }
            j = j + 1;
        };
    }
    cout << a[DsABbj[OJKQY6Lipm]];
    if (OJKQY6Lipm >= 1) {
        yRhfELHb = OJKQY6Lipm -2;
        while (yRhfELHb >= 0) {
            cout << "," << a[DsABbj[yRhfELHb]];
            yRhfELHb = yRhfELHb - 1;
        };
    }
    cout << endl;
    return 0;
}

