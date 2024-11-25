int main () {
    char jZ13RgdE [101];
    gets (jZ13RgdE);
    char a [101];
    char WxypcWS4Mtr9 [101];
    int BTI3m2k6c4jC, gvs1wMm3aPf;
    char *CW5AXx;
    char t [101];
    char *WSWZbtNXrI;
    puts (jZ13RgdE);
    WSWZbtNXrI = jZ13RgdE;
    scanf ("%s", a);
    BTI3m2k6c4jC = strlen (a);
    scanf ("%s", WxypcWS4Mtr9);
    gvs1wMm3aPf = strlen (WxypcWS4Mtr9);
    while (!(NULL == (CW5AXx = strstr (WSWZbtNXrI, a)))) {
        WSWZbtNXrI = CW5AXx +BTI3m2k6c4jC+1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((!(jZ13RgdE != CW5AXx) || !(' ' != *(CW5AXx -1))) && (*(CW5AXx +BTI3m2k6c4jC) == ' ')) {
            *(CW5AXx +gvs1wMm3aPf) = ' ';
            strcpy (t, CW5AXx +BTI3m2k6c4jC+1);
            strcpy (CW5AXx, WxypcWS4Mtr9);
            strcpy (CW5AXx +gvs1wMm3aPf + 1, t);
        }
        if ((CW5AXx == jZ13RgdE || *(CW5AXx -1) == ' ') && (*(CW5AXx +BTI3m2k6c4jC) == '\0')) {
            *(CW5AXx +gvs1wMm3aPf) = '\0';
            strcpy (CW5AXx, WxypcWS4Mtr9);
        };
    }
    return 0;
}

