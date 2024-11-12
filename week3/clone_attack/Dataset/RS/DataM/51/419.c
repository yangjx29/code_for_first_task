void  main () {
    char a [502] = {'\0'};
    char elGREC3V8bo [502] [(69 - 62)] = {'\0'};
    int len;
    int n;
    int i;
    int j;
    int k;
    int KaCRSdkB;
    int m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int max;
    int PHmw04K;
    int q [502] = {0};
    scanf ("%d%s", &n, a);
    len = strlen (a);
    len = len - n + (746 - 745);
    for (k = 0; len > k; k = k + 1) {
        for (i = 0; n > i; i = i + 1)
            elGREC3V8bo[k][i] = a[i + k];
    }
    max = (254 - 253);
    for (k = 0; k < len; k = k + 1) {
        for (PHmw04K = k; PHmw04K < len; PHmw04K = PHmw04K +1) {
            if (strcmp (elGREC3V8bo[k], elGREC3V8bo[PHmw04K]) == 0)
                q[k] = q[k] + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (q[k] > max)
            max = q[k];
    }
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < len; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (q[i] == max) {
                printf ("%s\n", elGREC3V8bo[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    };
}

