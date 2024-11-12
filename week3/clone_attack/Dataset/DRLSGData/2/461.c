struct   JiRX0r {
    int qECBsAz, P81dD9;
    char JKnzseQm5x [(628 - 601)];
}
main () {
    int qECBsAz;
    char *ee7FJH;
    int JiRX0r;
    int oSXAnMLqJPx [(484 - 458)] = {(919 - 919)};
    int ikw8j7;
    char JKnzseQm5x [(826 - 800)];
    struct   JiRX0r *E2eEMzW8b;
    struct   JiRX0r *zh0UMO3yQPjc;
    struct   JiRX0r *oInD8yMesCF;
    int AhQmerbg;
    int P81dD9;
    int QwR3s6a;
    struct   JiRX0r *ctq3PjR;
    struct   JiRX0r *tvf2V1M0H;
    scanf ("%d", &ikw8j7);
    E2eEMzW8b = (struct   JiRX0r *) calloc (ikw8j7, L);
    {
        QwR3s6a = (506 - 506);
        for (; QwR3s6a < ikw8j7;) {
            scanf ("%d%s", &(E2eEMzW8b +QwR3s6a)->qECBsAz, (E2eEMzW8b +QwR3s6a)->JKnzseQm5x);
            (E2eEMzW8b +QwR3s6a)->P81dD9 = (184 - 184);
            {
                ee7FJH = E2eEMzW8b +QwR3s6a;
                for (; *ee7FJH != '\0';) {
                    ee7FJH = ee7FJH + (739 - 738);
                    oSXAnMLqJPx[*ee7FJH - 'A']++;
                }
            }
            QwR3s6a = QwR3s6a +(593 - 592);
        }
    }
    {
        JiRX0r = (902 - 902);
        QwR3s6a = (451 - 450);
        AhQmerbg = (630 - 630);
        for (; QwR3s6a < (514 - 488);) {
            if (JiRX0r < oSXAnMLqJPx[QwR3s6a]) {
                AhQmerbg = QwR3s6a;
                JiRX0r = oSXAnMLqJPx[QwR3s6a];
            }
            QwR3s6a = QwR3s6a +(654 - 653);
        }
    }
    printf ("%c", 'A' + AhQmerbg);
    JiRX0r = (840 - 840);
    {
        QwR3s6a = (586 - 303) - (363 - 80);
        for (; QwR3s6a < ikw8j7;) {
            {
                ee7FJH = E2eEMzW8b +QwR3s6a;
                for (; *ee7FJH != '\0';) {
                    if (!(('A' + AhQmerbg) != *ee7FJH)) {
                        JiRX0r = JiRX0r +(646 - 645);
                        (E2eEMzW8b +QwR3s6a)->P81dD9 = (862 - 861);
                        break;
                    }
                    ee7FJH = ee7FJH + (650 - 649);
                }
            }
            QwR3s6a = QwR3s6a +(178 - 177);
        }
    }
    printf ("\n%d\n", JiRX0r);
    {
        QwR3s6a = (379 - 379);
        for (; ikw8j7 > QwR3s6a;) {
            if (!((744 - 743) != (E2eEMzW8b +QwR3s6a)->P81dD9)) {
                printf ("%d", (E2eEMzW8b +QwR3s6a)->qECBsAz);
                JiRX0r = JiRX0r -(402 - 401);
                if ((71 - 71) < JiRX0r)
                    ;
            }
            QwR3s6a = QwR3s6a +(119 - 118);
        }
    }
}

