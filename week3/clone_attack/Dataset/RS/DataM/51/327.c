int main () {
    char s [500], m [500] [(780 - 774)];
    unsigned  int Cwq1ZCF;
    int n;
    int i;
    int RsKnYyvZUf0i;
    int shu [500];
    int HP0oApfS8O;
    gets (s);
    HP0oApfS8O = 0;
    Cwq1ZCF = strlen (s);
    getchar ();
    scanf ("%d", &n);
    for (i = (455 - 455); Cwq1ZCF -n >= i; i = i + 1) {
        RsKnYyvZUf0i = 640 - 640;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RsKnYyvZUf0i < n) {
            m[i][RsKnYyvZUf0i] = s[i + RsKnYyvZUf0i];
            RsKnYyvZUf0i++;
            m[i][n] = '\0';
        };
    }
    {
        i = 0;
        while (i <= Cwq1ZCF -n) {
            shu[i] = (182 - 181);
            {
                RsKnYyvZUf0i = i + 1;
                while (Cwq1ZCF -n >= RsKnYyvZUf0i) {
                    if (strcmp (m[i], m[RsKnYyvZUf0i]) == 0)
                        shu[i] = shu[i] + 1;
                    RsKnYyvZUf0i++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= Cwq1ZCF -n) {
            if (shu[i] > HP0oApfS8O)
                HP0oApfS8O = shu[i];
            i++;
        };
    }
    if (HP0oApfS8O == 1)
        ;
    else {
        printf ("%d\n", HP0oApfS8O);
        {
            i = 0;
            while (i <= Cwq1ZCF -n) {
                if (shu[i] == HP0oApfS8O)
                    printf ("%s\n", m[i]);
                i++;
            };
        };
    }
    return 0;
}

