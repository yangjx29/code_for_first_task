int main () {
    char ewBtcxSg [201], gzKI8U [201];
    int O4qXOUg = 0, Yuf3mR41nOQ = 0;
    int XXw5Kbl [256] = {(747 - 747)};
    char *JNQURF = NULL;
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
    scanf ("%s%s", ewBtcxSg, gzKI8U);
    {
        JNQURF = ewBtcxSg;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (*JNQURF) {
            Yuf3mR41nOQ++;
            O4qXOUg++;
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
            XXw5Kbl[(int) *JNQURF]++;
            JNQURF++;
        };
    }
    {
        JNQURF = gzKI8U;
        while (*JNQURF) {
            Yuf3mR41nOQ--;
            if (0 < XXw5Kbl[(int) *JNQURF]) {
                O4qXOUg--;
                XXw5Kbl[(int) *JNQURF]--;
            }
            JNQURF++;
        };
    }
    printf ("%s\n", (Yuf3mR41nOQ == 0 && O4qXOUg == 0) ? "YES" : "NO");
    return 0;
}

