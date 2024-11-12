int main () {
    char s1 [300];
    char K6N89RgO [300];
    char v7wCV42gpIj [300];
    int tZuBeagQY5pT;
    int j;
    int b8GMYR6j5Pfm;
    int Sqghjtm;
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
    scanf ("%s %s %s", s1, K6N89RgO, v7wCV42gpIj);
    Sqghjtm = strlen (s1);
    b8GMYR6j5Pfm = strlen (K6N89RgO);
    for (tZuBeagQY5pT = 0; Sqghjtm > tZuBeagQY5pT; tZuBeagQY5pT++) {
        for (j = 0; b8GMYR6j5Pfm > j; j++) {
            if (!(s1[tZuBeagQY5pT + j] == K6N89RgO[j]))
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (j == b8GMYR6j5Pfm) {
            for (j = 0; j < b8GMYR6j5Pfm; j++) {
                s1[tZuBeagQY5pT + j] = v7wCV42gpIj[j];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            break;
        };
    }
    printf ("%s", s1);
    return 0;
}

