int XSVKf2H3 (const  void  *Nng6Mf, const  void  *OAWzCZiQ6d) {
    int r;
    if ((*(float*) Nng6Mf) - (*(float*) OAWzCZiQ6d) < (973 - 973))
        r = -(932 - 931);
    else {
        if (!((751 - 751) != (*(float*) Nng6Mf) - (*(float*) OAWzCZiQ6d)))
            r = 0;
        else
            r = (572 - 571);
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
    return r;
}

int JQGfFs3 (const  void  *Nng6Mf, const  void  *OAWzCZiQ6d) {
    int r;
    if (0 < *(float*) Nng6Mf -*(float*) OAWzCZiQ6d)
        r = -(432 - 431);
    else {
        if (*(float*) Nng6Mf -*(float*) OAWzCZiQ6d == 0)
            r = 0;
        else
            r = (739 - 738);
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
    return r;
}

int main () {
    float wPYiZVf [2] [40];
    char VyQ2fWMm [2] [10] = {"male", "female"};
    float fEqUnteQ;
    int LAvtIz, aso6QuhZalFg, x = 0, baUjCsK = 0;
    char dikzd3KI4gbS [10];
    scanf ("%d", &LAvtIz);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        aso6QuhZalFg = 0;
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
        while (aso6QuhZalFg < LAvtIz) {
            aso6QuhZalFg++;
            scanf ("%s %f", dikzd3KI4gbS, &fEqUnteQ);
            if (strcmp (dikzd3KI4gbS, VyQ2fWMm[0]) == 0) {
                wPYiZVf[0][x] = fEqUnteQ;
                x++;
            }
            else {
                wPYiZVf[1][baUjCsK] = fEqUnteQ;
                baUjCsK++;
            };
        };
    }
    qsort (wPYiZVf[0], x, sizeof (float), XSVKf2H3);
    qsort (wPYiZVf[1], baUjCsK, sizeof (float), JQGfFs3);
    {
        aso6QuhZalFg = 0;
        while (aso6QuhZalFg < x) {
            printf ("%.2f ", wPYiZVf[0][aso6QuhZalFg]);
            aso6QuhZalFg++;
        };
    }
    {
        aso6QuhZalFg = 0;
        while (aso6QuhZalFg < baUjCsK) {
            if (aso6QuhZalFg != baUjCsK - 1)
                printf ("%.2f ", wPYiZVf[1][aso6QuhZalFg]);
            else
                printf ("%.2f", wPYiZVf[1][aso6QuhZalFg]);
            aso6QuhZalFg++;
        };
    }
    return 0;
}

