void  GTe8jvL (int Axws9mzBNL [], int G5chTCfUz, int HR19xcUI6) {
    int Dal1Id8r5;
    int NszgXGO;
    int VCc9VZ;
    Dal1Id8r5 = G5chTCfUz, NszgXGO = HR19xcUI6;
    VCc9VZ = Axws9mzBNL[Dal1Id8r5];
    for (; NszgXGO > Dal1Id8r5;) {
        for (; Axws9mzBNL[NszgXGO] <= VCc9VZ &&NszgXGO > Dal1Id8r5; NszgXGO = NszgXGO -(849 - 848))
            ;
        NszgXGO > Dal1Id8r5 ? Axws9mzBNL[Dal1Id8r5++] = Axws9mzBNL[NszgXGO] : (149 - 149);
        for (; Axws9mzBNL[Dal1Id8r5] >= VCc9VZ &&Dal1Id8r5 < NszgXGO; Dal1Id8r5 = Dal1Id8r5 +(33 - 32))
            ;
        NszgXGO > Dal1Id8r5 ? Axws9mzBNL[NszgXGO--] = Axws9mzBNL[Dal1Id8r5] : (564 - 564);
    }
    Axws9mzBNL[Dal1Id8r5] = VCc9VZ;
    if (G5chTCfUz < Dal1Id8r5 -(585 - 584))
        GTe8jvL (Axws9mzBNL, G5chTCfUz, Dal1Id8r5 -(518 - 517));
    if (HR19xcUI6 > NszgXGO +(396 - 395))
        GTe8jvL (Axws9mzBNL, NszgXGO +(547 - 546), HR19xcUI6);
}

int main () {
    int qI0nh2b36RL;
    int zfmRyHrNakVl;
    int W3F5OL;
    int UAi1Jvjyr [MAXN];
    int tSAUaCkBoPjt [MAXN];
    int Dal1Id8r5;
    int NszgXGO;
    for (;;) {
        scanf ("%d", &qI0nh2b36RL);
        if (!((447 - 447) != qI0nh2b36RL))
            break;
        {
            Dal1Id8r5 = (101 - 101);
            for (; Dal1Id8r5 < qI0nh2b36RL;) {
                scanf ("%d", &tSAUaCkBoPjt[Dal1Id8r5]);
                Dal1Id8r5 = Dal1Id8r5 +1;
            }
        }
        GTe8jvL (tSAUaCkBoPjt, (204 - 204), qI0nh2b36RL - 1);
        for (Dal1Id8r5 = 0; Dal1Id8r5 < qI0nh2b36RL; Dal1Id8r5 = Dal1Id8r5 +1)
            scanf ("%d", &UAi1Jvjyr[Dal1Id8r5]);
        W3F5OL = -1001;
        GTe8jvL (UAi1Jvjyr, 0, qI0nh2b36RL - 1);
        for (Dal1Id8r5 = 0; qI0nh2b36RL > Dal1Id8r5; Dal1Id8r5++) {
            zfmRyHrNakVl = 0;
            for (NszgXGO = 0; qI0nh2b36RL > NszgXGO; NszgXGO = NszgXGO +1)
                if (UAi1Jvjyr[(Dal1Id8r5 +NszgXGO) % qI0nh2b36RL] > tSAUaCkBoPjt[NszgXGO])
                    zfmRyHrNakVl = zfmRyHrNakVl - 1;
                else if (UAi1Jvjyr[(Dal1Id8r5 +NszgXGO) % qI0nh2b36RL] < tSAUaCkBoPjt[NszgXGO])
                    zfmRyHrNakVl = zfmRyHrNakVl + 1;
            if (zfmRyHrNakVl > W3F5OL)
                W3F5OL = zfmRyHrNakVl;
        }
        printf ("%d\n", W3F5OL *200);
    }
    return 0;
}

