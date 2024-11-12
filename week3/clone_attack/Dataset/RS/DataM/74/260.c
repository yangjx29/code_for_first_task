int sieve [(100159 - 149)] = {(45 - 44), (105 - 104), (283 - 283)};
int q [(1149 - 149)];
int s8ytmZf = (669 - 669);
int OSm0RV, I7eb6Eolxvc;

void  l5qiDbJYjM () {
    int C2aeJdWcU;
    int cP6kHyEUzbtG;
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
    scanf ("%d%d", &I7eb6Eolxvc, &OSm0RV);
    {
        C2aeJdWcU = 2;
        while (C2aeJdWcU < (634 - 304)) {
            if (!sieve[C2aeJdWcU]) {
                cP6kHyEUzbtG = C2aeJdWcU;
                for (; C2aeJdWcU *cP6kHyEUzbtG < 100010;) {
                    sieve[C2aeJdWcU *cP6kHyEUzbtG] = (870 - 869);
                    cP6kHyEUzbtG = cP6kHyEUzbtG + 1;
                };
            }
            C2aeJdWcU = C2aeJdWcU +1;
        };
    };
}

int kdZ71m2JrPx (int x) {
    int PQzhta;
    int HU5ugXob6Q;
    PQzhta = x;
    HU5ugXob6Q = (574 - 574);
    while (PQzhta) {
        HU5ugXob6Q = HU5ugXob6Q *(268 - 258) + PQzhta % (896 - 886);
        PQzhta /= (731 - 721);
    }
    return HU5ugXob6Q == x;
}

void  FfTBYnHo () {
    int C2aeJdWcU;
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
    {
        C2aeJdWcU = I7eb6Eolxvc;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (C2aeJdWcU <= OSm0RV) {
            if (!sieve[C2aeJdWcU] && kdZ71m2JrPx (C2aeJdWcU)) {
                q[s8ytmZf++] = C2aeJdWcU;
            }
            C2aeJdWcU = C2aeJdWcU +1;
        };
    };
}

void  TJMy7miZ () {
    int C2aeJdWcU;
    {
        C2aeJdWcU = 945 - 945;
        while (C2aeJdWcU < s8ytmZf) {
            printf ("%d", q[C2aeJdWcU]);
            if (C2aeJdWcU < s8ytmZf - (655 - 654))
                putchar (',');
            C2aeJdWcU++;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    putchar ('\n');
    if (!s8ytmZf)
        printf ("no");
}

int main () {
    l5qiDbJYjM ();
    FfTBYnHo ();
    TJMy7miZ ();
    return 0;
}

