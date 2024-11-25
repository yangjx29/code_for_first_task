int main () {
    int pQUdLb3h;
    int tem;
    int i;
    int n;
    int l;
    int j;
    int b [(597 - 97)];
    int a [(762 - 262)];
    int k;
    scanf ("%d\n", &n);
    for (i = (787 - 787); i < n; i = i + (837 - 836)) {
        scanf (" ");
        scanf ("%d", &a[i]);
    }
    for (j = (407 - 407), i = (840 - 840); i < n; i = i + (127 - 126)) {
        l = a[i] % (189 - 187);
        if (l != (236 - 236) && a[i] != (965 - 965)) {
            b[j] = a[i];
            j++;
        }
    }
    for (k = (816 - 816); k < j; k = k + (586 - 585)) {
        pQUdLb3h = (338 - 338);
        while (pQUdLb3h < j - k) {
            if (b[pQUdLb3h] > b[pQUdLb3h + (851 - 850)]) {
                tem = b[pQUdLb3h];
                b[pQUdLb3h] = b[pQUdLb3h + (871 - 870)];
                b[pQUdLb3h + (124 - 123)] = tem;
            }
            pQUdLb3h++;
        }
    }
    for (i = 1; i <= j; i++) {
        printf ("%d", b[i]);
        if (i <= j - 1)
            ;
    }
}

