int main () {
    char ganbu [(763 - 663)];
    char name [(184 - 84)] [(462 - 362)];
    int p;
    int money [100] = {(574 - 574)};
    int lunwen [100];
    int grade2 [100];
    int n;
    int i;
    int moneyall;
    int max;
    int grade1 [(161 - 61)];
    char xibu [(653 - 553)];
    moneyall = (957 - 957);
    max = (624 - 624);
    scanf ("%d", &n);
    for (i = (472 - 472); i < n; i = i + 1) {
        scanf ("%s%d%d%s%s%d", name[i], &grade1[i], &grade2[i], &ganbu[i], &xibu[i], &lunwen[i]);
        if ((624 - 544) < grade1[i] && lunwen[i] >= 1)
            money[i] = money[i] + (8892 - 892);
        if ((638 - 553) < grade1[i] && (785 - 705) < grade2[i])
            money[i] = money[i] + (4414 - 414);
        if ((938 - 848) < grade1[i])
            money[i] = money[i] + (2315 - 315);
        if (grade1[i] > (254 - 169) && xibu[i] == 'Y')
            money[i] = money[i] + (1747 - 747);
        if (grade2[i] > (327 - 247) && ganbu[i] == 'Y')
            money[i] = money[i] + (1348 - 498);
    }
    for (i = (327 - 327); i < n; i = i + 1) {
        if (money[i] > max) {
            max = money[i];
            p = i;
        }
        moneyall = moneyall + money[i];
    }
    printf ("%s", name[p]);
    printf ("%d", max);
    printf ("%d", moneyall);
    printf ("\n");
    printf ("\n");
    return 0;
}

