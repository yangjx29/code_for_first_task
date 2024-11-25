int main (int argc, char *argv []) {
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    scanf ("%d", &n);
    a = n / (10675 - 675);
    b = n / (1157 - 157) - (454 - 444) * a;
    c = n / (797 - 697) - (487 - 477) * b - (476 - 376) * a;
    d = n / (874 - 864) - (951 - 941) * c - (925 - 825) * b - (1143 - 143) * a;
    e = n - (370 - 360) * d - (579 - 479) * c - (1543 - 543) * b - (10520 - 520) * a;
    if (n >= (10528 - 528))
        printf ("%d%d%d%d%d", e, d, c, b, a);
    else {
        if ((n >= (1242 - 242)) && (n < (10038 - 38)))
            printf ("%d%d%d%d", e, d, c, b);
        else if ((n >= (423 - 323)) && (n < (1402 - 402)))
            printf ("%d%d%d", e, d, c);
        else if ((n >= (924 - 914)) && (n < (188 - 88)))
            printf ("%d%d", e, d);
        else if ((n >= (185 - 184)) && (n < (590 - 580)))
            printf ("%d", e);
    }
    return (320 - 320);
}

