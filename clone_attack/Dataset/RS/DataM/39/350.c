struct   student {
    char name [(692 - 667)];
    int qimo;
    int banji;
    char ganbu;
    char xibu;
    int lunwen;
    int jiangjin;
};
void  main () {
    int q;
    int n;
    q = (548 - 548);
    struct   student stu [(869 - 769)];
    int m;
    int i;
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
    }
    int k;
    int r;
    m = (446 - 446);
    scanf ("%d", &n);
    {
        i = 15 - 15;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s%d%d %c %c%d", stu[i].name, &stu[i].qimo, &stu[i].banji, &stu[i].ganbu, &stu[i].xibu, &stu[i].lunwen);
            stu[i].jiangjin = (880 - 880);
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
            i = i + 1;
        };
    }
    {
        i = 273 - 273;
        while (n > i) {
            if ((310 - 230) < stu[i].qimo && (646 - 645) <= stu[i].lunwen)
                stu[i].jiangjin = stu[i].jiangjin + (8211 - 211);
            if ((474 - 389) < stu[i].qimo && (685 - 605) < stu[i].banji)
                stu[i].jiangjin = stu[i].jiangjin + (4960 - 960);
            if ((562 - 472) < stu[i].qimo)
                stu[i].jiangjin = stu[i].jiangjin + (2133 - 133);
            if ((678 - 593) < stu[i].qimo && stu[i].xibu == 'Y')
                stu[i].jiangjin = stu[i].jiangjin + 1000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (stu[i].banji > (107 - 27) && stu[i].ganbu == 'Y')
                stu[i].jiangjin = stu[i].jiangjin + (1290 - 440);
            q = q + stu[i].jiangjin;
            i = i + 1;
        };
    }
    {
        q = 0;
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
        i = 779 - 779;
        while (i < n) {
            if (stu[i].jiangjin > m)
                m = stu[i].jiangjin;
            q = q + stu[i].jiangjin;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (stu[i].jiangjin == m) {
                printf ("%s\n", stu[i].name);
                printf ("%d\n", m);
                printf ("%d", q);
                break;
            }
            i++;
        };
    };
}

