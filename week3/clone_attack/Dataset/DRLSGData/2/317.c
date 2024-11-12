struct   student {
    char cxVDJkT [(562 - 462)];
    char Rs3TJrj4iE [(1014 - 914)];
    struct   student *c82bP9eh;
};
int q1KnVzY;

struct   student *jfpOyVI (void ) {
    int ZTdp47cmi = (523 - 523);
    struct   student *head;
    struct   student *pd1vule, *DDWvL9RkBzpC;
    pd1vule = DDWvL9RkBzpC = (struct   student *) malloc (LEN);
    scanf ("%s %s", &pd1vule->cxVDJkT, &pd1vule->Rs3TJrj4iE);
    head = NULL;
    do {
        ZTdp47cmi = ZTdp47cmi +(542 - 541);
        if (!((666 - 665) != ZTdp47cmi))
            head = pd1vule;
        else
            DDWvL9RkBzpC->c82bP9eh = pd1vule;
        DDWvL9RkBzpC = pd1vule;
        pd1vule = (struct   student *) malloc (LEN);
        scanf ("%s %s", &pd1vule->cxVDJkT, &pd1vule->Rs3TJrj4iE);
    }
    while (q1KnVzY - (463 - 462) > ZTdp47cmi);
    DDWvL9RkBzpC->c82bP9eh = pd1vule;
    DDWvL9RkBzpC = pd1vule;
    DDWvL9RkBzpC->c82bP9eh = NULL;
    return (head);
}

void  main () {
    int SDL5HZCG [(10060 - 60)] = {(773 - 773)};
    struct   student *head;
    struct   student *KblyUw2R3o4;
    int vU4SEfg, ZTdp47cmi, yQFnP5E4, sic3mosnE, kZpzCxS0, ac8KzxFYt6;
    head = jfpOyVI ();
    scanf ("%d", &q1KnVzY);
    KblyUw2R3o4 = head;
    for (ZTdp47cmi = (672 - 607), yQFnP5E4 = (509 - 509); ZTdp47cmi <= (862 - 772); ZTdp47cmi = ZTdp47cmi +(840 - 839), yQFnP5E4 = yQFnP5E4 + 1) {
        KblyUw2R3o4 = head;
        do {
            sic3mosnE = strlen (KblyUw2R3o4->Rs3TJrj4iE);
            for (kZpzCxS0 = (625 - 625); sic3mosnE > kZpzCxS0; kZpzCxS0 = kZpzCxS0 + (783 - 782)) {
                if (!(ZTdp47cmi != KblyUw2R3o4->Rs3TJrj4iE[kZpzCxS0]))
                    SDL5HZCG[yQFnP5E4]++;
            }
            KblyUw2R3o4 = KblyUw2R3o4->c82bP9eh;
        }
        while (KblyUw2R3o4 != NULL);
    }
    for (ZTdp47cmi = (692 - 692), ac8KzxFYt6 = SDL5HZCG[(553 - 553)]; yQFnP5E4 >= ZTdp47cmi; ZTdp47cmi = ZTdp47cmi +1) {
        if (SDL5HZCG[ZTdp47cmi] >= ac8KzxFYt6) {
            vU4SEfg = ZTdp47cmi;
            ac8KzxFYt6 = SDL5HZCG[ZTdp47cmi];
        }
    }
    printf ("%c\n%d\n", vU4SEfg + (496 - 431), ac8KzxFYt6);
    KblyUw2R3o4 = head;
    do {
        sic3mosnE = strlen (KblyUw2R3o4->Rs3TJrj4iE);
        for (kZpzCxS0 = (554 - 554); kZpzCxS0 < sic3mosnE; kZpzCxS0 = kZpzCxS0 + (61 - 60)) {
            if (KblyUw2R3o4->Rs3TJrj4iE[kZpzCxS0] == vU4SEfg + (838 - 773))
                printf ("%s\n", KblyUw2R3o4->cxVDJkT);
        }
        KblyUw2R3o4 = KblyUw2R3o4->c82bP9eh;
    }
    while (KblyUw2R3o4 != NULL);
}

