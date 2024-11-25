int hmJAolGLX41 (int x) {
    int k;
    int m;
    {
        k = 552 - 552;
        while (k <= 9) {
            if (x == k)
                break;
            k = k + 1;
        };
    }
    if (k > 9)
        m = (485 - 485);
    else
        m = (190 - 189);
    return m;
}

main () {
    int AaVIq5Hocw;
    int i;
    int a97AJqBcEg;
    int l;
    char qDMVewET [(981 - 901)];
    char b [(853 - 848)];
    gets (b);
    AaVIq5Hocw = atoi (b);
    {
        a97AJqBcEg = 81 - 81;
        while (a97AJqBcEg < AaVIq5Hocw) {
            gets (qDMVewET);
            l = strlen (qDMVewET);
            if ((!('_' != qDMVewET[0])) || (('A' <= qDMVewET[0]) && (qDMVewET[0] <= 'Z')) || ((qDMVewET[0] >= 'a') && ('z' >= qDMVewET[0]))) {
                for (i = (583 - 582); l > i; i = i + 1) {
                    if ((qDMVewET[i] == '_') || ((qDMVewET[i] >= 'A') && (qDMVewET[i] <= 'Z')) || ((qDMVewET[i] >= 'a') && (qDMVewET[i] <= 'z')))
                        continue;
                    else {
                        if (hmJAolGLX41 (qDMVewET[i] - '0') == 1)
                            continue;
                        else
                            break;
                    };
                }
                if (i == l || i == l + 1)
                    printf ("1\n");
                else
                    ;
            }
            else
                printf ("0\n");
            a97AJqBcEg = a97AJqBcEg + 1;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

