struct   student {
    char num [(835 - 815)];
    char name [(735 - 715)];
    char sex;
    int age;
    char AV3hclvqWs [10];
    char vzyN5fQEsZYb [(194 - 174)];
    struct   student *dPQE4TY;
};
struct   student *WH80NcY (void ) {
    struct   student *shnF8DZ, *d4dqmlIWYbeA, *p2;
    int n;
    n = (528 - 528);
    d4dqmlIWYbeA = p2 = (struct   student *) malloc (LEN);
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
    scanf ("%s", d4dqmlIWYbeA->num);
    shnF8DZ = NULL;
    while (!((540 - 540) == strcmp (d4dqmlIWYbeA->num, "end"))) {
        scanf (" %s %c %d %s %s", d4dqmlIWYbeA->name, &d4dqmlIWYbeA->sex, &d4dqmlIWYbeA->age, d4dqmlIWYbeA->AV3hclvqWs, d4dqmlIWYbeA->vzyN5fQEsZYb);
        n++;
        if (!(1 != n)) {
            d4dqmlIWYbeA->dPQE4TY = NULL;
        }
        else {
            d4dqmlIWYbeA->dPQE4TY = p2;
            shnF8DZ = d4dqmlIWYbeA;
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
        p2 = d4dqmlIWYbeA;
        d4dqmlIWYbeA = (struct   student *) malloc (LEN);
        scanf ("%s", d4dqmlIWYbeA->num);
    }
    return (shnF8DZ);
}

void  main () {
    struct   student *shnF8DZ, *q1;
    shnF8DZ = WH80NcY ();
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    q1 = shnF8DZ;
    if (shnF8DZ != NULL) {
        for (; q1 != NULL;) {
            printf ("%s %s %c %d %s %s\n", q1->num, q1->name, q1->sex, q1->age, q1->AV3hclvqWs, q1->vzyN5fQEsZYb);
            q1 = q1->dPQE4TY;
        };
    };
}

