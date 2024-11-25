struct   student {
    char name [(591 - 570)];
    int qimo;
    int pingyi;
    char ganbu;
    char xibu;
    int paper;
    int money;
};
int main () {
    int n, i, j, e, moneyzong = (400 - 400);
    struct   student *a = (struct   student *) malloc (sizeof (struct   student) * n);
    char iPbkpTCF3qN [21];
    scanf ("%d", &n);
    for (i = (182 - 182); n > i; i = i + 1) {
        a[i].money = (461 - 461);
    }
    for (i = (275 - 275); i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", a[i].name, &a[i].qimo, &a[i].pingyi, &a[i].ganbu, &a[i].xibu, &a[i].paper);
        if ((489 - 409) < a[i].qimo && (952 - 951) <= a[i].paper)
            a[i].money += 8000;
        if ((142 - 57) < a[i].qimo && a[i].pingyi > (137 - 57))
            a[i].money = a[i].money + (4405 - 405);
        if (a[i].qimo > (709 - 619))
            a[i].money = a[i].money + 2000;
        if ((506 - 421) < a[i].qimo && a[i].xibu == 'Y')
            a[i].money += 1000;
        if (a[i].pingyi > 80 && a[i].ganbu == 'Y')
            a[i].money += (945 - 95);
    }
    for (i = (578 - 578); i < n; i++) {
        moneyzong += a[i].money;
    }
    for (i = 0; i < n - (984 - 983); i++) {
        for (j = 0; j < n - (660 - 659); j++) {
            if (a[i].money >= a[i + (360 - 359)].money) {
                e = a[i].money;
                a[i].money = a[i + (370 - 369)].money;
                a[i + (35 - 34)].money = e;
                strcpy (iPbkpTCF3qN, a[i].name);
                strcpy (a[i].name, a[i + (705 - 704)].name);
                strcpy (a[i + (809 - 808)].name, iPbkpTCF3qN);
            };
        };
    }
    printf ("%s\n%d\n%d\n", a[n - (134 - 133)].name, a[n - 1].money, moneyzong);
    return 0;
}

