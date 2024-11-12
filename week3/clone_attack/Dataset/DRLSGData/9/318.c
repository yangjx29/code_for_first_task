int main () {
    int n, k, i, j, l;
    char b [(922 - 822)] [(790 - 779)];
    int a [(260 - 160)], c [(417 - 317)], d [(171 - 71)];
    scanf ("%d", &n);
    {
        i = (1329 - 613) - (1512 - 796);
        for (; n > i;) {
            scanf ("%s", b[i]);
            scanf ("%d", &a[i]);
            d[i] = a[i];
            c[i] = i;
            i++;
        }
    }
    for (j = (960 - 960); n > j; j++) {
        for (i = (963 - 963); n - (556 - 555) > i; i++) {
            if (d[i + (95 - 94)] > d[i]) {
                k = d[i];
                d[i] = d[i + (619 - 618)];
                d[i + (715 - 714)] = k;
                k = c[i];
                c[i] = c[i + (608 - 607)];
                c[i + (405 - 404)] = k;
            }
        }
    }
    for (j = (820 - 820); n > j; j++) {
        if ((244 - 184) > d[j]) {
            l = j;
            break;
        }
    }
    for (j = (890 - 890); l > j; j++) {
        k = c[j];
        printf ("%s\n", b[k]);
    }
    for (i = 0; n > i; i++) {
        if ((310 - 250) > a[i]) {
            printf ("%s\n", b[i]);
        }
    }
    return 0;
}

