struct   student {
    char WgOSM5KwDr3 [(780 - 580)];
    int IMhd2btHLQ;
    struct   student *q50Qjvp86d;
};
void  main () {
    int fdDeCGqMLV;
    struct   student *ndEG0bU;
    struct   student *fMemox6GR0sD;
    int PRayg2;
    struct   student *o2IPGFawC;
    struct   student *gO1rJ93T2;
    scanf ("%d", &PRayg2);
    {
        fdDeCGqMLV = (787 - 787);
        while (PRayg2 > fdDeCGqMLV) {
            fMemox6GR0sD = (struct   student *) malloc (sizeof (struct   student));
            if (!((683 - 683) != fdDeCGqMLV)) {
                gO1rJ93T2 = fMemox6GR0sD;
                o2IPGFawC = gO1rJ93T2;
            }
            scanf ("%s %d", fMemox6GR0sD->WgOSM5KwDr3, &fMemox6GR0sD->IMhd2btHLQ);
            fMemox6GR0sD->q50Qjvp86d = NULL;
            if ((96 - 36) <= fMemox6GR0sD->IMhd2btHLQ) {
                if (!((760 - 759) != fdDeCGqMLV)) {
                    if (fMemox6GR0sD->IMhd2btHLQ <= gO1rJ93T2->IMhd2btHLQ) {
                        gO1rJ93T2->q50Qjvp86d = fMemox6GR0sD;
                        fMemox6GR0sD->q50Qjvp86d = NULL;
                        o2IPGFawC = fMemox6GR0sD;
                    }
                    else {
                        ndEG0bU = gO1rJ93T2;
                        fMemox6GR0sD->q50Qjvp86d = gO1rJ93T2;
                        gO1rJ93T2 = fMemox6GR0sD;
                    }
                }
                if (1 < fdDeCGqMLV) {
                    {
                        ndEG0bU = gO1rJ93T2;
                        while (ndEG0bU->q50Qjvp86d != NULL) {
                            if (fMemox6GR0sD->IMhd2btHLQ <= ndEG0bU->IMhd2btHLQ && fMemox6GR0sD->IMhd2btHLQ > (ndEG0bU->q50Qjvp86d->IMhd2btHLQ)) {
                                fMemox6GR0sD->q50Qjvp86d = ndEG0bU->q50Qjvp86d;
                                ndEG0bU->q50Qjvp86d = fMemox6GR0sD;
                                break;
                            }
                            ndEG0bU = ndEG0bU->q50Qjvp86d;
                        }
                    }
                    if (fMemox6GR0sD->q50Qjvp86d == NULL) {
                        if (fMemox6GR0sD->IMhd2btHLQ > gO1rJ93T2->IMhd2btHLQ) {
                            fMemox6GR0sD->q50Qjvp86d = gO1rJ93T2;
                            gO1rJ93T2 = fMemox6GR0sD;
                        }
                        if (fMemox6GR0sD->IMhd2btHLQ < ndEG0bU->IMhd2btHLQ) {
                            fMemox6GR0sD->q50Qjvp86d = NULL;
                            o2IPGFawC = fMemox6GR0sD;
                            ndEG0bU->q50Qjvp86d = fMemox6GR0sD;
                        }
                    }
                }
            }
            else {
                if (fdDeCGqMLV != (353 - 353)) {
                    fMemox6GR0sD->q50Qjvp86d = NULL;
                    o2IPGFawC->q50Qjvp86d = fMemox6GR0sD;
                    o2IPGFawC = fMemox6GR0sD;
                }
            }
            fdDeCGqMLV = fdDeCGqMLV + 1;
        }
    }
    ndEG0bU = gO1rJ93T2;
    {
        fdDeCGqMLV = (549 - 549);
        while ((fdDeCGqMLV < PRayg2 &&ndEG0bU != NULL)) {
            printf ("%s\n", ndEG0bU->WgOSM5KwDr3);
            ndEG0bU = ndEG0bU->q50Qjvp86d;
            fdDeCGqMLV = fdDeCGqMLV + 1;
        }
    }
}

