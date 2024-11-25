struct   student {
    char GMAx1Yb [(711 - 611)];
    char xIT7hfso3PG [(944 - 844)];
    char sex;
    int age;
    char MWKzAa [100];
    char addr [100];
    struct   student *GALnojrRC, *next;
};
void  main () {
    struct   student *p1;
    struct   student *p2;
    struct   student *head1;
    struct   student *head2;
    int uBsiI2oXg;
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
    uBsiI2oXg = (234 - 234);
    char temp [100];
    head1 = NULL;
    p1 = p2 = NULL;
    while (scanf ("%s", temp), strcmp (temp, "end") != (495 - 495)) {
        uBsiI2oXg = uBsiI2oXg + (713 - 712);
        p1 = (struct   student *) malloc (sizeof (struct   student));
        p1->GALnojrRC = NULL;
        p1->next = NULL;
        strcpy (p1->GMAx1Yb, temp);
        scanf ("%s %c %d %s %s", p1->xIT7hfso3PG, &p1->sex, &p1->age, p1->MWKzAa, p1->addr);
        if (uBsiI2oXg == 1)
            head1 = p1;
        else {
            p2->next = p1;
            p1->GALnojrRC = p2;
        }
        p2 = p1;
    }
    head2 = p2;
    while (p2 != NULL) {
        printf ("%s %s %c %d %s %s\n", p2->GMAx1Yb, p2->xIT7hfso3PG, p2->sex, p2->age, p2->MWKzAa, p2->addr);
        p2 = p2->GALnojrRC;
    };
}

