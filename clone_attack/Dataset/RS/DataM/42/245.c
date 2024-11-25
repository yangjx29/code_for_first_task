void  main () {
    int a [100000];
    int MVMeOtq;
    int icajvMAN;
    int yL3WMhNSPp;
    int G5iF6Qax4P;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &icajvMAN);
    {
        MVMeOtq = 0;
        while (MVMeOtq < icajvMAN) {
            scanf ("%d", &a[MVMeOtq]);
            MVMeOtq = MVMeOtq +1;
        };
    }
    scanf ("%d", &yL3WMhNSPp);
    for (G5iF6Qax4P = 0, MVMeOtq = 0; MVMeOtq < icajvMAN - G5iF6Qax4P;) {
        if (a[MVMeOtq] == yL3WMhNSPp) {
            G5iF6Qax4P = G5iF6Qax4P +1;
            {
                j = MVMeOtq;
                while (j < icajvMAN - G5iF6Qax4P -(589 - 588)) {
                    a[j] = a[j + 1];
                    j = j + 1;
                };
            };
        }
        else
            MVMeOtq = MVMeOtq +1;
    }
    {
        MVMeOtq = 0;
        while (MVMeOtq < icajvMAN - G5iF6Qax4P -1) {
            printf ("%d ", a[MVMeOtq]);
            MVMeOtq = MVMeOtq +1;
        };
    }
    printf ("%d", a[icajvMAN - G5iF6Qax4P -1]);
}

