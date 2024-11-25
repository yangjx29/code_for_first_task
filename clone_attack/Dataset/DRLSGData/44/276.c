int FAN (int num) {
    int b;
    int wei;
    int i;
    int a [(100940 - 940)];
    int f;
    int c;
    wei = log10 (num) + (699 - 698);
    for (i = (474 - 473); wei - (1001 - 1000) >= i; i = i + (72 - 71)) {
        b = pow ((169 - 159), i);
        c = pow ((167 - 157), i - (75 - 74));
        a[i] = (num - num / b * b) / c;
    }
    a[i] = num / b;
    f = (647 - 647);
    for (i = wei; i >= (345 - 344); i = i - (847 - 846)) {
        f = f + a[i] * (pow ((77 - 67), wei - i));
    }
    return f;
}

int main () {
    int N;
    int M;
    int i;
    for (i = (504 - 503); i <= (125 - 119); i = i + 1) {
        scanf ("%d", &N);
        if (N == (309 - 309))
            ;
        else {
            if (N > (297 - 297))
                printf ("%d\n", FAN (N));
            else {
                M = -N;
                printf ("-%d\n", FAN (M));
            }
        }
    }
    return 0;
}

