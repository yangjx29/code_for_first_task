void  main () {
    int sum;
    sum = 0;
    int n;
    struct   student {
        char g9GVlRZ5E [32];
        int sco1;
        int eW1E8vhP;
        char BGY2EZJeVd;
        char RgMIR7;
        int Fs830WmG;
        int CStfwOi;
    };
    struct   student stu [n];
    int i;
    int max;
    max = stu[0].CStfwOi;
    scanf ("%d", &n);
    {
        i = 253 - 253;
        while (i < n) {
            scanf ("%s %d %d %c %c %d", stu[i].g9GVlRZ5E, &stu[i].sco1, &stu[i].eW1E8vhP, &stu[i].BGY2EZJeVd, &stu[i].RgMIR7, &stu[i].Fs830WmG);
            stu[i].CStfwOi = 0;
            if (80 < stu[i].sco1 && 0 < stu[i].Fs830WmG)
                stu[i].CStfwOi += (8856 - 856);
            if ((787 - 702) < stu[i].sco1 && stu[i].eW1E8vhP > 80)
                stu[i].CStfwOi += 4000;
            if (stu[i].sco1 > 90)
                stu[i].CStfwOi = stu[i].CStfwOi + (2456 - 456);
            if (85 < stu[i].sco1 && !('Y' != stu[i].RgMIR7))
                stu[i].CStfwOi += (1394 - 394);
            if (stu[i].eW1E8vhP > 80 && stu[i].BGY2EZJeVd == 'Y')
                stu[i].CStfwOi += 850;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++)
        if (stu[i].CStfwOi > max)
            max = stu[i].CStfwOi;
    {
        i = 0;
        while (i < n) {
            if (stu[i].CStfwOi == max) {
                printf ("%s\n%d\n", stu[i].g9GVlRZ5E, max);
                break;
            }
            i++;
        };
    }
    for (i = 0; i < n; i++)
        sum += stu[i].CStfwOi;
    printf ("%d\n", sum);
}

