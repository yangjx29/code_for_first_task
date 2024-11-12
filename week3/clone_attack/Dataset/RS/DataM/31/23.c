struct   student {
    char Fn5C4DZYOi3 [10];
    char f8a61tAl4N [20];
    char k6yH2GMt;
    int kkBlt90;
    char score [20];
    char v6PfJNpjCtQ [(61 - 11)];
    struct   student *mC5YnEy6oFqJ;
};
void  main () {
    struct   student *head, *mnqN0EtSfO, *q, *jZOE7rh4;
    int JmW4wK3;
    jZOE7rh4 = (struct   student *) malloc (sizeof (struct   student));
    jZOE7rh4->mC5YnEy6oFqJ = NULL;
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
    head = (struct   student *) malloc (sizeof (struct   student));
    head->mC5YnEy6oFqJ = NULL;
    for (JmW4wK3 = 0;; JmW4wK3++) {
        mnqN0EtSfO = head->mC5YnEy6oFqJ;
        q = (struct   student *) malloc (sizeof (struct   student));
        q->mC5YnEy6oFqJ = NULL;
        scanf ("%s", q->Fn5C4DZYOi3);
        if (!('e' != q->Fn5C4DZYOi3[0]))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s %c %d %s %s", q->f8a61tAl4N, &q->k6yH2GMt, &q->kkBlt90, q->score, q->v6PfJNpjCtQ);
        jZOE7rh4->mC5YnEy6oFqJ = mnqN0EtSfO;
        head->mC5YnEy6oFqJ = q;
        q->mC5YnEy6oFqJ = mnqN0EtSfO;
    }
    head->mC5YnEy6oFqJ = mnqN0EtSfO;
    while (mnqN0EtSfO != NULL) {
        printf ("%s %s %c %d %s %s\n", mnqN0EtSfO->Fn5C4DZYOi3, mnqN0EtSfO->f8a61tAl4N, mnqN0EtSfO->k6yH2GMt, mnqN0EtSfO->kkBlt90, mnqN0EtSfO->score, mnqN0EtSfO->v6PfJNpjCtQ);
        mnqN0EtSfO = mnqN0EtSfO->mC5YnEy6oFqJ;
    };
}

