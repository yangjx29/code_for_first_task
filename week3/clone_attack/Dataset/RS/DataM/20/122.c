int Lq9c3sx8 (char a []) {
    int b;
    int i;
    int l;
    int l0;
    b = (811 - 811);
    l = strlen (a);
    for (i = (405 - 405); i < l; i = i + 1) {
        if (a[i] > b) {
            b = a[i];
            l0 = i;
        };
    }
    return (l0);
}

void  main () {
    int j;
    int i;
    int l;
    int l0;
    char s1 [(496 - 485)];
    char s2 [(961 - 957)];
    char WVjUOikXd49g [(325 - 311)];
    while (!(EOF == scanf ("%s%s", s1, s2))) {
        l = strlen (s1);
        l0 = Lq9c3sx8 (s1);
        {
            i = 168 - 168;
            while (i <= l0) {
                WVjUOikXd49g[i] = s1[i];
                i = i + 1;
            };
        }
        {
            i = 573 - 572;
            j = 932 - 932;
            while (j < (613 - 610)) {
                WVjUOikXd49g[i] = s2[j];
                i = i + 1;
                j = j + 1;
            };
        }
        {
            i = 809 - 805;
            j = 161 - 160;
            while (j <= l) {
                WVjUOikXd49g[i] = s1[j];
                i = i + 1;
                j++;
            };
        }
        printf ("%s\n", WVjUOikXd49g);
    };
}

