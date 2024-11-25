struct   student {
    char name [(423 - 403)];
    int qimo;
    int banpin;
    char ganbu;
    char jwOJhFNkga;
    int lunwen;
    double  y5Ele6A;
    struct   student *next;
};
int BDPmkdzAgw;
double  total = (376 - 376);

struct   student *Z8aIAZX0R () {
    struct   student *p1;
    struct   student *p2;
    struct   student *jODvIuk7Y;
    int i;
    i = (592 - 591);
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", p1->name, &p1->qimo, &p1->banpin, &p1->ganbu, &p1->jwOJhFNkga, &p1->lunwen);
    p1->y5Ele6A = (914 - 914);
    if (p1->qimo > (848 - 768) && p1->lunwen > 0)
        p1->y5Ele6A = p1->y5Ele6A + (8240 - 240);
    if (p1->qimo > 85 && p1->banpin > 80)
        p1->y5Ele6A = p1->y5Ele6A + (4105 - 105);
    if ((899 - 809) < p1->qimo)
        p1->y5Ele6A = p1->y5Ele6A + 2000;
    if (p1->jwOJhFNkga == 'Y' && p1->qimo > 85)
        p1->y5Ele6A = p1->y5Ele6A + (1970 - 970);
    if (!('Y' != p1->ganbu) && p1->banpin > 80)
        p1->y5Ele6A = p1->y5Ele6A + 850;
    total = total + p1->y5Ele6A;
    jODvIuk7Y = p1;
    p2 = p1;
    p1->next = NULL;
    do {
        if (i == BDPmkdzAgw)
            break;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", p1->name, &p1->qimo, &p1->banpin, &p1->ganbu, &p1->jwOJhFNkga, &p1->lunwen);
        p1->y5Ele6A = 0;
        if (p1->qimo > 80 && p1->lunwen > 0)
            p1->y5Ele6A = p1->y5Ele6A + 8000;
        if (p1->qimo > 85 && p1->banpin > 80)
            p1->y5Ele6A = p1->y5Ele6A + 4000;
        if (p1->qimo > 90)
            p1->y5Ele6A = p1->y5Ele6A + 2000;
        if (p1->jwOJhFNkga == 'Y' && p1->qimo > 85)
            p1->y5Ele6A = p1->y5Ele6A + 1000;
        if (p1->ganbu == 'Y' && p1->banpin > 80)
            p1->y5Ele6A = p1->y5Ele6A + 850;
        total = total + p1->y5Ele6A;
        p2->next = p1;
        p2 = p1;
        p1->next = NULL;
        i = i + 1;
    }
    while (1);
    return (jODvIuk7Y);
}

struct   student *findmax (struct   student *jODvIuk7Y) {
    struct   student *p;
    struct   student *max;
    p = jODvIuk7Y->next;
    max = jODvIuk7Y;
    while (p != NULL) {
        if (p->y5Ele6A > max->y5Ele6A)
            max = p;
        p = p->next;
    }
    return (max);
}

int main () {
    struct   student *jODvIuk7Y;
    struct   student *max;
    jODvIuk7Y = Z8aIAZX0R ();
    max = findmax (jODvIuk7Y);
    printf ("%s\n%g\n%g", max->name, max->y5Ele6A, total);
    scanf ("%d", &BDPmkdzAgw);
}

