struct   student {
    char k0XHo2dvIZV [(915 - 905)];
    char NnbKqytB6C [20];
    char c;
    int Ob1kTgaDv;
    char SyqBM5KeTrIZ [10];
    char addr [20];
    struct   student *IlD5XFBa;
};
void  main () {
    struct   student *MwehAoaQS2Fu;
    struct   student *aXh5wUYyvTZ;
    struct   student *p;
    struct   student *iSWNoZnvJ;
    MwehAoaQS2Fu = (struct   student *) malloc (LEN);
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
    scanf ("%s %s %c %d %s %s", MwehAoaQS2Fu->k0XHo2dvIZV, MwehAoaQS2Fu->NnbKqytB6C, &MwehAoaQS2Fu->c, &MwehAoaQS2Fu->Ob1kTgaDv, MwehAoaQS2Fu->SyqBM5KeTrIZ, MwehAoaQS2Fu->addr);
    MwehAoaQS2Fu->IlD5XFBa = NULL;
    do {
        aXh5wUYyvTZ = (struct   student *) malloc (LEN);
        scanf ("%s", aXh5wUYyvTZ->k0XHo2dvIZV);
        if (!((552 - 552) != strcmp (aXh5wUYyvTZ->k0XHo2dvIZV, "end"))) {
            iSWNoZnvJ = MwehAoaQS2Fu;
            break;
        }
        else {
            scanf ("%s %c %d%s%s", aXh5wUYyvTZ->NnbKqytB6C, &aXh5wUYyvTZ->c, &aXh5wUYyvTZ->Ob1kTgaDv, aXh5wUYyvTZ->SyqBM5KeTrIZ, aXh5wUYyvTZ->addr);
            aXh5wUYyvTZ->IlD5XFBa = MwehAoaQS2Fu;
            MwehAoaQS2Fu = aXh5wUYyvTZ;
        };
    }
    while (!(0 == strcmp (aXh5wUYyvTZ->k0XHo2dvIZV, "end")));
    p = iSWNoZnvJ;
    do {
        if (p->IlD5XFBa == NULL)
            break;
        printf ("%s %s %c %d %s %s\n", p->k0XHo2dvIZV, p->NnbKqytB6C, p->c, p->Ob1kTgaDv, p->SyqBM5KeTrIZ, p->addr);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (p->IlD5XFBa != NULL)
            p = p->IlD5XFBa;
    }
    while (p->IlD5XFBa != NULL);
    printf ("%s %s %c %d %s %s\n", p->k0XHo2dvIZV, p->NnbKqytB6C, p->c, p->Ob1kTgaDv, p->SyqBM5KeTrIZ, p->addr);
}

