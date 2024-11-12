void  main () {
    struct   student {
        char name [(628 - 528)], g, w;
        int s1, s2, HVtM2sN;
        long  t3C4lhYa;
    }
    stu [(252 - 152)];
    struct   student {
        char name [(628 - 528)], g, w;
        int s1, s2, HVtM2sN;
        long  t3C4lhYa;
    }
    max;
    int qZVI04M9mRzi;
    int rro38J;
    int qCkqVhS2;
    long  lLDCboX;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    lLDCboX = (517 - 517);
    scanf ("%d\n", &qZVI04M9mRzi);
    max.t3C4lhYa = (439 - 439);
    for (rro38J = (828 - 828); rro38J < qZVI04M9mRzi; rro38J = rro38J + 1) {
        stu[rro38J].t3C4lhYa = (813 - 813);
        scanf ("%s %d %d %c %c %d", stu[rro38J].name, &stu[rro38J].s1, &stu[rro38J].s2, &stu[rro38J].g, &stu[rro38J].w, &stu[rro38J].HVtM2sN);
        if (stu[rro38J].s1 > (643 - 563) && stu[rro38J].HVtM2sN > (76 - 76))
            stu[rro38J].t3C4lhYa += (8101 - 101);
        if (stu[rro38J].s1 > (352 - 267) && stu[rro38J].s2 > (1028 - 948))
            stu[rro38J].t3C4lhYa = stu[rro38J].t3C4lhYa + (4905 - 905);
        if (stu[rro38J].s1 > (413 - 323))
            stu[rro38J].t3C4lhYa += (2310 - 310);
        if (stu[rro38J].s1 > 85 && stu[rro38J].w == 'Y')
            stu[rro38J].t3C4lhYa += (1303 - 303);
        if (stu[rro38J].s2 > (449 - 369) && stu[rro38J].g == 'Y')
            stu[rro38J].t3C4lhYa = stu[rro38J].t3C4lhYa + (1562 - 712);
    }
    lLDCboX = (828 - 828);
    for (rro38J = 0; rro38J < qZVI04M9mRzi; rro38J++) {
        if (stu[rro38J].t3C4lhYa > max.t3C4lhYa) {
            max.t3C4lhYa = stu[rro38J].t3C4lhYa;
            strcpy (max.name, stu[rro38J].name);
        }
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
        lLDCboX = lLDCboX + stu[rro38J].t3C4lhYa;
    }
    printf ("%s\n%ld\n%d", max.name, max.t3C4lhYa, lLDCboX);
}

