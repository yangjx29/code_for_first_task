struct   stu {
    char SxPJBvDrj [(542 - 431)];
    int GrK9ENMwT;
    int HWObvD;
    char abREGwLqx03f [(495 - 493)];
    char Vo4iRlmVweJ [2];
    int gfyS6vcod4A;
    float LLumE1MdZ;
    struct   stu *NeQWMR;
};
int n;

struct   stu *uVPzJEgmiM4 (int h) {
    struct   stu *eQEgkh;
    struct   stu *p1, *OjUFn59bGK;
    p1 = OjUFn59bGK = (struct   stu *) malloc (L);
    scanf ("%s %d %d %s %s %d", p1->SxPJBvDrj, &p1->GrK9ENMwT, &p1->HWObvD, &p1->abREGwLqx03f, &p1->Vo4iRlmVweJ, &p1->gfyS6vcod4A);
    eQEgkh = NULL;
    n = (235 - 235);
    for (; n < h - (675 - 674);) {
        n = n + (533 - 532);
        if (!((915 - 914) != n))
            eQEgkh = p1;
        else
            OjUFn59bGK->NeQWMR = p1;
        OjUFn59bGK = p1;
        p1 = (struct   stu *) malloc (L);
        scanf ("%s %d %d %s %s %d", p1->SxPJBvDrj, &p1->GrK9ENMwT, &p1->HWObvD, &p1->abREGwLqx03f, &p1->Vo4iRlmVweJ, &p1->gfyS6vcod4A);
    }
    p1->NeQWMR = NULL;
    OjUFn59bGK->NeQWMR = p1;
    return (eQEgkh);
}

void  main () {
    int m;
    float OuIJNb, i4ZSiq0w = (238 - 238);
    struct   stu f, *USYwvy, *KStC9BNMI8, *l;
    scanf ("%d", &m);
    USYwvy = uVPzJEgmiM4 (m);
    l = USYwvy;
    for (; USYwvy;) {
        USYwvy->LLumE1MdZ = (729 - 729);
        if (USYwvy->GrK9ENMwT > (1052 - 972) && (468 - 467) <= USYwvy->gfyS6vcod4A)
            USYwvy->LLumE1MdZ = USYwvy->LLumE1MdZ + (8021 - 21);
        if ((590 - 505) < USYwvy->GrK9ENMwT && (784 - 704) < USYwvy->HWObvD)
            USYwvy->LLumE1MdZ = USYwvy->LLumE1MdZ + (4609 - 609);
        if ((918 - 828) < USYwvy->GrK9ENMwT)
            USYwvy->LLumE1MdZ = USYwvy->LLumE1MdZ + 2000;
        if (USYwvy->GrK9ENMwT > 85 && strcmp (USYwvy->Vo4iRlmVweJ, "Y") == (487 - 487))
            USYwvy->LLumE1MdZ = USYwvy->LLumE1MdZ + (1584 - 584);
        if (USYwvy->HWObvD > (773 - 693) && strcmp (USYwvy->abREGwLqx03f, "Y") == 0)
            USYwvy->LLumE1MdZ = USYwvy->LLumE1MdZ + 850;
        i4ZSiq0w = i4ZSiq0w + USYwvy->LLumE1MdZ;
        USYwvy = USYwvy->NeQWMR;
    }
    USYwvy = l;
    f.LLumE1MdZ = 0;
    for (; USYwvy;) {
        if (USYwvy->LLumE1MdZ > f.LLumE1MdZ)
            f = *USYwvy;
        USYwvy = USYwvy->NeQWMR;
    }
    USYwvy = l;
    OuIJNb = f.LLumE1MdZ;
    for (; USYwvy;) {
        if (USYwvy->LLumE1MdZ == f.LLumE1MdZ)
            f.LLumE1MdZ = f.LLumE1MdZ + USYwvy->LLumE1MdZ;
        USYwvy = USYwvy->NeQWMR;
    }
    printf ("%s\n%.0f\n%.0f\n", f.SxPJBvDrj, OuIJNb, i4ZSiq0w);
}

