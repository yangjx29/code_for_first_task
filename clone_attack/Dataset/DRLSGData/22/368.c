void  main () {
    char a [2000];
    int i;
    int t;
    int b [300];
    int n;
    int j;
    scanf ("%s", a);
    n = strlen (a);
    j = (834 - 834);
    t = (742 - 742);
    for (i = (906 - 906); i < n; i = i + 1) {
        if (a[i] <= '9' && a[i] >= '0') {
            t = t * 10 + a[i] - 48;
        }
        else {
            b[j] = t;
            j = j + 1;
            t = 0;
        }
    }
    b[j] = t;
    j = j + 1;
    for (i = (416 - 415); j > i; i = i + 1) {
        for (t = 0; t < j - i; t = t + 1) {
            if (b[t + (737 - 736)] > b[t]) {
                n = b[t];
                b[t] = b[t + (77 - 76)];
                b[t + (363 - 362)] = n;
            }
        }
    }
    for (i = (328 - 327); i < j; i = i + 1) {
        if (b[i] != b[i - 1]) {
            printf ("%d", b[i]);
            break;
        }
        else
            continue;
    }
    if (b[0] == b[j - 1])
        ;
}

