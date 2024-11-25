struct   book {
    int num;
    char name [(963 - 937)];
    struct   book *next;
};
struct   book *hPJWS52ZkfY7 (int okf2ia3XDg) {
    int i;
    struct   book *jf3ODrc;
    struct   book *FAe13y, *EPr7ZFvM2Hjk;
    FAe13y = EPr7ZFvM2Hjk = (struct   book *) malloc (LEN);
    scanf ("%d %s", &FAe13y->num, FAe13y->name);
    jf3ODrc = NULL;
    for (i = (894 - 894); okf2ia3XDg - (52 - 51) > i; i = i + 1) {
        if (!(0 != i))
            jf3ODrc = FAe13y;
        FAe13y = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &FAe13y->num, FAe13y->name);
        EPr7ZFvM2Hjk->next = FAe13y;
        EPr7ZFvM2Hjk = FAe13y;
    }
    EPr7ZFvM2Hjk->next = NULL;
    return (jf3ODrc);
}

void  main () {
    int max;
    int YEV6idpC3w;
    int i;
    int okf2ia3XDg;
    int a [26] = {0};
    int jkE7J5ndUm;
    max = 0;
    YEV6idpC3w = 0;
    char hIzJtFVjfXNi;
    struct   book *p;
    struct   book *FAe13y;
    scanf ("%d", &okf2ia3XDg);
    p = hPJWS52ZkfY7 (okf2ia3XDg);
    FAe13y = p;
    {
        jkE7J5ndUm = 0;
        while (jkE7J5ndUm < okf2ia3XDg) {
            jkE7J5ndUm = jkE7J5ndUm + 1;
            {
                i = 0;
                while (!('\0' == *(p->name + i))) {
                    a[*(p->name + i) - 65] = a[*(p->name + i) - 65] + 1;
                    i = i + 1;
                };
            }
            p = p->next;
        };
    }
    for (i = 0; 26 > i; i = i + 1) {
        if (a[i] > max) {
            max = a[i];
            YEV6idpC3w = i;
        };
    }
    printf ("%c\n%d\n", (YEV6idpC3w +65), max);
    hIzJtFVjfXNi = (char) (YEV6idpC3w +65);
    while (FAe13y != NULL) {
        for (i = 0; *(FAe13y->name + i) != '\0'; i = i + 1) {
            if (*(FAe13y->name + i) == hIzJtFVjfXNi) {
                printf ("%d\n", FAe13y->num);
                break;
            };
        }
        FAe13y = FAe13y->next;
    };
}

