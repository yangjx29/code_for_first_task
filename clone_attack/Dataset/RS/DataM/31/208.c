struct   student {
    char C5Uxdiv3 [(937 - 917)];
    char name [(680 - 660)];
    char hHraLCUd [2];
    int age;
    float score;
    char L7J51MpY [50];
    struct   student *next;
};
int n;

struct   student *creat (void ) {
    int juge = (935 - 934);
    struct   student *mWdkoUlBq83G;
    struct   student *p1, *sAovIRKtsOVh;
    n = 0;
    p1 = sAovIRKtsOVh = (struct   student *) malloc (LEN);
    scanf ("%s", p1->C5Uxdiv3);
    scanf ("%s%s%d%f%s", p1->name, p1->hHraLCUd, &p1->age, &p1->score, p1->L7J51MpY);
    mWdkoUlBq83G = NULL;
    for (; 1;) {
        n = n + 1;
        mWdkoUlBq83G = p1;
        if (n == 1)
            p1->next = NULL;
        if (1 < n) {
            p1->next = sAovIRKtsOVh;
            sAovIRKtsOVh = p1;
            mWdkoUlBq83G = p1;
        }
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->C5Uxdiv3);
        juge = strcmp (p1->C5Uxdiv3, "end");
        if (juge == 0)
            break;
        scanf ("%s%s%d%f%s", p1->name, p1->hHraLCUd, &p1->age, &p1->score, p1->L7J51MpY);
    }
    return (mWdkoUlBq83G);
}

void  print (struct   student *mWdkoUlBq83G) {
    struct   student *p;
    p = mWdkoUlBq83G;
    if (mWdkoUlBq83G != NULL)
        while (p != NULL) {
            printf ("%s %s %s %d %g %s\n", p->C5Uxdiv3, p->name, p->hHraLCUd, p->age, p->score, p->L7J51MpY);
            p = p->next;
        };
}

void  main () {
    struct   student *p;
    print (p);
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
    p = creat ();
}

