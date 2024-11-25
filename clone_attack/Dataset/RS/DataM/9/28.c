void  main () {
    char ID [20000] [10];
    int MsFk0eVt;
    int rm6LIWNZCBF;
    int j;
    int stu [(2429 - 429)] [3];
    int nwhiSEC2 [3];
    int Lm0cxX8R;
    scanf ("%d", &MsFk0eVt);
    for (rm6LIWNZCBF = (804 - 804); MsFk0eVt > rm6LIWNZCBF; rm6LIWNZCBF = rm6LIWNZCBF + 1)
        scanf ("%s %d", ID[rm6LIWNZCBF], &stu[rm6LIWNZCBF][(964 - 963)]);
    for (rm6LIWNZCBF = (42 - 42); MsFk0eVt > rm6LIWNZCBF; rm6LIWNZCBF++) {
        stu[rm6LIWNZCBF][(635 - 635)] = atoi (ID[rm6LIWNZCBF]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        stu[rm6LIWNZCBF][(304 - 302)] = rm6LIWNZCBF;
    }
    {
        rm6LIWNZCBF = 901 - 901;
        while (MsFk0eVt > rm6LIWNZCBF) {
            {
                j = 978 - 977;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < MsFk0eVt) {
                    if (stu[rm6LIWNZCBF][(892 - 891)] >= stu[j][(563 - 562)]) {
                        nwhiSEC2[(233 - 233)] = stu[rm6LIWNZCBF][(501 - 501)];
                        stu[rm6LIWNZCBF][(78 - 78)] = stu[j][0];
                        stu[j][0] = nwhiSEC2[0];
                        nwhiSEC2[(854 - 853)] = stu[rm6LIWNZCBF][1];
                        stu[rm6LIWNZCBF][1] = stu[j][1];
                        stu[j][1] = nwhiSEC2[1];
                        nwhiSEC2[(207 - 205)] = stu[rm6LIWNZCBF][(935 - 933)];
                        stu[rm6LIWNZCBF][(449 - 447)] = stu[j][(936 - 934)];
                        stu[j][(429 - 427)] = nwhiSEC2[2];
                    }
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
                    j = j + 1;
                };
            }
            rm6LIWNZCBF = rm6LIWNZCBF + 1;
        };
    }
    {
        rm6LIWNZCBF = MsFk0eVt -1;
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
        while (0 <= rm6LIWNZCBF) {
            if (stu[rm6LIWNZCBF][1] >= 60) {
                MsFk0eVt--;
                Lm0cxX8R = stu[rm6LIWNZCBF][2];
                printf ("%s\n", ID[Lm0cxX8R]);
            }
            else
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            rm6LIWNZCBF = rm6LIWNZCBF - 1;
        };
    }
    {
        rm6LIWNZCBF = 0;
        while (rm6LIWNZCBF < MsFk0eVt) {
            for (j = rm6LIWNZCBF + 1; j < MsFk0eVt; j = j + 1) {
                if (stu[rm6LIWNZCBF][2] > stu[j][2]) {
                    nwhiSEC2[0] = stu[rm6LIWNZCBF][0];
                    stu[rm6LIWNZCBF][0] = stu[j][0];
                    stu[j][0] = nwhiSEC2[0];
                    nwhiSEC2[1] = stu[rm6LIWNZCBF][1];
                    stu[rm6LIWNZCBF][1] = stu[j][1];
                    stu[j][1] = nwhiSEC2[1];
                    nwhiSEC2[2] = stu[rm6LIWNZCBF][2];
                    stu[rm6LIWNZCBF][2] = stu[j][2];
                    stu[j][2] = nwhiSEC2[2];
                };
            }
            rm6LIWNZCBF++;
        };
    }
    {
        rm6LIWNZCBF = 0;
        while (rm6LIWNZCBF < MsFk0eVt) {
            Lm0cxX8R = stu[rm6LIWNZCBF][2];
            rm6LIWNZCBF++;
            printf ("%s\n", ID[Lm0cxX8R]);
        };
    };
}

