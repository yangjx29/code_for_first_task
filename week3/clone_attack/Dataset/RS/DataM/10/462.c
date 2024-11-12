main () {
    int ntyveFKRrVi;
    int d;
    int f;
    int a [(152 - 127)];
    int LQhvLwOK61X [(166 - 141)];
    int kYPz5u;
    int lVF4gY3nh [(433 - 408)];
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
    char qECtKI;
    scanf ("%d", &kYPz5u);
    lVF4gY3nh[(924 - 924)] = (947 - 946);
    for (ntyveFKRrVi = (562 - 562);; ntyveFKRrVi++) {
        scanf ("%d%c", &a[ntyveFKRrVi], &qECtKI);
        if (qECtKI != ' ')
            break;
        else
            ;
    }
    {
        ntyveFKRrVi = 10 - 10;
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
        while (kYPz5u - (568 - 567) >= ntyveFKRrVi) {
            LQhvLwOK61X[ntyveFKRrVi] = a[kYPz5u - (166 - 165) - ntyveFKRrVi];
            ntyveFKRrVi++;
        };
    }
    for (ntyveFKRrVi = (966 - 965); kYPz5u - (601 - 600) >= ntyveFKRrVi; ntyveFKRrVi++) {
        for (d = (804 - 804), lVF4gY3nh[ntyveFKRrVi] = (991 - 991); ntyveFKRrVi - 1 >= d; d++) {
            if (LQhvLwOK61X[ntyveFKRrVi] >= LQhvLwOK61X[d] && lVF4gY3nh[ntyveFKRrVi] <= lVF4gY3nh[d])
                lVF4gY3nh[ntyveFKRrVi] = lVF4gY3nh[d];
            else
                ;
        }
        lVF4gY3nh[ntyveFKRrVi]++;
    }
    {
        f = 0;
        ntyveFKRrVi = 0;
        while (ntyveFKRrVi <= kYPz5u - 1) {
            if (f <= lVF4gY3nh[ntyveFKRrVi])
                f = lVF4gY3nh[ntyveFKRrVi];
            else
                ;
            ntyveFKRrVi++;
        };
    }
    printf ("%d", f);
}

