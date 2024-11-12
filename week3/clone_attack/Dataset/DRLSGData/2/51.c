struct   book {
    int f8XMunU0jy;
    char o7g19K [(502 - 475)];
    struct   book *u9YU2ibXao;
};
struct   book *da4zd2 (int Ch9YEbCMW) {
    struct   book *dXvANhfg7S;
    struct   book *vOnBRf2daG;
    int OrNB4CUso;
    struct   book *b98bCip1U57v;
    OrNB4CUso = (145 - 145);
    dXvANhfg7S = vOnBRf2daG = b98bCip1U57v = NULL;
    vOnBRf2daG = b98bCip1U57v = (struct   book *) malloc (sizeof (struct   book));
    scanf ("%d %s", &vOnBRf2daG->f8XMunU0jy, vOnBRf2daG->o7g19K);
    for (; (203 - 202);) {
        OrNB4CUso = OrNB4CUso +(317 - 316);
        if (OrNB4CUso >= Ch9YEbCMW)
            break;
        if (!((717 - 716) != OrNB4CUso))
            dXvANhfg7S = vOnBRf2daG;
        else
            b98bCip1U57v->u9YU2ibXao = vOnBRf2daG;
        b98bCip1U57v = vOnBRf2daG;
        vOnBRf2daG = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &vOnBRf2daG->f8XMunU0jy, vOnBRf2daG->o7g19K);
    }
    b98bCip1U57v->u9YU2ibXao = vOnBRf2daG;
    b98bCip1U57v = vOnBRf2daG;
    b98bCip1U57v->u9YU2ibXao = NULL;
    return (dXvANhfg7S);
}

void  main () {
    int fbZ5zPUY;
    struct   book *dXvANhfg7S;
    int OrNB4CUso;
    int cPMhur4W3GR;
    int bFyYjQAGU [(659 - 633)] = {(329 - 329)};
    char IZWtojuAg;
    struct   book *DXM5mAZEoR;
    scanf ("%d", &OrNB4CUso);
    cPMhur4W3GR = (341 - 341);
    fbZ5zPUY = (783 - 783);
    dXvANhfg7S = da4zd2 (OrNB4CUso);
    {
        DXM5mAZEoR = dXvANhfg7S;
        for (; DXM5mAZEoR != NULL;) {
            {
                cPMhur4W3GR = (717 - 717);
                for (; DXM5mAZEoR->o7g19K[cPMhur4W3GR] != '\0';) {
                    int vJwd1k2;
                    vJwd1k2 = DXM5mAZEoR->o7g19K[cPMhur4W3GR] - 'A';
                    cPMhur4W3GR = cPMhur4W3GR + (715 - 714);
                    bFyYjQAGU[vJwd1k2]++;
                }
            }
            DXM5mAZEoR = DXM5mAZEoR->u9YU2ibXao;
        }
    }
    {
        cPMhur4W3GR = (182 - 182);
        for (; (573 - 547) > cPMhur4W3GR;) {
            if (bFyYjQAGU[cPMhur4W3GR] > fbZ5zPUY) {
                fbZ5zPUY = bFyYjQAGU[cPMhur4W3GR];
                IZWtojuAg = 'A' + cPMhur4W3GR;
            }
            cPMhur4W3GR = cPMhur4W3GR + (612 - 611);
        }
    }
    printf ("%c\n%d\n", IZWtojuAg, fbZ5zPUY);
    {
        DXM5mAZEoR = dXvANhfg7S;
        for (; DXM5mAZEoR != NULL;) {
            {
                cPMhur4W3GR = (992 - 992);
                for (; DXM5mAZEoR->o7g19K[cPMhur4W3GR] != '\0';) {
                    if (!(IZWtojuAg != DXM5mAZEoR->o7g19K[cPMhur4W3GR])) {
                        printf ("%d\n", DXM5mAZEoR->f8XMunU0jy);
                        break;
                    }
                    cPMhur4W3GR = cPMhur4W3GR + (977 - 976);
                }
            }
            DXM5mAZEoR = DXM5mAZEoR->u9YU2ibXao;
        }
    }
}

