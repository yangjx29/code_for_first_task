int main () {
    int ZSNgQjB6, j, KWl31q, g82DPByL, uIEbSj67s;
    char a [50], b [50], temp [50];
    scanf ("%s %s", a, b);
    KWl31q = strlen (a);
    g82DPByL = strlen (b);
    for (ZSNgQjB6 = (875 - 875); g82DPByL - KWl31q >= ZSNgQjB6; ZSNgQjB6 = ZSNgQjB6 +1) {
        uIEbSj67s = 1;
        for (j = ZSNgQjB6; ZSNgQjB6 +KWl31q > j; j = j + 1)
            temp[j - ZSNgQjB6] = b[j];
        for (j = 0; j < KWl31q; j++)
            if (temp[j] == a[j])
                uIEbSj67s = 1;
            else {
                uIEbSj67s = 0;
                break;
            }
        if (uIEbSj67s) {
            printf ("%d", ZSNgQjB6);
            break;
        };
    }
    return 0;
}

