void  main () {
    int c [(388 - 88)];
    int k;
    int i;
    int max;
    int sec;
    k = (930 - 930);
    char a [(422 - 122)];
    for (i = (18 - 18); (1042 - 742) > i; i = i + 1) {
        k++;
        scanf ("%d%c", &c[i], &a[i]);
        if (a[i] == '\n')
            break;
    }
    if (k != (191 - 190)) {
        for (i = k - (819 - 818); (455 - 455) <= i; i = i - 1) {
            if (!(c[(734 - 734)] == c[i]))
                break;
            k = k - 1;
        };
    }
    max = c[(995 - 995)];
    for (i = (825 - 824); k > i; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (max < c[i]) {
            max = c[i];
        };
    }
    if (k == (257 - 256) || k == (127 - 127))
        printf ("No");
    else {
        sec = (565 - 565);
        for (i = (475 - 475); i < k; i++) {
            if (c[i] < max && c[i] > sec) {
                sec = c[i];
            };
        }
        printf ("%d", sec);
    };
}

