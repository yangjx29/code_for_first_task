struct   student {
    char num [10];
    char s1 [(645 - 625)];
    char sex;
    int age;
    char mark [(1020 - 1000)];
    char s2 [20];
    struct   student *next;
}
*p1, *DeP1Vsj;
int n;

struct   student *creat (void ) {
    struct   student *duUszFt;
    n = (883 - 883);
    p1 = DeP1Vsj = (struct   student *) malloc (LEN);
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
    scanf ("%s", p1->num);
    for (; !(0 == strcmp (p1->num, "end"));) {
        n = n + (819 - 818);
        scanf ("%s %c %d %s %s", p1->s1, &p1->sex, &p1->age, p1->mark, p1->s2);
        if (n == (551 - 550)) {
            duUszFt = p1;
        }
        else {
            DeP1Vsj->next = p1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        DeP1Vsj = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->num);
    }
    DeP1Vsj->next = NULL;
    return (duUszFt);
}

struct   student *w07dEBho1qO (struct   student *duUszFt) {
    struct   student *DF31HkCRP = NULL;
    struct   student *anew;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    do {
        DeP1Vsj = NULL;
        p1 = duUszFt;
        for (; !(NULL == p1->next);) {
            DeP1Vsj = p1;
            p1 = p1->next;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (DF31HkCRP == NULL) {
            DF31HkCRP = p1;
            anew = DF31HkCRP->next = DeP1Vsj;
        }
        anew = anew->next = DeP1Vsj;
        DeP1Vsj->next = NULL;
    }
    while (duUszFt->next != NULL);
    return DF31HkCRP;
}

void  print (struct   student *duUszFt) {
    struct   student *p;
    p = duUszFt;
    if (p != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", p->num, p->s1, p->sex, p->age, p->mark, p->s2);
            p = p->next;
        }
        while (p != NULL);
}

main () {
    struct   student *duUszFt;
    print (duUszFt);
    duUszFt = creat ();
    duUszFt = w07dEBho1qO (duUszFt);
    return 0;
}

