int main () {
    int J7xBUuY6eT;
    int tkMR73EygYAr;
    int m;
    int k;
    int c;
    int sz [LEN], Yth98N1C5v2 [LEN];
    int RK1cVutFZMI;
    int PbczDix9;
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
    m = (888 - 888);
    scanf ("%d", &J7xBUuY6eT);
    for (tkMR73EygYAr = 0; J7xBUuY6eT > tkMR73EygYAr; tkMR73EygYAr++) {
        scanf ("%d", &sz[tkMR73EygYAr]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    m = 0;
    {
        tkMR73EygYAr = 0;
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
        while (tkMR73EygYAr < J7xBUuY6eT) {
            if (!(0 == sz[tkMR73EygYAr] % 2)) {
                Yth98N1C5v2[m] = sz[tkMR73EygYAr];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                m++;
            }
            tkMR73EygYAr++;
        };
    }
    c = m;
    {
        k = 1;
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
        while (k <= c) {
            RK1cVutFZMI = 0;
            for (m = 0; c - k >= m; m++) {
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
                if (Yth98N1C5v2[m] > Yth98N1C5v2[RK1cVutFZMI]) {
                    RK1cVutFZMI = m;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (RK1cVutFZMI != c - k) {
                PbczDix9 = Yth98N1C5v2[RK1cVutFZMI];
                Yth98N1C5v2[RK1cVutFZMI] = Yth98N1C5v2[c - k];
                Yth98N1C5v2[c - k] = PbczDix9;
            }
            k++;
        };
    }
    {
        m = 0;
        while (m < c - 1) {
            printf ("%d,", Yth98N1C5v2[m]);
            m++;
        };
    }
    printf ("%d", Yth98N1C5v2[m]);
    return 0;
}

