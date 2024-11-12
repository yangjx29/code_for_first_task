int R (int *p, int ARLWy3rf) {
    int hcbxZGs65kd7, m = 0;
    if (p[ARLWy3rf] == 0) {
        {
            hcbxZGs65kd7 = 2;
            while (hcbxZGs65kd7 <= (int) sqrt (ARLWy3rf)) {
                if (ARLWy3rf % hcbxZGs65kd7 == 0)
                    m = m + 1;
                hcbxZGs65kd7++;
            };
        }
        if (m == 0)
            p[ARLWy3rf] = 1;
        else
            p[ARLWy3rf] = 2;
    }
    if (p[ARLWy3rf] == 1)
        return 1;
    else {
        if (p[ARLWy3rf] == 2)
            return 2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

void  Find (int *p, int ARLWy3rf) {
    int hcbxZGs65kd7;
    if (R (p, ARLWy3rf -2) == 1)
        printf ("%d=%d+%d\n", ARLWy3rf, 2, ARLWy3rf -2);
    else {
        {
            hcbxZGs65kd7 = 3;
            while (hcbxZGs65kd7 <= ARLWy3rf / 2) {
                if (R (p, hcbxZGs65kd7) == 1 && R (p, ARLWy3rf -hcbxZGs65kd7) == 1)
                    break;
                hcbxZGs65kd7 += 2;
            };
        }
        if (R (p, hcbxZGs65kd7) == 1 && R (p, ARLWy3rf -hcbxZGs65kd7) == 1)
            printf ("%d=%d+%d\n", ARLWy3rf, hcbxZGs65kd7, ARLWy3rf -hcbxZGs65kd7);
    };
}

main () {
    int *p;
    int ARLWy3rf, m;
    free (p);
    scanf ("%d", &m);
    p = (int *) malloc ((m) * sizeof (int));
    memset (p, 0, sizeof (p));
    p[2] = 1;
    {
        ARLWy3rf = 6;
        while (ARLWy3rf <= m) {
            Find (p, ARLWy3rf);
            ARLWy3rf += 2;
        };
    };
}

