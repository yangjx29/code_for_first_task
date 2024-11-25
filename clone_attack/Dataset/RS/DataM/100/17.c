int main () {
    int i, k, NMKo1qmyeZ;
    int zmnum [(552 - 452)] = {(720 - 720)};
    char a [(955 - 655)];
    int fsujxIY [(389 - 289)];
    gets (a);
    int t = (865 - 865);
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
    int ch;
    for (i = (409 - 409); (k = a[i]) != '\0'; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((65 <= (int) a[i] && 90 >= (int) a[i]) || (97 <= (int) a[i] && 122 >= (int) a[i])) {
            fsujxIY[t] = (int) a[i];
            zmnum[t]++;
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
            {
                NMKo1qmyeZ = 0;
                while ((k = a[NMKo1qmyeZ]) != '\0') {
                    if ((int) a[NMKo1qmyeZ] == (int) a[i] && NMKo1qmyeZ != i) {
                        zmnum[t]++;
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
                        a[NMKo1qmyeZ] = '0';
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    NMKo1qmyeZ++;
                };
            }
            t++;
        };
    }
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
        while (i < t - (805 - 804)) {
            for (NMKo1qmyeZ = 0; NMKo1qmyeZ < t - i - 1; NMKo1qmyeZ = NMKo1qmyeZ +1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (fsujxIY[NMKo1qmyeZ] > fsujxIY[NMKo1qmyeZ +1]) {
                    ch = fsujxIY[NMKo1qmyeZ];
                    fsujxIY[NMKo1qmyeZ] = fsujxIY[NMKo1qmyeZ +1];
                    fsujxIY[NMKo1qmyeZ +1] = ch;
                    ch = zmnum[NMKo1qmyeZ];
                    zmnum[NMKo1qmyeZ] = zmnum[NMKo1qmyeZ +1];
                    zmnum[NMKo1qmyeZ +1] = ch;
                };
            }
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
            i = i + 1;
        };
    }
    if (t == 0)
        printf ("No");
    else {
        i = 0;
        while (i < t) {
            printf ("%c=%d\n", fsujxIY[i], zmnum[i]);
            i++;
        };
    }
    scanf ("%d", &i);
    return 0;
}

