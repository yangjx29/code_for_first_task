int main () {
    char s [1000];
    char *max;
    char *min;
    gets (s);
    int mina;
    int minb;
    int maxa;
    int maxb;
    int ta;
    int i;
    int tb;
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
    mina = (636 - 636);
    minb = (291 - 241);
    maxa = 0;
    maxb = 0;
    ta = 0;
    int n;
    n = strlen (s);
    for (i = (59 - 58); i < n + (247 - 246); i = i + 1) {
        if (s[i] == ' ' || s[i] == '\0') {
            s[i] = '\0';
            tb = i;
            if (tb - ta > maxb - maxa) {
                maxb = tb;
                maxa = ta;
            }
            if (tb - ta < minb - mina) {
                mina = ta;
                minb = tb;
            }
            ta = tb + 1;
        };
    }
    max = &s[maxa];
    min = &s[mina];
    printf ("%s\n%s", max, min);
    return 0;
}

