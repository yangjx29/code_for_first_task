struct   stu {
    int num;
    int tbMDnavlweE;
    int math;
    int iVUjC7g;
    struct   stu *next;
};
struct   stu *SaJh7Ir9pLYg (int zmD4NQA8r7t) {
    struct   stu *Mln1IfWoqt;
    int cGsCXJ;
    struct   stu *p1;
    struct   stu *kZE9LDh;
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
    p1 = kZE9LDh = (struct   stu *) malloc (LEN);
    scanf ("%d %d %d", &p1->num, &p1->tbMDnavlweE, &p1->math);
    Mln1IfWoqt = p1;
    {
        cGsCXJ = 1;
        while (zmD4NQA8r7t > cGsCXJ) {
            p1 = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%d %d %d", &p1->num, &p1->tbMDnavlweE, &p1->math);
            kZE9LDh->next = p1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            kZE9LDh = p1;
            cGsCXJ = cGsCXJ + 1;
        };
    }
    kZE9LDh->next = NULL;
    return (Mln1IfWoqt);
}

void  main () {
    int cGsCXJ, zmD4NQA8r7t, t, AdhTgP;
    struct   stu *Mln1IfWoqt;
    struct   stu *p1;
    struct   stu *kZE9LDh;
    scanf ("%d", &zmD4NQA8r7t);
    Mln1IfWoqt = SaJh7Ir9pLYg (zmD4NQA8r7t);
    p1 = Mln1IfWoqt;
    for (cGsCXJ = (558 - 558); zmD4NQA8r7t > cGsCXJ; cGsCXJ = cGsCXJ + 1) {
        p1->iVUjC7g = p1->tbMDnavlweE + p1->math;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p1 = p1->next;
    }
    p1 = Mln1IfWoqt;
    kZE9LDh = p1->next;
    for (cGsCXJ = 0; (863 - 860) > cGsCXJ; cGsCXJ++) {
        while (!(NULL == kZE9LDh)) {
            if (kZE9LDh->iVUjC7g > p1->iVUjC7g) {
                t = kZE9LDh->iVUjC7g;
                kZE9LDh->iVUjC7g = p1->iVUjC7g;
                AdhTgP = kZE9LDh->num;
                p1->iVUjC7g = t;
                kZE9LDh->num = p1->num;
                p1->num = AdhTgP;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            kZE9LDh = kZE9LDh->next;
        }
        printf ("%d %d\n", p1->num, p1->iVUjC7g);
        if (cGsCXJ == 2)
            break;
        p1 = p1->next;
        kZE9LDh = p1->next;
    };
}

