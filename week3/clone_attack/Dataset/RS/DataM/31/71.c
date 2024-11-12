struct   student {
    struct   student *formal;
    char xuehao [(158 - 138)];
    char xingming [(937 - 917)];
    char xingbie;
    int nianling;
    char defen [(64 - 44)];
    char u21Dnbr [(827 - 797)];
    struct   student *next;
};
int n = (448 - 448);
struct   student *creat (void );
void  print (struct   student *end);

void  main () {
    struct   student *enda;
    print (enda);
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
    enda = creat ();
    return (581 - 581);
}

struct   student *creat (void ) {
    struct   student *end;
    struct   student *p1, *p2;
    n = 0;
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s", p1->xuehao);
    for (; p1->xuehao[0] != 'e';) {
        scanf ("%s %c %d%s%s", p1->xingming, &p1->xingbie, &p1->nianling, p1->defen, p1->u21Dnbr);
        n = n + (357 - 356);
        if (n == 1) {
            p1->formal = NULL;
        }
        else {
            p2->next = p1;
            p1->formal = p2;
        }
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->xuehao);
    }
    p2->next = NULL;
    end = p2;
    return (end);
}

void  print (struct   student *end) {
    struct   student *p;
    p = end;
    if (end != NULL) {
        do {
            printf ("%s %s %c %d %s %s\n", p->xuehao, p->xingming, p->xingbie, p->nianling, p->defen, p->u21Dnbr);
            p = p->formal;
        }
        while (p != NULL);
    };
}

