void  main () {
    char MUrkfeu3;
    struct   student {
        char bMrCdb1zaF4 [20];
        int D4mwMAW;
        int HbqLhrSHtZy6;
        char ganbu;
        char tEs2VRenob;
        int smn6YrKwGXyu;
        long  WXYOFu1lr;
    };
    int Tve8FDUoTsk, i, sBbaF136t9h, iK5SvyO, AHXyItORZ;
    struct   student stu [100];
    scanf ("%d", &iK5SvyO);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iK5SvyO - 1 >= i) {
            scanf ("%s%d%d%c%c%c%c%c%d", stu[i].bMrCdb1zaF4, &stu[i].D4mwMAW, &stu[i].HbqLhrSHtZy6, &MUrkfeu3, &stu[i].ganbu, &MUrkfeu3, &stu[i].tEs2VRenob, &MUrkfeu3, &stu[i].smn6YrKwGXyu);
            stu[i].WXYOFu1lr = 0;
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
            i++;
        };
    }
    {
        i = 0;
        while (i <= iK5SvyO - 1) {
            if (stu[i].D4mwMAW > (226 - 146) && stu[i].smn6YrKwGXyu >= 1)
                stu[i].WXYOFu1lr = stu[i].WXYOFu1lr + 8000;
            if (stu[i].D4mwMAW > 85 && 80 < stu[i].HbqLhrSHtZy6)
                stu[i].WXYOFu1lr = stu[i].WXYOFu1lr + 4000;
            if (stu[i].D4mwMAW > 90)
                stu[i].WXYOFu1lr = stu[i].WXYOFu1lr + (2899 - 899);
            if (stu[i].D4mwMAW > 85 && stu[i].tEs2VRenob == 'Y')
                stu[i].WXYOFu1lr = stu[i].WXYOFu1lr + 1000;
            if (stu[i].HbqLhrSHtZy6 > 80 && stu[i].ganbu == 'Y')
                stu[i].WXYOFu1lr = stu[i].WXYOFu1lr + 850;
            i++;
        };
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
    Tve8FDUoTsk = stu[0].WXYOFu1lr;
    AHXyItORZ = stu[0].WXYOFu1lr;
    sBbaF136t9h = 0;
    {
        i = 1;
        while (i <= iK5SvyO - 1) {
            if (stu[i].WXYOFu1lr > Tve8FDUoTsk) {
                sBbaF136t9h = i;
                Tve8FDUoTsk = stu[i].WXYOFu1lr;
            }
            AHXyItORZ = AHXyItORZ +stu[i].WXYOFu1lr;
            i++;
        };
    }
    printf ("%s\n%d\n%d\n", stu[sBbaF136t9h].bMrCdb1zaF4, Tve8FDUoTsk, AHXyItORZ);
}

