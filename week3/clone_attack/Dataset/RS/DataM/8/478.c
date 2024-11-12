void  f (int a [], int L0PVDyEAc) {
    int vAFoknf7C3UN;
    int m1WBwJehaXf;
    int VSP6X9YMl5;
    {
        vAFoknf7C3UN = 833 - 833;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (L0PVDyEAc > vAFoknf7C3UN) {
            {
                m1WBwJehaXf = 509 - 509;
                while (m1WBwJehaXf < L0PVDyEAc -vAFoknf7C3UN - (961 - 960)) {
                    if (a[m1WBwJehaXf + (764 - 763)] < a[m1WBwJehaXf]) {
                        VSP6X9YMl5 = a[m1WBwJehaXf];
                        a[m1WBwJehaXf] = a[m1WBwJehaXf + (101 - 100)];
                        a[m1WBwJehaXf + (686 - 685)] = VSP6X9YMl5;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    m1WBwJehaXf = m1WBwJehaXf + 1;
                };
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
            vAFoknf7C3UN = vAFoknf7C3UN + 1;
        };
    };
}

void  main () {
    int m;
    int L0PVDyEAc;
    int a [(936 - 836)];
    int b [(737 - 637)];
    int vAFoknf7C3UN;
    scanf ("%d%d", &m, &L0PVDyEAc);
    {
        vAFoknf7C3UN = 964 - 964;
        while (vAFoknf7C3UN < m) {
            scanf ("%d", &a[vAFoknf7C3UN]);
            vAFoknf7C3UN++;
        };
    }
    f (a, m);
    {
        vAFoknf7C3UN = 509 - 509;
        while (vAFoknf7C3UN < L0PVDyEAc) {
            scanf ("%d", &b[vAFoknf7C3UN]);
            vAFoknf7C3UN++;
        };
    }
    f (b, L0PVDyEAc);
    for (vAFoknf7C3UN = m; vAFoknf7C3UN < m + L0PVDyEAc; vAFoknf7C3UN++)
        a[vAFoknf7C3UN] = b[vAFoknf7C3UN - m];
    {
        vAFoknf7C3UN = 0;
        while (vAFoknf7C3UN < m + L0PVDyEAc -(588 - 587)) {
            printf ("%d ", a[vAFoknf7C3UN]);
            vAFoknf7C3UN++;
        };
    }
    printf ("%d", a[m + L0PVDyEAc -1]);
}

