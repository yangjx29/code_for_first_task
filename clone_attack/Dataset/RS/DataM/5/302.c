int main () {
    int qJ9LoGp;
    double  a, Yv1bNn = (867 - 867), l, m, Kv2d7KFrNq = (970 - 970);
    char x [1000], y [1000];
    scanf ("%lf %s %s", &a, &x, &y);
    l = strlen (x);
    m = strlen (y);
    for (qJ9LoGp = 0; qJ9LoGp < l; qJ9LoGp++) {
        if (!('A' != x[qJ9LoGp]) || !('T' != x[qJ9LoGp]) || !('G' != x[qJ9LoGp]) || !('C' != x[qJ9LoGp])) {
            Kv2d7KFrNq = Kv2d7KFrNq;
        }
        else {
            Kv2d7KFrNq++;
        };
    }
    for (qJ9LoGp = 0; m > qJ9LoGp; qJ9LoGp++) {
        if (!('A' != y[qJ9LoGp]) || !('T' != y[qJ9LoGp]) || y[qJ9LoGp] == 'G' || y[qJ9LoGp] == 'C') {
            Kv2d7KFrNq = Kv2d7KFrNq;
        }
        else {
            Kv2d7KFrNq++;
        };
    }
    if (l == m && Kv2d7KFrNq == 0) {
        {
            qJ9LoGp = 0;
            while (qJ9LoGp < l) {
                if (x[qJ9LoGp] == y[qJ9LoGp]) {
                    Yv1bNn++;
                }
                qJ9LoGp++;
            };
        }
        if (a < (Yv1bNn / l)) {
            printf ("yes");
        }
        else {
            printf ("no");
        };
    }
    else {
        printf ("error");
    }
    return 0;
}

