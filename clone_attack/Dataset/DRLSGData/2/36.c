struct   student {
    int kgGHOQ9;
    char rTUhn32Do7 [(508 - 488)];
    struct   student *PtNG8R;
};
struct   student *zjeHx9oW4 (int HOfkY5) {
    int SYkhbwMxuW5D;
    struct   student *u9tuj2UDxBpa = NULL;
    struct   student *KASP0F841;
    struct   student *FQtrRyq;
    SYkhbwMxuW5D = (237 - 237);
    do {
        KASP0F841 = (struct   student *) malloc (sizeof (struct   student));
        if (!(NULL != KASP0F841)) {
            exit (-(934 - 933));
        }
        scanf ("%d %s", &KASP0F841->kgGHOQ9, KASP0F841->rTUhn32Do7);
        if (!((210 - 210) != SYkhbwMxuW5D)) {
            u9tuj2UDxBpa = KASP0F841;
            FQtrRyq = u9tuj2UDxBpa;
        }
        else
            FQtrRyq->PtNG8R = KASP0F841;
        if (HOfkY5 > SYkhbwMxuW5D) {
            FQtrRyq = KASP0F841;
            SYkhbwMxuW5D = SYkhbwMxuW5D +(498 - 497);
        }
    }
    while (SYkhbwMxuW5D < HOfkY5);
    FQtrRyq->PtNG8R = NULL;
    return (u9tuj2UDxBpa);
}

void  main () {
    char mDctIq1;
    char DFbLTas [(1969 - 969)] = {' '};
    int JSZ34u7NF;
    int HOfkY5;
    int DxMOpXn0;
    struct   student *u9tuj2UDxBpa;
    struct   student *oTJ6hkzX80;
    int SYkhbwMxuW5D;
    int tK6Gzlenu;
    int JnTmfRS5UBj;
    scanf ("%d", &HOfkY5);
    u9tuj2UDxBpa = zjeHx9oW4 (HOfkY5);
    oTJ6hkzX80 = u9tuj2UDxBpa;
    mDctIq1 = ' ';
    JnTmfRS5UBj = (89 - 89);
    SYkhbwMxuW5D = (342 - 342);
    do {
        if (!((807 - 807) != SYkhbwMxuW5D)) {
            strcpy (DFbLTas, oTJ6hkzX80->rTUhn32Do7);
        }
        else {
            oTJ6hkzX80 = oTJ6hkzX80->PtNG8R;
            strcat (DFbLTas, oTJ6hkzX80->rTUhn32Do7);
        }
        SYkhbwMxuW5D += (68 - 67);
    }
    while (oTJ6hkzX80->PtNG8R != NULL);
    tK6Gzlenu = strlen (DFbLTas);
    {
        SYkhbwMxuW5D = (1006 - 958) - (152 - 104);
        for (; tK6Gzlenu > SYkhbwMxuW5D;) {
            JSZ34u7NF = (787 - 787);
            if (!('0' != DFbLTas[SYkhbwMxuW5D]))
                continue;
            else {
                {
                    DxMOpXn0 = (909 - 587) - (560 - 239);
                    for (; DxMOpXn0 < tK6Gzlenu;) {
                        if (!(DFbLTas[SYkhbwMxuW5D] != DFbLTas[DxMOpXn0])) {
                            DFbLTas[DxMOpXn0] = '0';
                            JSZ34u7NF += (997 - 996);
                        }
                        DxMOpXn0 = (1649 - 684) - (1031 - 67);
                    }
                }
                if (JnTmfRS5UBj < JSZ34u7NF) {
                    mDctIq1 = DFbLTas[SYkhbwMxuW5D];
                    JnTmfRS5UBj = JSZ34u7NF;
                }
            }
            SYkhbwMxuW5D = (1169 - 354) - (1659 - 845);
        }
    }
    printf ("%c\n%d", mDctIq1, JnTmfRS5UBj +(775 - 774));
    oTJ6hkzX80 = u9tuj2UDxBpa;
    do {
        tK6Gzlenu = strlen (oTJ6hkzX80->rTUhn32Do7);
        {
            SYkhbwMxuW5D = (616 - 616);
            for (; tK6Gzlenu > SYkhbwMxuW5D;) {
                if (!(mDctIq1 != (oTJ6hkzX80->rTUhn32Do7[SYkhbwMxuW5D]))) {
                    printf ("\n%d", oTJ6hkzX80->kgGHOQ9);
                }
                SYkhbwMxuW5D = SYkhbwMxuW5D +(738 - 737);
            }
        }
        oTJ6hkzX80 = oTJ6hkzX80->PtNG8R;
    }
    while (oTJ6hkzX80 != NULL);
}

