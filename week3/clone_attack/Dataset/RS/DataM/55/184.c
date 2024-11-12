void  main () {
    char jzCRrmFiqUs [(152 - 122)] = {'\0'};
    char kvapmnSX98Bk;
    long  kDUTFfNdGX;
    kDUTFfNdGX = (442 - 442);
    int j1Agyx;
    int iFVTyOz;
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
    int dQEDyHwnrJz;
    int ApZs9quc;
    int wumPYAC1jOc;
    scanf ("%d%s%d", &ApZs9quc, jzCRrmFiqUs, &wumPYAC1jOc);
    dQEDyHwnrJz = strlen (jzCRrmFiqUs);
    for (j1Agyx = 0; dQEDyHwnrJz > j1Agyx; j1Agyx = j1Agyx + 1) {
        if ((iFVTyOz = islower (jzCRrmFiqUs[j1Agyx])) != 0)
            jzCRrmFiqUs[j1Agyx] = jzCRrmFiqUs[j1Agyx] - 'a' + 10;
        else if ((iFVTyOz = isupper (jzCRrmFiqUs[j1Agyx])) != 0)
            jzCRrmFiqUs[j1Agyx] = jzCRrmFiqUs[j1Agyx] - 'A' + 10;
        else
            jzCRrmFiqUs[j1Agyx] = jzCRrmFiqUs[j1Agyx] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        kDUTFfNdGX = kDUTFfNdGX + jzCRrmFiqUs[j1Agyx] * (int) (pow (ApZs9quc, dQEDyHwnrJz - j1Agyx - (282 - 281)));
    }
    if (!(0 != kDUTFfNdGX))
        putchar ('0');
    else {
        puts (jzCRrmFiqUs);
        for (j1Agyx = 0; j1Agyx < 30; j1Agyx = j1Agyx + 1)
            jzCRrmFiqUs[j1Agyx] = '\0';
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
        for (j1Agyx = 0; kDUTFfNdGX != 0; j1Agyx = j1Agyx + 1) {
            iFVTyOz = kDUTFfNdGX % wumPYAC1jOc;
            kDUTFfNdGX = kDUTFfNdGX / wumPYAC1jOc;
            if (iFVTyOz < 10)
                jzCRrmFiqUs[j1Agyx] = iFVTyOz + (422 - 374);
            else
                jzCRrmFiqUs[j1Agyx] = iFVTyOz - 10 + 'A';
        }
        dQEDyHwnrJz = strlen (jzCRrmFiqUs);
        for (j1Agyx = 0; j1Agyx <= dQEDyHwnrJz / 2 - 1; j1Agyx++) {
            kvapmnSX98Bk = jzCRrmFiqUs[j1Agyx];
            jzCRrmFiqUs[j1Agyx] = jzCRrmFiqUs[dQEDyHwnrJz - j1Agyx - 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            jzCRrmFiqUs[dQEDyHwnrJz - j1Agyx - 1] = kvapmnSX98Bk;
        };
    };
}

