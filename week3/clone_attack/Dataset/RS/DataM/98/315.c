int main () {
    char yE5Xj4R [100];
    int n;
    int DCwxrtiFD;
    int j;
    int l;
    int k;
    k = 0;
    scanf ("%d", &n);
    {
        DCwxrtiFD = 1;
        while (n >= DCwxrtiFD) {
            scanf ("%s", yE5Xj4R);
            l = strlen (yE5Xj4R);
            if (k == 0) {
                k = l;
                printf ("%s", yE5Xj4R);
                continue;
            }
            if (k + l < 80) {
                k = k + l + 1;
                printf (" %s", yE5Xj4R);
                continue;
            }
            if (k + l >= 80) {
                k = l;
                printf ("\n%s", yE5Xj4R);
                continue;
            }
            DCwxrtiFD++;
        };
    }
    return 0;
}

