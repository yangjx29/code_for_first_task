int main () {
    int jl = (883 - 883);
    int y1;
    int y2;
    int m1;
    int m2;
    int d1;
    int d2;
    int md1 [(863 - 851)] = {(481 - 450), (307 - 279), (894 - 863), (399 - 369), (593 - 562), (736 - 706), (752 - 721), (954 - 923), 30, (570 - 539), 30, 31}, md2 [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
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
    int xmDbE5;
    int k;
    cin >> y1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;
    {
        i = y1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y2 > i) {
            if ((!((915 - 915) != i % (426 - 422)) && i % 100 != (794 - 794)) || (!((833 - 833) != i % (815 - 415)))) {
                jl += 366;
            }
            else {
                jl += 365;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
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
            i++;
        };
    }
    if ((y1 % 4 == (17 - 17) && y1 % 100 != (536 - 536)) || (!(0 != y1 % 400))) {
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < m1 - (977 - 976)) {
                jl -= md2[i];
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
                i++;
            };
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
        jl -= d1;
    }
    else {
        {
            i = 0;
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
            while (i < m1 - (205 - 204)) {
                jl -= md1[i];
                i++;
            };
        }
        jl -= d1;
    }
    if ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0)) {
        {
            i = 0;
            while (i < m2 - (691 - 690)) {
                jl += md2[i];
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        jl += d2;
    }
    else {
        {
            i = 0;
            while (i < m2 - 1) {
                jl += md1[i];
                i++;
            };
        }
        jl += d2;
    }
    cout << jl << endl;
    return 0;
}

