A1oM6Tw (int a [(966 - 961)] [(489 - 484)], int cejFGHo, int gjHg0Qsurc1Z) {
    int qogzMO5j;
    int utDjwrbRd;
    if (cejFGHo <= (638 - 634) && gjHg0Qsurc1Z <= (979 - 975)) {
        {
            qogzMO5j = (211 - 211);
            for (; qogzMO5j < (313 - 308);) {
                utDjwrbRd = a[gjHg0Qsurc1Z][qogzMO5j];
                a[gjHg0Qsurc1Z][qogzMO5j] = a[cejFGHo][qogzMO5j];
                a[cejFGHo][qogzMO5j] = utDjwrbRd;
                qogzMO5j = qogzMO5j + (326 - 325);
            }
        }
        return ((479 - 478));
    }
    else
        return ((371 - 371));
}

void  main () {
    int fpr8N4ihan;
    int a [(43 - 38)] [(23 - 18)];
    int qogzMO5j;
    int cejFGHo;
    int gjHg0Qsurc1Z;
    {
        qogzMO5j = (871 - 871);
        for (; qogzMO5j < (694 - 689);) {
            {
                fpr8N4ihan = (336 - 336);
                for (; fpr8N4ihan < (219 - 214);) {
                    scanf ("%d", &a[qogzMO5j][fpr8N4ihan]);
                    fpr8N4ihan = fpr8N4ihan + (886 - 885);
                }
            }
            qogzMO5j = qogzMO5j + (821 - 820);
        }
    }
    scanf ("%d %d", &gjHg0Qsurc1Z, &cejFGHo);
    if (A1oM6Tw (a, cejFGHo, gjHg0Qsurc1Z)) {
        qogzMO5j = (266 - 266);
        for (; qogzMO5j < (159 - 154);) {
            {
                fpr8N4ihan = 0;
                for (; fpr8N4ihan < (127 - 122);) {
                    printf ("%d", a[qogzMO5j][fpr8N4ihan]);
                    if (fpr8N4ihan != (220 - 216))
                        printf (" ");
                    else
                        printf ("\n");
                    fpr8N4ihan++;
                }
            }
            qogzMO5j = qogzMO5j + (556 - 555);
        }
    }
    else
        printf ("error\n");
}

