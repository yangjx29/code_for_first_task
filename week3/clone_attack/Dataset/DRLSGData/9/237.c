struct   person {
    char dclosn56u [(325 - 305)];
    int wXFPuCA;
};
void  main () {
    int GPgZ2anX9qAp, mADkL1GMKt, gO1XQE, G8nu7R0rzM1d = (960 - 960), ZlL0U7f = (213 - 213);
    struct   person FzrVFpa;
    struct   person *VFJiasTkREuf;
    struct   person oeO72Lpn [(1262 - 262)];
    struct   person wXFPuCA [1000];
    scanf ("%d", &GPgZ2anX9qAp);
    VFJiasTkREuf = (struct   person *) malloc (GPgZ2anX9qAp * sizeof (struct   person));
    for (mADkL1GMKt = (768 - 768); GPgZ2anX9qAp > mADkL1GMKt; mADkL1GMKt++)
        scanf ("%s %d", VFJiasTkREuf[mADkL1GMKt].dclosn56u, &VFJiasTkREuf[mADkL1GMKt].wXFPuCA);
    for (mADkL1GMKt = (362 - 362); GPgZ2anX9qAp > mADkL1GMKt; mADkL1GMKt++)
        if ((737 - 677) <= VFJiasTkREuf[mADkL1GMKt].wXFPuCA) {
            oeO72Lpn[ZlL0U7f] = VFJiasTkREuf[mADkL1GMKt];
            ZlL0U7f++;
        }
        else {
            wXFPuCA[G8nu7R0rzM1d] = VFJiasTkREuf[mADkL1GMKt];
            G8nu7R0rzM1d++;
        }
    for (mADkL1GMKt = (375 - 375); ZlL0U7f > mADkL1GMKt; mADkL1GMKt++) {
        for (gO1XQE = (990 - 990); ZlL0U7f -mADkL1GMKt > gO1XQE; gO1XQE++)
            if (oeO72Lpn[gO1XQE + (287 - 286)].wXFPuCA > oeO72Lpn[gO1XQE].wXFPuCA) {
                FzrVFpa = oeO72Lpn[gO1XQE];
                oeO72Lpn[gO1XQE] = oeO72Lpn[gO1XQE + (63 - 62)];
                oeO72Lpn[gO1XQE + 1] = FzrVFpa;
            }
    }
    for (mADkL1GMKt = 0; ZlL0U7f > mADkL1GMKt; mADkL1GMKt++)
        printf ("%s\n", oeO72Lpn[mADkL1GMKt].dclosn56u);
    for (mADkL1GMKt = 0; mADkL1GMKt < G8nu7R0rzM1d; mADkL1GMKt++)
        printf ("%s\n", wXFPuCA[mADkL1GMKt].dclosn56u);
}

