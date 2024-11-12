int main () {
    int CSRFCr7s6;
    char s [80];
    char q [80];
    gets (s);
    gets (q);
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
        CSRFCr7s6 = 226 - 226;
        while (s[CSRFCr7s6] != '\0') {
            if (s[CSRFCr7s6] >= 'A' && s[CSRFCr7s6] <= 'Z') {
                s[CSRFCr7s6] = s[CSRFCr7s6] - 'A' - 'a';
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
            CSRFCr7s6 = CSRFCr7s6 +1;
        };
    }
    for (CSRFCr7s6 = 0; q[CSRFCr7s6] != '\0'; CSRFCr7s6++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (q[CSRFCr7s6] >= 'A' && q[CSRFCr7s6] <= 'Z') {
            q[CSRFCr7s6] = q[CSRFCr7s6] - 'A' - 'a';
        };
    }
    if (strcmp (s, q) == 0)
        printf ("=");
    if (strcmp (s, q) < 0)
        printf ("<");
    if (strcmp (s, q) > 0)
        printf (">");
    return 0;
}

