int main () {
    char XmYIpi [505];
    char QVIbXfca [505] [505];
    int HGY8qkrBZ;
    int N5jkBnc;
    int Aku8Rlopr;
    int YsIVQbzvLJn;
    int RJUFwkoG;
    int tZ9RuYB;
    int lQuFYyH9V;
    int cZv1Skxcr4Bt;
    int qGQlKj7r8H9E [(840 - 335)] = {0};
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
    HGY8qkrBZ = (211 - 211);
    N5jkBnc = 0;
    Aku8Rlopr = 0;
    YsIVQbzvLJn = 0;
    RJUFwkoG = 2;
    gets (XmYIpi);
    scanf ("%d\n", &tZ9RuYB);
    cZv1Skxcr4Bt = strlen (XmYIpi);
    {
        lQuFYyH9V = 0;
        while (cZv1Skxcr4Bt > lQuFYyH9V) {
            for (HGY8qkrBZ = lQuFYyH9V; tZ9RuYB + lQuFYyH9V > HGY8qkrBZ; HGY8qkrBZ = HGY8qkrBZ +1) {
                QVIbXfca[N5jkBnc][Aku8Rlopr] = XmYIpi[HGY8qkrBZ];
                Aku8Rlopr++;
            }
            lQuFYyH9V++;
            QVIbXfca[N5jkBnc][tZ9RuYB] = '\0';
            N5jkBnc = N5jkBnc +1;
            Aku8Rlopr = 0;
        };
    }
    {
        lQuFYyH9V = 0;
        while (N5jkBnc > lQuFYyH9V) {
            for (HGY8qkrBZ = lQuFYyH9V; HGY8qkrBZ < N5jkBnc; HGY8qkrBZ++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (strcmp (QVIbXfca[lQuFYyH9V], QVIbXfca[HGY8qkrBZ]) == 0) {
                    qGQlKj7r8H9E[lQuFYyH9V] = qGQlKj7r8H9E[lQuFYyH9V] + 1;
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
            lQuFYyH9V++;
        };
    }
    {
        lQuFYyH9V = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N5jkBnc > lQuFYyH9V) {
            if (qGQlKj7r8H9E[lQuFYyH9V] == 1) {
                YsIVQbzvLJn++;
            }
            lQuFYyH9V++;
        };
    }
    if (!(N5jkBnc != YsIVQbzvLJn)) {
        printf ("NO");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        for (lQuFYyH9V = 0; lQuFYyH9V < N5jkBnc; lQuFYyH9V = lQuFYyH9V + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (RJUFwkoG <= qGQlKj7r8H9E[lQuFYyH9V]) {
                RJUFwkoG = qGQlKj7r8H9E[lQuFYyH9V];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else {
                continue;
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
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        printf ("%d\n", RJUFwkoG);
        {
            lQuFYyH9V = 0;
            while (lQuFYyH9V < N5jkBnc) {
                if (qGQlKj7r8H9E[lQuFYyH9V] == RJUFwkoG) {
                    {
                        HGY8qkrBZ = 0;
                        while (HGY8qkrBZ < tZ9RuYB) {
                            printf ("%c", QVIbXfca[lQuFYyH9V][HGY8qkrBZ]);
                            HGY8qkrBZ++;
                        };
                    };
                }
                lQuFYyH9V++;
            };
        };
    }
    return 0;
}

