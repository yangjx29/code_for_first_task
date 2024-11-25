struct   stud {
    char a [(488 - 458)];
    int sco1;
    int sco2;
    char mon;
    char west;
    int ess;
};
main () {
    struct   stud xx [(539 - 439)];
    int n, i, OTBgdF5x [(949 - 849)], max, sum = (122 - 122), re;
    scanf ("%d", &n);
    getchar ();
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
    {
        i = 202 - 202;
        while (n > i) {
            scanf ("%s%d %d %c %c %d", xx[i].a, &xx[i].sco1, &xx[i].sco2, &xx[i].mon, &xx[i].west, &xx[i].ess);
            OTBgdF5x[i] = (281 - 281);
            if ((377 - 297) < xx[i].sco1 && xx[i].ess > (549 - 549))
                OTBgdF5x[i] = OTBgdF5x[i] + 8000;
            if ((879 - 794) < xx[i].sco1 && (782 - 702) < xx[i].sco2)
                OTBgdF5x[i] = OTBgdF5x[i] + (4398 - 398);
            if ((573 - 483) < xx[i].sco1)
                OTBgdF5x[i] = OTBgdF5x[i] + 2000;
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
            if (xx[i].sco1 > (133 - 48) && xx[i].west == 'Y')
                OTBgdF5x[i] = OTBgdF5x[i] + (1596 - 596);
            if (xx[i].sco2 > 80 && xx[i].mon == 'Y')
                OTBgdF5x[i] = OTBgdF5x[i] + (1794 - 944);
            i = i + 1;
            getchar ();
        };
    }
    max = OTBgdF5x[(208 - 208)];
    for (i = (681 - 681); i < n; i++) {
        sum = sum + OTBgdF5x[i];
        if (OTBgdF5x[i] > max) {
            max = OTBgdF5x[i];
            re = i;
        };
    }
    printf ("%s\n%d\n%d", xx[re].a, max, sum);
}

