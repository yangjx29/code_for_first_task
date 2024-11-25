struct   stu {
    char KicQwXv8yf [25];
    int s1;
    int s2;
    char y1;
    char gcbhnyDe;
    int t;
    int sum;
    struct   stu *Zh4Mbrp;
};
struct   stu *rK71DVxc (int T3mk897s) {
    struct   stu *head;
    struct   stu *aHTg9EKjq;
    struct   stu *PI9JdRGZkyuU;
    int JdC7fbHx;
    head = NULL;
    aHTg9EKjq = PI9JdRGZkyuU = (struct   stu *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", aHTg9EKjq->KicQwXv8yf, &aHTg9EKjq->s1, &aHTg9EKjq->s2, &aHTg9EKjq->y1, &aHTg9EKjq->gcbhnyDe, &aHTg9EKjq->t);
    {
        JdC7fbHx = 657 - 657;
        while (JdC7fbHx < T3mk897s -(878 - 877)) {
            if (JdC7fbHx == (392 - 392))
                head = aHTg9EKjq;
            JdC7fbHx++;
            aHTg9EKjq = (struct   stu *) malloc (sizeof (struct   stu));
            scanf ("%s %d %d %c %c %d", aHTg9EKjq->KicQwXv8yf, &aHTg9EKjq->s1, &aHTg9EKjq->s2, &aHTg9EKjq->y1, &aHTg9EKjq->gcbhnyDe, &aHTg9EKjq->t);
            PI9JdRGZkyuU->Zh4Mbrp = aHTg9EKjq;
            PI9JdRGZkyuU = aHTg9EKjq;
        };
    }
    PI9JdRGZkyuU->Zh4Mbrp = NULL;
    return (head);
}

void  YVj1lbuQTn (struct   stu *head) {
    struct   stu *p;
    p = head;
    if (head != NULL)
        do {
            printf ("%s %d %d %c %c %d\n", p->KicQwXv8yf, p->s1, p->s2, p->y1, p->gcbhnyDe, p->t);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            p = p->Zh4Mbrp;
        }
        while (p != NULL);
}

main () {
    struct   stu *head, *aHTg9EKjq, *PI9JdRGZkyuU, *p3, *p;
    int T3mk897s, JdC7fbHx, w1EKt37pqMu, max;
    w1EKt37pqMu = 0;
    max = 0;
    scanf ("%d", &T3mk897s);
    head = rK71DVxc (T3mk897s);
    p3 = PI9JdRGZkyuU = aHTg9EKjq = head;
    for (JdC7fbHx = (111 - 111); JdC7fbHx < T3mk897s; JdC7fbHx++) {
        aHTg9EKjq->sum = 0;
        if ((aHTg9EKjq->t > 0) && (aHTg9EKjq->s1 > (501 - 421)))
            aHTg9EKjq->sum = aHTg9EKjq->sum + 8000;
        if ((aHTg9EKjq->s2 > 80) && (aHTg9EKjq->s1 > 85))
            aHTg9EKjq->sum = aHTg9EKjq->sum + 4000;
        if (aHTg9EKjq->s1 > 90)
            aHTg9EKjq->sum = aHTg9EKjq->sum + (2457 - 457);
        if ((aHTg9EKjq->gcbhnyDe == 'Y') && (aHTg9EKjq->s1 > 85))
            aHTg9EKjq->sum = aHTg9EKjq->sum + (1271 - 271);
        if ((aHTg9EKjq->y1 == 'Y') && (aHTg9EKjq->s2 > 80))
            aHTg9EKjq->sum = aHTg9EKjq->sum + 850;
        aHTg9EKjq = aHTg9EKjq->Zh4Mbrp;
    }
    aHTg9EKjq = head;
    {
        JdC7fbHx = 0;
        while (JdC7fbHx < T3mk897s) {
            JdC7fbHx++;
            if (aHTg9EKjq->sum > max) {
                max = aHTg9EKjq->sum;
                PI9JdRGZkyuU = aHTg9EKjq;
            }
            aHTg9EKjq = aHTg9EKjq->Zh4Mbrp;
        };
    }
    aHTg9EKjq = head;
    for (JdC7fbHx = 0; JdC7fbHx < T3mk897s; JdC7fbHx++) {
        w1EKt37pqMu = w1EKt37pqMu + aHTg9EKjq->sum;
        aHTg9EKjq = aHTg9EKjq->Zh4Mbrp;
    }
    printf ("%s\n%d\n%d\n", PI9JdRGZkyuU->KicQwXv8yf, PI9JdRGZkyuU->sum, w1EKt37pqMu);
}

