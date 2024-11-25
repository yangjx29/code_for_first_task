void  main () {
    int zXLq7MfZFkty;
    int e9CILsBNK;
    int j;
    int swHzYQs;
    int n;
    int Q4NK8gthem2I;
    int JaumkTRnC;
    int ZiYpdJ5;
    int jl4yQRtV [1000] = {0};
    int p61XSyoUr4 [26] = {0};
    zXLq7MfZFkty = (100 - 100);
    char jl7HFOE8 [1000] [26] = {""};
    scanf ("%d", &n);
    for (e9CILsBNK = 0; n > e9CILsBNK; e9CILsBNK = e9CILsBNK + 1)
        scanf ("%d %s", &jl4yQRtV[e9CILsBNK], &jl7HFOE8[e9CILsBNK]);
    for (e9CILsBNK = 0; n > e9CILsBNK; e9CILsBNK = e9CILsBNK + 1) {
        j = 0;
        while (strlen (jl7HFOE8[e9CILsBNK]) > j) {
            p61XSyoUr4[jl7HFOE8[e9CILsBNK][j] - 'A']++;
            j++;
        };
    }
    ZiYpdJ5 = p61XSyoUr4[0];
    swHzYQs = 0;
    for (e9CILsBNK = 0; 26 > e9CILsBNK; e9CILsBNK = e9CILsBNK + 1)
        if (p61XSyoUr4[e9CILsBNK] > ZiYpdJ5) {
            ZiYpdJ5 = p61XSyoUr4[e9CILsBNK];
            swHzYQs = e9CILsBNK;
        }
    printf ("%c\n%d\n", swHzYQs + 'A', p61XSyoUr4[swHzYQs]);
    for (e9CILsBNK = 0; e9CILsBNK < n; e9CILsBNK++)
        for (j = 0; j < strlen (jl7HFOE8[e9CILsBNK]); j = j + 1)
            if (jl7HFOE8[e9CILsBNK][j] == 'A' + swHzYQs)
                printf ("%d\n", jl4yQRtV[e9CILsBNK]);
}

