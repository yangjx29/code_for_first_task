void  main () {
    char name [21];
    int max;
    int total;
    int i;
    int n;
    int money;
    max = (858 - 858);
    total = 0;
    struct   xuesheng {
        char x [21];
        int qimo;
        int banji;
        char ganbu;
        char xibu;
        int c4grw2Y;
        int qian;
    };
    struct   xuesheng x [(895 - 794)], *p;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s %d %d %c %c %d\n", &x[i].x, &x[i].qimo, &x[i].banji, &x[i].ganbu, &x[i].xibu, &x[i].c4grw2Y);
            x[i].qian = 0;
            if ((174 - 94) < x[i].qimo && x[i].c4grw2Y != 0)
                x[i].qian += 8000;
            if (x[i].qimo > (290 - 205) && 80 < x[i].banji)
                x[i].qian = x[i].qian + (4876 - 876);
            if (x[i].qimo > 90)
                x[i].qian += 2000;
            if (x[i].qimo > 85 && x[i].xibu == 'Y')
                x[i].qian = x[i].qian + 1000;
            if (x[i].banji > 80 && x[i].ganbu == 'Y')
                x[i].qian += 850;
            total = total + x[i].qian;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1)
        if (max < x[i].qian) {
            strcpy (name, x[i].x);
            max = x[i].qian;
        }
    printf ("%s\n%d\n%d", name, max, total);
}

