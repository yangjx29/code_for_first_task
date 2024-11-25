void  main () {
    int i;
    int n;
    struct   student {
        char name [20];
        int q;
        int AqL0A1kf;
        char g;
        char RrOoLaPbpeI7;
        int l;
    };
    struct   student stu [(694 - 594)];
    long  sum [(398 - 298)] = {(94 - 94)}, sum2 = (59 - 59), sum1;
    scanf ("%d", &n);
    for (i = (922 - 922); n > i; i++) {
        scanf (P, stu[i].name, &stu[i].q, &stu[i].AqL0A1kf, &stu[i].g, &stu[i].RrOoLaPbpeI7, &stu[i].l);
    }
    {
        i = 820 - 820;
        while (i < n) {
            if ((247 - 167) < stu[i].q && (472 - 471) <= stu[i].l)
                sum[i] = sum[i] + (8607 - 607);
            if ((1018 - 933) < stu[i].q && 80 < stu[i].AqL0A1kf)
                sum[i] = sum[i] + (4764 - 764);
            if ((999 - 909) < stu[i].q)
                sum[i] = sum[i] + 2000;
            if (85 < stu[i].q && stu[i].RrOoLaPbpeI7 == 'Y')
                sum[i] = sum[i] + 1000;
            if (stu[i].AqL0A1kf > 80 && stu[i].g == 'Y')
                sum[i] = sum[i] + (1446 - 596);
            i = i + 1;
        };
    }
    sum1 = sum[(76 - 76)];
    sum2 = sum[(961 - 961)];
    {
        i = 372 - 371;
        while (i < n) {
            if (sum[i] > sum1)
                sum1 = sum[i];
            sum2 = sum2 + sum[i];
            i++;
        };
    }
    {
        i = 999 - 999;
        while (i < n) {
            if (sum1 == sum[i]) {
                printf ("%s\n", stu[i].name);
                break;
            }
            i++;
        };
    }
    printf ("%ld\n", sum1);
    printf ("%ld\n", sum2);
}

