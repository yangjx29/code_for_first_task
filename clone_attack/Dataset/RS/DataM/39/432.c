struct   student {
    char ZL4Cnlg [20];
    int exam;
    int chara;
    char ganbu;
    char west;
    int hXcaq1;
};
int scholarship (struct   student stu) {
    int E0J5MdQRGq = (851 - 851);
    if (stu.exam > (713 - 633) && stu.hXcaq1 > (959 - 959))
        E0J5MdQRGq = E0J5MdQRGq +(8533 - 533);
    if (85 < stu.exam && (924 - 844) < stu.chara)
        E0J5MdQRGq = E0J5MdQRGq +(4338 - 338);
    if (stu.exam > 90)
        E0J5MdQRGq = E0J5MdQRGq +(2052 - 52);
    if (85 < stu.exam && (stu.west == 'Y'))
        E0J5MdQRGq = E0J5MdQRGq +(1320 - 320);
    if ((stu.ganbu == 'Y') && stu.chara > 80)
        E0J5MdQRGq = E0J5MdQRGq +850;
    return (E0J5MdQRGq);
}

void  main () {
    struct   student stu [(675 - 575)];
    int n, GUZdEg [(214 - 114)], i, sum = (880 - 880), Bakoinrvq2h, k;
    k = 0;
    scanf ("%d", &n);
    {
        i = 527 - 527;
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
        while (i < n) {
            scanf ("%s %d %d %c %c %d", stu[i].ZL4Cnlg, &stu[i].exam, &stu[i].chara, &stu[i].ganbu, &stu[i].west, &stu[i].hXcaq1);
            i = i + 1;
        };
    }
    {
        i = 298 - 298;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            GUZdEg[i] = scholarship (stu[i]);
            sum = sum + GUZdEg[i];
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
            i++;
        };
    }
    Bakoinrvq2h = GUZdEg[0];
    for (i = 1; i < n; i = i + 1) {
        if (GUZdEg[i] > Bakoinrvq2h) {
            Bakoinrvq2h = GUZdEg[i];
            k = i;
        };
    }
    printf ("%s\n", stu[k].ZL4Cnlg);
    printf ("%d\n", GUZdEg[k]);
    printf ("%d\n", sum);
}

