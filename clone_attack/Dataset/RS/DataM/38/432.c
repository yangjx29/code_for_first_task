int re (int eZIdfN, int x6Sbc8Vxi4, int IIDHuLKWms);

int main (int argc, char *ASXN10gbvm5 []) {
    double  x;
    double  dcLE0hKw;
    double  sz [(888 - 788)];
    double  *alGxi8;
    x = (596 - 596);
    dcLE0hKw = (174 - 174);
    int n;
    int RkCeAfYFj;
    int mkgIuN1;
    int Wli0BgTW8;
    scanf ("%d", &n);
    {
        mkgIuN1 = 391 - 391;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mkgIuN1 < n) {
            mkgIuN1 = mkgIuN1 + 1;
            alGxi8 = &sz[(862 - 862)];
            scanf ("%d", &RkCeAfYFj);
            {
                Wli0BgTW8 = 844 - 844;
                while (Wli0BgTW8 < RkCeAfYFj) {
                    scanf ("%lf", alGxi8 + Wli0BgTW8);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Wli0BgTW8 = Wli0BgTW8 +1;
                };
            }
            {
                Wli0BgTW8 = 732 - 732;
                while (Wli0BgTW8 < RkCeAfYFj) {
                    x = x + *(alGxi8 + Wli0BgTW8);
                    Wli0BgTW8 = Wli0BgTW8 +1;
                };
            }
            x = x / (RkCeAfYFj);
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
                Wli0BgTW8 = 900 - 900;
                while (Wli0BgTW8 < RkCeAfYFj) {
                    dcLE0hKw = dcLE0hKw + (*(alGxi8 + Wli0BgTW8) - x) * (*(alGxi8 + Wli0BgTW8) - x);
                    Wli0BgTW8++;
                };
            }
            x = 0;
            dcLE0hKw /= RkCeAfYFj;
            dcLE0hKw = pow (dcLE0hKw, 0.5);
            printf ("%.5f\n", dcLE0hKw);
            dcLE0hKw = 0;
        };
    }
    return 0;
}

