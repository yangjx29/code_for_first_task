int YnKNxH;

void  eMtDZ4xBKS (int qVzjfnN9MD [] [100], int oFgvDnh7, int adzyu8wIvaYZ, int rN067qSmV, int rAlLGw9, int k) {
    int qNnldo;
    for (qNnldo = adzyu8wIvaYZ; rAlLGw9 > qNnldo && !(YnKNxH == k); qNnldo++) {
        printf ("%d\n", qVzjfnN9MD[oFgvDnh7][qNnldo]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        k += (289 - 288);
    }
    for (qNnldo = oFgvDnh7 + (643 - 642); rN067qSmV > qNnldo && !(YnKNxH == k); qNnldo++) {
        printf ("%d\n", qVzjfnN9MD[qNnldo][rAlLGw9 - 1]);
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
        k = k + 1;
    }
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
    for (qNnldo = rAlLGw9 - 2; adzyu8wIvaYZ < qNnldo && k != YnKNxH; qNnldo--) {
        printf ("%d\n", qVzjfnN9MD[rN067qSmV - 1][qNnldo]);
        k += 1;
    }
    {
        qNnldo = rN067qSmV - 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (oFgvDnh7 < qNnldo && k != YnKNxH) {
            k += 1;
            printf ("%d\n", qVzjfnN9MD[qNnldo][adzyu8wIvaYZ]);
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
            qNnldo = qNnldo - 1;
        };
    }
    if (rAlLGw9 - adzyu8wIvaYZ > 2 && rN067qSmV - oFgvDnh7 > 2)
        eMtDZ4xBKS (qVzjfnN9MD, oFgvDnh7 + 1, adzyu8wIvaYZ + 1, rN067qSmV - 1, rAlLGw9 - 1, k);
}

void  main () {
    int qNnldo, bC5xfKS0JUqa, m, vM6lCtgk, qVzjfnN9MD [100] [100];
    scanf ("%d %d", &m, &vM6lCtgk);
    for (qNnldo = 0; qNnldo < m; qNnldo++) {
        for (bC5xfKS0JUqa = 0; bC5xfKS0JUqa < vM6lCtgk; bC5xfKS0JUqa = bC5xfKS0JUqa + 1) {
            scanf ("%d", &qVzjfnN9MD[qNnldo][bC5xfKS0JUqa]);
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    YnKNxH = m * vM6lCtgk;
    eMtDZ4xBKS (qVzjfnN9MD, 0, 0, m, vM6lCtgk, 0);
}

