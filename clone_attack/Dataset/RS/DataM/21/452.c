int main () {
    int ho9dfaDZBg = (475 - 475);
    double  temp;
    double  shu [(1153 - 853)];
    double  eMA30Klu1ShQ;
    int KEb9xYWV0mG;
    double  dXGpwi98CQl;
    dXGpwi98CQl = (504 - 504);
    double  cha [300];
    double  ckSiLhZwr;
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
    ckSiLhZwr = (134 - 134);
    int dfINZzWb;
    cin >> KEb9xYWV0mG;
    for (int OCJcfX = (723 - 723);
    KEb9xYWV0mG > OCJcfX; OCJcfX = OCJcfX +1)
        cin >> shu[OCJcfX];
    {
        int OCJcfX = (694 - 694);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OCJcfX < KEb9xYWV0mG) {
            dXGpwi98CQl = dXGpwi98CQl + shu[OCJcfX];
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
            OCJcfX = OCJcfX +1;
        };
    }
    eMA30Klu1ShQ = dXGpwi98CQl / KEb9xYWV0mG;
    {
        int OCJcfX = (976 - 976);
        while (OCJcfX < KEb9xYWV0mG -(1001 - 1000)) {
            {
                int ccgOXn = OCJcfX +(188 - 187);
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
                while (KEb9xYWV0mG > ccgOXn) {
                    if (shu[ccgOXn] < shu[OCJcfX]) {
                        temp = shu[OCJcfX];
                        shu[OCJcfX] = shu[ccgOXn];
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
                        shu[ccgOXn] = temp;
                    }
                    ccgOXn = ccgOXn + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            OCJcfX = OCJcfX +1;
        };
    }
    {
        int OCJcfX = (444 - 444);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OCJcfX < KEb9xYWV0mG) {
            cha[OCJcfX] = abs (eMA30Klu1ShQ - shu[OCJcfX]);
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
            OCJcfX++;
        };
    }
    for (int OCJcfX = (440 - 440);
    OCJcfX < KEb9xYWV0mG; OCJcfX = OCJcfX +1) {
        if (cha[OCJcfX] >= ckSiLhZwr)
            ckSiLhZwr = cha[OCJcfX];
    }
    {
        int OCJcfX = 0;
        while (OCJcfX < KEb9xYWV0mG) {
            if (!(cha[OCJcfX] != ckSiLhZwr)) {
                dfINZzWb = OCJcfX;
                ho9dfaDZBg++;
            }
            OCJcfX++;
        };
    }
    if (ho9dfaDZBg == (704 - 703))
        cout << shu[dfINZzWb];
    else {
        for (int OCJcfX = 0;
        OCJcfX < KEb9xYWV0mG; OCJcfX = OCJcfX +1) {
            if (ckSiLhZwr == cha[OCJcfX]) {
                cout << shu[OCJcfX];
                dfINZzWb = OCJcfX;
                break;
            };
        }
        {
            int OCJcfX = dfINZzWb + 1;
            while (OCJcfX < KEb9xYWV0mG) {
                if (ckSiLhZwr == cha[OCJcfX])
                    cout << ',' << shu[OCJcfX];
                OCJcfX++;
            };
        };
    }
    return 0;
}

