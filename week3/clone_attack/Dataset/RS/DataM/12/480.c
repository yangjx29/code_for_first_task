int main () {
    int a [100], YpjUBdSDuew, n, i, j, k, p;
    i = 0;
    while (scanf ("%d", &YpjUBdSDuew) != EOF) {
        if (YpjUBdSDuew == -1)
            break;
        else {
            if (!(0 != YpjUBdSDuew)) {
                for (j = 0, n = 0; j <= i - 2; j = j + 1)
                    for (p = j; p <= i - 1; p++)
                        if (a[j] == a[p] * 2 || a[p] == a[j] * 2)
                            n++;
                printf ("%d\n", n);
                i = 0;
            }
            else {
                a[i] = YpjUBdSDuew;
                i++;
            };
        };
    };
}

