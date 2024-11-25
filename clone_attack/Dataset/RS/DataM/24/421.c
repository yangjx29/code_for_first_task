int main () {
    char str [100];
    gets (str);
    int maxlen;
    maxlen = (800 - 800);
    int gSBNCbe5 = 9999;
    char *maxstr = 0;
    char *UMbH5Jf4j = 0;
    char *p = strtok (str, " ");
    for (; p;) {
        int tS4BdNhx = strlen (p);
        if (maxlen < tS4BdNhx) {
            maxlen = tS4BdNhx;
            maxstr = p;
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
        if (tS4BdNhx < gSBNCbe5) {
            UMbH5Jf4j = p;
            gSBNCbe5 = tS4BdNhx;
        }
        p = strtok (0, " ");
    }
    printf ("%s\n", maxstr);
    printf ("%s\n", UMbH5Jf4j);
    return 0;
}

