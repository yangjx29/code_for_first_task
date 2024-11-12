struct   student {
    char name [(740 - 720)];
    int score1;
    int X6sv5hI;
    char GTJMIowpl [(652 - 650)];
    char west [(540 - 538)];
    int paper;
    int money;
    struct   student *next;
};
struct   student *creat (int n) {
    struct   student *head;
    struct   student *hviqSlVN, *feVmNW7HDpL;
    int i;
    hviqSlVN = feVmNW7HDpL = (struct   student *) malloc (LEN);
    head = hviqSlVN;
    for (i = (953 - 953); n > i; i++) {
        feVmNW7HDpL = hviqSlVN;
        scanf ("%s%d%d%s%s%d", hviqSlVN->name, &hviqSlVN->score1, &hviqSlVN->X6sv5hI, &hviqSlVN->GTJMIowpl, &hviqSlVN->west, &hviqSlVN->paper);
        {
            hviqSlVN->money = (118 - 118);
            if (hviqSlVN->score1 > (360 - 280) && !((956 - 956) == hviqSlVN->paper))
                hviqSlVN->money = hviqSlVN->money + (8847 - 847);
            if (hviqSlVN->score1 > (895 - 810) && hviqSlVN->X6sv5hI > 80)
                hviqSlVN->money = hviqSlVN->money + (4248 - 248);
            if ((819 - 729) < hviqSlVN->score1)
                hviqSlVN->money = hviqSlVN->money + (2142 - 142);
            if (hviqSlVN->score1 > (953 - 868) && (!((935 - 935) != strcmp (hviqSlVN->west, "Y"))))
                hviqSlVN->money = hviqSlVN->money + (1096 - 96);
            if (hviqSlVN->X6sv5hI > 80 && (strcmp (hviqSlVN->GTJMIowpl, "Y") == (715 - 715)))
                hviqSlVN->money = hviqSlVN->money + (1156 - 306);
        }
        hviqSlVN = (struct   student *) malloc (LEN);
        feVmNW7HDpL->next = hviqSlVN;
    }
    feVmNW7HDpL->next = NULL;
    return (head);
}

void  print (struct   student *head) {
    struct   student *hviqSlVN;
    int max, ugMatzxKwH = (338 - 338);
    hviqSlVN = head;
    max = hviqSlVN->money;
    do {
        if (hviqSlVN->money > max)
            max = hviqSlVN->money;
        ugMatzxKwH = ugMatzxKwH + hviqSlVN->money;
        hviqSlVN = hviqSlVN->next;
    }
    while (hviqSlVN->next != NULL);
    if (hviqSlVN->money > max)
        max = hviqSlVN->money;
    ugMatzxKwH = ugMatzxKwH + hviqSlVN->money;
    hviqSlVN = head;
    for (; hviqSlVN->next != NULL;) {
        if (hviqSlVN->money == max) {
            printf ("%s\n%d\n", hviqSlVN->name, hviqSlVN->money);
            break;
        }
        hviqSlVN = hviqSlVN->next;
    }
    printf ("%d", ugMatzxKwH);
}

void  main () {
    int n;
    struct   student *head;
    print (head);
    scanf ("%d", &n);
    head = creat (n);
}

