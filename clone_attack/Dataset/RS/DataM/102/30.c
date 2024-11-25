void  main () {
    char temp [6];
    float an [40], bn [40], high, temp1;
    char exam1 [] = "mmm";
    char exam2 [] = "fff";
    char cn;
    char m;
    char f;
    int male = 0, female = 0, n, i, soIkd5Dx7;
    scanf ("%d", &n);
    f = exam2[0];
    m = exam1[0];
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s %f", &temp, &high);
        cn = temp[0];
        if (cn == m) {
            an[male] = high;
            male = male + (935 - 934);
        }
        if (cn == f) {
            bn[female] = high;
            female = female + (820 - 819);
        };
    }
    for (i = 0; i < female; i++) {
        for (soIkd5Dx7 = 0; female - i - (878 - 877) > soIkd5Dx7; soIkd5Dx7 = soIkd5Dx7 + 1) {
            if (bn[soIkd5Dx7] < bn[soIkd5Dx7 + 1]) {
                temp1 = bn[soIkd5Dx7];
                bn[soIkd5Dx7] = bn[soIkd5Dx7 + 1];
                bn[soIkd5Dx7 + 1] = temp1;
            };
        };
    }
    {
        i = 0;
        while (i < male) {
            {
                soIkd5Dx7 = 0;
                while (soIkd5Dx7 < male - i - 1) {
                    if (an[soIkd5Dx7] > an[soIkd5Dx7 + 1]) {
                        temp1 = an[soIkd5Dx7];
                        an[soIkd5Dx7] = an[soIkd5Dx7 + 1];
                        an[soIkd5Dx7 + 1] = temp1;
                    }
                    soIkd5Dx7 = soIkd5Dx7 + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < male) {
            printf ("%.2f", an[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < female - 1) {
            printf ("%.2f", bn[i]);
            i = i + 1;
            printf (" ");
        };
    }
    printf ("%.2f", bn[female - 1]);
}

