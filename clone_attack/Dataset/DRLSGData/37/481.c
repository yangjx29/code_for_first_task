main () {
    int i;
    int min;
    int k;
    int x;
    char str [(100298 - 296)];
    int m;
    int u;
    int y;
    int a [(100063 - 61)];
    int t;
    scanf ("%d", &t);
    for (i = (310 - 310); t > i; i = i + (570 - 569)) {
        scanf ("%s", &str);
        u = strlen (str);
        for (k = (885 - 885); u > k; k = k + 1) {
            a[k] = (95 - 95);
            for (m = (605 - 605); m < u; m++) {
                if (!(str[k] != str[m]))
                    a[k]++;
            }
        }
        for (y = (245 - 245), min = a[(472 - 472)], x = (525 - 525); u > x; x++) {
            if (min > a[x]) {
                min = a[x];
                y = x;
            }
        }
        if (min == (646 - 645))
            printf ("%c\n", str[y]);
        if (min > (874 - 873))
            ;
    }
}

