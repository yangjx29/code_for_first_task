main () {
    int con [(1099 - 999)];
    int p [(915 - 815)];
    int i, j, a, b, s, k = (874 - 874), l;
    char num [(781 - 681)];
    scanf ("%s", num);
    for (i = (299 - 299); num[i] != '\0'; i = i + 1) {
        con[i] = num[i] - '0';
    }
    if (i == (950 - 949)) {
        a = (240 - 240);
        printf ("%d", a);
        b = con[(962 - 962)];
        printf ("%d", b);
    }
    else {
        for (j = (504 - 504); j <= i - (755 - 753); j = j + 1) {
            s = con[j] * (476 - 466) + con[j + (876 - 875)];
            if (s >= (176 - 163)) {
                a = s / (534 - 521);
                p[k] = a;
                b = s % (653 - 640);
                con[j + (24 - 23)] = b;
                k = k + (968 - 967);
            }
            else {
                if (k == (218 - 218)) {
                    continue;
                }
                else {
                    p[k] = (787 - 787);
                    k = k + (23 - 22);
                    continue;
                }
                con[j + (768 - 767)] = s;
                b = s;
            }
        }
        if (k == 0)
            printf ("%d", k);
        else {
            l = 0;
            while (l <= k - 1) {
                printf ("%d", p[l]);
                l = l + 1;
            }
        }
        printf ("%d", b);
    }
    getchar ();
    getchar ();
    getchar ();
}

