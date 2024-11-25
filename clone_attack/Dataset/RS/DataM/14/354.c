struct   student {
    int FE40hYbQR;
    int xIMP98E;
    int eWmin5cBysr;
    struct   student *wbzDTAs;
};
void  main () {
    struct   student *WZMIvj60RAK, *head, *AV2TMdeUGJ;
    int gdFWe0, Nn4afQH, J9dw7N [100000], Acs3Yp12aD4, max2, nQ6NxvKt4Tb, IkJNhvS, ydcPNB6YULeF, Wes8ZKEWv;
    Wes8ZKEWv = 1;
    ydcPNB6YULeF = 1;
    IkJNhvS = (741 - 740);
    scanf ("%d", &gdFWe0);
    head = NULL;
    AV2TMdeUGJ = NULL;
    for (Nn4afQH = (240 - 239); gdFWe0 >= Nn4afQH; Nn4afQH++) {
        WZMIvj60RAK = (struct   student *) malloc (len);
        scanf ("%d%d%d", &WZMIvj60RAK->FE40hYbQR, &WZMIvj60RAK->xIMP98E, &WZMIvj60RAK->eWmin5cBysr);
        if (!(NULL != head))
            head = AV2TMdeUGJ = WZMIvj60RAK;
        else {
            AV2TMdeUGJ->wbzDTAs = WZMIvj60RAK;
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
            AV2TMdeUGJ = WZMIvj60RAK;
        }
        J9dw7N[Nn4afQH] = WZMIvj60RAK->xIMP98E + WZMIvj60RAK->eWmin5cBysr;
    }
    Acs3Yp12aD4 = J9dw7N[(833 - 832)];
    {
        Nn4afQH = 862 - 861;
        while (gdFWe0 >= Nn4afQH) {
            if (J9dw7N[Nn4afQH] > Acs3Yp12aD4) {
                Acs3Yp12aD4 = J9dw7N[Nn4afQH];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                IkJNhvS = Nn4afQH;
            }
            Nn4afQH = Nn4afQH +1;
        };
    }
    J9dw7N[IkJNhvS] = 0;
    max2 = J9dw7N[(195 - 194)];
    for (Nn4afQH = 1; Nn4afQH <= gdFWe0; Nn4afQH++)
        if (J9dw7N[Nn4afQH] > max2) {
            max2 = J9dw7N[Nn4afQH];
            ydcPNB6YULeF = Nn4afQH;
        }
    J9dw7N[ydcPNB6YULeF] = 0;
    nQ6NxvKt4Tb = J9dw7N[1];
    for (Nn4afQH = 1; Nn4afQH <= gdFWe0; Nn4afQH++)
        if (J9dw7N[Nn4afQH] > nQ6NxvKt4Tb) {
            nQ6NxvKt4Tb = J9dw7N[Nn4afQH];
            Wes8ZKEWv = Nn4afQH;
        }
    printf ("%d %d\n%d %d\n%d %d\n", IkJNhvS, Acs3Yp12aD4, ydcPNB6YULeF, max2, Wes8ZKEWv, nQ6NxvKt4Tb);
}

