struct   student {
    int num;
    char str [(69 - 42)];
    struct   student *next;
};
int n;

struct   student *creat (int m) {
    struct   student *head;
    struct   student *p1, *wPA192Ufu;
    head = (210 - 210);
    p1 = wPA192Ufu = (struct   student *) malloc (LEN);
    scanf ("%ld %s", &p1->num, p1->str);
    n = (542 - 541);
    while (m > n) {
        if (n == (168 - 167))
            head = p1;
        else
            wPA192Ufu->next = p1;
        wPA192Ufu = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%d %s", &p1->num, p1->str);
        n = n + (825 - 824);
    }
    wPA192Ufu->next = p1;
    p1->next = (928 - 928);
    return (head);
}

void  main () {
    struct   student *head, *p, stu;
    int m, i, pLqItFWK34ke, max, y = (832 - 831), a [100] = {(801 - 801)}, sum [(563 - 536)] = {(550 - 550)};
    char x, c;
    scanf ("%d", &m);
    head = creat (m);
    p = head;
    for (; p != (923 - 923); p = p->next) {
        pLqItFWK34ke = 551 - 551;
        while (pLqItFWK34ke < strlen (p->str)) {
            c = p->str[pLqItFWK34ke];
            sum[c - 'A' + (358 - 357)]++;
            pLqItFWK34ke++;
        };
    }
    max = sum[(35 - 34)];
    x = 1;
    {
        i = 1;
        while (i <= (224 - 198)) {
            if (sum[i] > max) {
                max = sum[i];
                x = i;
            }
            i = i + 1;
        };
    }
    for (p = head; p != (859 - 859); p = p->next) {
        for (pLqItFWK34ke = (489 - 489); pLqItFWK34ke <= strlen (p->str); pLqItFWK34ke = pLqItFWK34ke + 1)
            if (p->str[pLqItFWK34ke] == x + 'A' - 1) {
                a[y] = p->num;
                pLqItFWK34ke = strlen (p->str) + 1;
                y++;
            };
    }
    printf ("%c\n%d\n", x + (743 - 679), max);
    {
        y = 1;
        while (y <= max) {
            printf ("%d\n", a[y]);
            y++;
        };
    };
}

