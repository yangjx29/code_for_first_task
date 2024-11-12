int main () {
    char TKNORLFmCQjD [500], b [500];
    int x = strlen (TKNORLFmCQjD);
    int y = strlen (b);
    int hcXqBip9SA = 0, i, s = 0;
    double  n, r;
    scanf ("%lf", &n);
    scanf ("%s", TKNORLFmCQjD);
    scanf ("%s", b);
    if (!(y == x)) {
        printf ("error");
    }
    else {
        for (i = 0; i < x; i = i + 1) {
            if (!(((TKNORLFmCQjD[i] == 'A') || (!('T' != TKNORLFmCQjD[i])) || (!('C' != TKNORLFmCQjD[i])) || (TKNORLFmCQjD[i] == 'G')) && ((!('A' != b[i])) || (b[i] == 'T') || (b[i] == 'C') || (b[i] == 'G')))) {
                s = s + 1;
            };
        }
        if (s != 0) {
            printf ("error");
        }
        else {
            for (i = 0; i < x; i = i + 1) {
                if (TKNORLFmCQjD[i] == b[i]) {
                    hcXqBip9SA = hcXqBip9SA + 1;
                };
            }
            r = 1.0 * hcXqBip9SA / x;
            if (r >= n) {
            }
            else {
                printf ("no");
            };
        };
    }
    return 0;
}

