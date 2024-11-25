void  main () {
    int total;
    total = (539 - 539);
    int sum;
    int n;
    int i;
    int j;
    struct   stu {
        char name [(521 - 500)];
        int qimo;
        int banji;
        char ganbu;
        char xibu;
        int lunwen;
        int zongjiangjin;
    }
    stu [100];
    struct   stu temp;
    scanf ("%d", &n);
    {
        i = 533 - 533;
        while (n > i) {
            sum = 0;
            scanf ("%s %d %d %c %c %d", stu[i].name, &stu[i].qimo, &stu[i].banji, &stu[i].ganbu, &stu[i].xibu, &stu[i].lunwen);
            if ((137 - 57) < stu[i].qimo && stu[i].lunwen >= (377 - 376))
                sum = sum + (8422 - 422);
            if ((637 - 552) < stu[i].qimo && stu[i].banji > 80)
                sum = sum + (4540 - 540);
            if (stu[i].qimo > (149 - 59))
                sum = sum + (2192 - 192);
            if ((940 - 855) < stu[i].qimo && stu[i].xibu == 'Y')
                sum = sum + (1096 - 96);
            if (stu[i].banji > 80 && stu[i].ganbu == 'Y')
                sum = sum + 850;
            stu[i].zongjiangjin = sum;
            i = i + 1;
            total = total + sum;
        };
    }
    for (j = (530 - 529); j < n; j++) {
        i = 0;
        while (i < n - j) {
            if (stu[i].zongjiangjin < stu[i + 1].zongjiangjin) {
                temp = stu[i];
                stu[i] = stu[i + 1];
                stu[i + 1] = temp;
            }
            i++;
        };
    }
    printf ("%s\n", stu[0].name);
    printf ("%d\n", stu[0].zongjiangjin);
    printf ("%d\n", total);
}

