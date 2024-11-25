main () {
    int n, tOYMUnsk, k, qkVRlnw;
    struct   jifen {
        int xue;
        int sV4gSp6ew;
        float sai6yIu;
    }
    d0uBxUbscfv1 [(847 - 837)];
    float j;
    scanf ("%d", &n);
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
    for (tOYMUnsk = 0; tOYMUnsk <= n - 1; tOYMUnsk = tOYMUnsk + 1)
        scanf ("%d", &d0uBxUbscfv1[tOYMUnsk].xue);
    for (tOYMUnsk = 0, j = 0, qkVRlnw = 0; tOYMUnsk <= n - 1; tOYMUnsk++) {
        scanf ("%d", &d0uBxUbscfv1[tOYMUnsk].sV4gSp6ew);
        k = d0uBxUbscfv1[tOYMUnsk].sV4gSp6ew;
        if (k >= 90 && k <= 100)
            d0uBxUbscfv1[tOYMUnsk].sai6yIu = 4;
        else {
            if (k >= 85 && k <= (301 - 212))
                d0uBxUbscfv1[tOYMUnsk].sai6yIu = 3.7;
            else {
                if (k >= 82 && k <= 84)
                    d0uBxUbscfv1[tOYMUnsk].sai6yIu = 3.3;
                else {
                    if (k >= 78 && k <= 81)
                        d0uBxUbscfv1[tOYMUnsk].sai6yIu = 3.0;
                    else {
                        if (k >= 75 && k <= 77)
                            d0uBxUbscfv1[tOYMUnsk].sai6yIu = 2.7;
                        else if (k >= 72 && k <= 74)
                            d0uBxUbscfv1[tOYMUnsk].sai6yIu = 2.3;
                        else if (k >= 68 && k <= 71)
                            d0uBxUbscfv1[tOYMUnsk].sai6yIu = 2.0;
                        else if (k >= 64 && k <= 67)
                            d0uBxUbscfv1[tOYMUnsk].sai6yIu = 1.5;
                        else if (k >= 60 && k <= 63)
                            d0uBxUbscfv1[tOYMUnsk].sai6yIu = 1.0;
                        else if (k < 60)
                            d0uBxUbscfv1[tOYMUnsk].sai6yIu = 0;
                    };
                };
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        j = j + d0uBxUbscfv1[tOYMUnsk].sai6yIu * d0uBxUbscfv1[tOYMUnsk].xue;
        qkVRlnw = qkVRlnw + d0uBxUbscfv1[tOYMUnsk].xue;
    }
    printf ("%.2f", j / qkVRlnw);
    return 0;
}

