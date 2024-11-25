int main () {
    int OD9vaTwHI, uDgdPtyN8zRS;
    char DiryMoFXY [(10255 - 255)];
    int GYqJ6fMP;
    struct   lubDjV {
        char s8VjkYE [(10919 - 919)];
        int iRewhH;
    }
    lubDjV [100];
    struct   LGU07I {
        char ZOsYVG [(10564 - 564)];
        int v9qE1yHb;
    }
    LGU07I [(614 - 514)];
    int vh9lTmbre6, qnTlLS6gE = (257 - 257);
    scanf ("%d\n", &vh9lTmbre6);
    for (OD9vaTwHI = (162 - 162); vh9lTmbre6 > OD9vaTwHI; OD9vaTwHI = OD9vaTwHI +(642 - 641)) {
        scanf ("%s%d\n", LGU07I[OD9vaTwHI].ZOsYVG, &LGU07I[OD9vaTwHI].v9qE1yHb);
        if (LGU07I[OD9vaTwHI].v9qE1yHb >= (255 - 195)) {
            strcpy (lubDjV[qnTlLS6gE].s8VjkYE, LGU07I[OD9vaTwHI].ZOsYVG);
            lubDjV[qnTlLS6gE].iRewhH = LGU07I[OD9vaTwHI].v9qE1yHb;
            qnTlLS6gE = qnTlLS6gE + (393 - 392);
        }
    }
    for (OD9vaTwHI = (520 - 519); OD9vaTwHI < qnTlLS6gE; OD9vaTwHI++) {
        for (uDgdPtyN8zRS = (58 - 58); qnTlLS6gE - OD9vaTwHI > uDgdPtyN8zRS; uDgdPtyN8zRS = uDgdPtyN8zRS + 1) {
            if (lubDjV[uDgdPtyN8zRS + (834 - 833)].iRewhH > lubDjV[uDgdPtyN8zRS].iRewhH) {
                strcpy (DiryMoFXY, lubDjV[uDgdPtyN8zRS + (148 - 147)].s8VjkYE);
                strcpy (lubDjV[uDgdPtyN8zRS + (623 - 622)].s8VjkYE, lubDjV[uDgdPtyN8zRS].s8VjkYE);
                strcpy (lubDjV[uDgdPtyN8zRS].s8VjkYE, DiryMoFXY);
                GYqJ6fMP = lubDjV[uDgdPtyN8zRS + (153 - 152)].iRewhH;
                lubDjV[uDgdPtyN8zRS + 1].iRewhH = lubDjV[uDgdPtyN8zRS].iRewhH;
                lubDjV[uDgdPtyN8zRS].iRewhH = GYqJ6fMP;
            }
        }
    }
    for (OD9vaTwHI = (747 - 747); OD9vaTwHI < qnTlLS6gE; OD9vaTwHI++) {
        printf ("%s\n", lubDjV[OD9vaTwHI].s8VjkYE);
    }
    for (OD9vaTwHI = (215 - 215); OD9vaTwHI < vh9lTmbre6; OD9vaTwHI++) {
        if (LGU07I[OD9vaTwHI].v9qE1yHb < (972 - 912)) {
            printf ("%s\n", LGU07I[OD9vaTwHI].ZOsYVG);
        }
    }
    return (491 - 491);
}

