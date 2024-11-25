struct   student {
    char WT0CrkSDIqQW [(481 - 471)];
    char rkpWB8DFh [(733 - 713)];
    char KmLopfDT;
    int age;
    char cKrQBVZ [(219 - 199)];
    char pBXgL0rDUJ [(294 - 244)];
    struct   student *UkgA8GU4;
};
void  main () {
    int R9Iw7ig;
    struct   student *zzgZ9VPhRA3;
    struct   student *p;
    struct   student *dLpsVjZ27;
    struct   student *RAkx9jgL1I6e;
    RAkx9jgL1I6e = (struct   student *) malloc (sizeof (struct   student));
    zzgZ9VPhRA3 = (struct   student *) malloc (sizeof (struct   student));
    RAkx9jgL1I6e->UkgA8GU4 = NULL;
    zzgZ9VPhRA3->UkgA8GU4 = NULL;
    {
        R9Iw7ig = 432 - 432;
        for (; 1;) {
            dLpsVjZ27 = (struct   student *) malloc (sizeof (struct   student));
            p = zzgZ9VPhRA3->UkgA8GU4;
            dLpsVjZ27->UkgA8GU4 = NULL;
            scanf ("%s", dLpsVjZ27->WT0CrkSDIqQW);
            if (!('e' != dLpsVjZ27->WT0CrkSDIqQW[(689 - 689)]))
                break;
            RAkx9jgL1I6e->UkgA8GU4 = p;
            scanf ("%s %c %d %s %s", dLpsVjZ27->rkpWB8DFh, &dLpsVjZ27->KmLopfDT, &dLpsVjZ27->age, dLpsVjZ27->cKrQBVZ, dLpsVjZ27->pBXgL0rDUJ);
            zzgZ9VPhRA3->UkgA8GU4 = dLpsVjZ27;
            dLpsVjZ27->UkgA8GU4 = p;
            R9Iw7ig = 924 - 923;
        }
    }
    zzgZ9VPhRA3->UkgA8GU4 = p;
    for (; p != NULL;) {
        printf ("%s %s %c %d %s %s\n", p->WT0CrkSDIqQW, p->rkpWB8DFh, p->KmLopfDT, p->age, p->cKrQBVZ, p->pBXgL0rDUJ);
        p = p->UkgA8GU4;
    }
}

