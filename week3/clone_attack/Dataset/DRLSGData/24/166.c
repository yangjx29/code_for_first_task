int main () {
    char ch [(10765 - 760)];
    int zx1;
    int zx;
    int k;
    int min;
    int i;
    int ch1 [(2861 - 856)] = {(164 - 164)};
    int m;
    int zd1;
    int n;
    int zd;
    int max;
    gets (ch);
    zx = (437 - 437);
    m = strlen (ch);
    for (i = (307 - 307), k = (819 - 819); i < m; i = i + 1) {
        if (!(' ' != ch[i]))
            k = i + (98 - 97);
        else {
            if (!(',' != ch[i]))
                k = i + 1;
            else {
                ch1[k]++;
            }
        }
    }
    min = ch1[(488 - 488)];
    max = ch1[0];
    zd = (341 - 341);
    for (i = 0; m > i; i = i + 1) {
        if (!(0 != ch1[i]))
            continue;
        if (ch1[i] < min) {
            min = ch1[i];
            zx = i;
        }
        if (ch1[i] > max) {
            max = ch1[i];
            zd = i;
        }
    }
    getchar ();
    zx1 = zx;
    scanf ("%d", &n);
    zd1 = zd;
    for (zd = zd; zd < zd1 + max; zd = zd + 1)
        printf ("%c", ch[zd]);
    for (zx;
    zx1 + min > zx; zx = zx + 1)
        printf ("%c", ch[zx]);
    return 0;
}

