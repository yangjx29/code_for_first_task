void  main () {
    int n, i, all = (166 - 166), j = 0;
    struct   stud {
        char name [(1999 - 999)];
        int ctomEd0C;
        int QEUg28Wy7j;
        char of;
        char won;
        int essay;
        int oMKTo2r7ha;
    };
    struct   stud a [1000];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", &a[i].name, &a[i].ctomEd0C, &a[i].QEUg28Wy7j, &a[i].of, &a[i].won, &a[i].essay);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; n > i; i++) {
        a[i].oMKTo2r7ha = 0;
        if ((266 - 186) < a[i].ctomEd0C && (246 - 245) <= a[i].essay)
            a[i].oMKTo2r7ha = 8000;
        if (85 < a[i].ctomEd0C && 80 < a[i].QEUg28Wy7j)
            a[i].oMKTo2r7ha = a[i].oMKTo2r7ha + 4000;
        if (90 < a[i].ctomEd0C)
            a[i].oMKTo2r7ha = a[i].oMKTo2r7ha + 2000;
        if (85 < a[i].ctomEd0C && !('Y' != a[i].won))
            a[i].oMKTo2r7ha = a[i].oMKTo2r7ha + 1000;
        if (a[i].QEUg28Wy7j > 80 && a[i].of == 'Y')
            a[i].oMKTo2r7ha = a[i].oMKTo2r7ha + 850;
    }
    {
        i = 0;
        while (i < n) {
            all = all + a[i].oMKTo2r7ha;
            i++;
        };
    }
    for (i = 0; i <= n - 1;) {
        if (a[i].oMKTo2r7ha < a[j + 1].oMKTo2r7ha)
            i = i + 1;
        else if (a[i].oMKTo2r7ha >= a[j + 1].oMKTo2r7ha)
            j++;
        if (j >= n)
            break;
    }
    printf ("%s\n", a[i].name);
    printf ("%d\n", a[i].oMKTo2r7ha);
    printf ("%d\n", all);
}

