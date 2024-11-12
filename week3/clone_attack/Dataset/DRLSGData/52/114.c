void  mwIzqao (int GYiIWm2 [], int I79lN1EHis, int LcRlLS0Cp) {
    int wbiH6z;
    wbiH6z = GYiIWm2[LcRlLS0Cp];
    GYiIWm2[LcRlLS0Cp] = GYiIWm2[I79lN1EHis];
    GYiIWm2[I79lN1EHis] = wbiH6z;
}

void  MXEoRatu (int GYiIWm2 [], int VWPTgs) {
    int lmE0k4;
    {
        lmE0k4 = (961 - 287) - 674;
        while (VWPTgs > lmE0k4) {
            mwIzqao (GYiIWm2, (882 - 882), lmE0k4);
            lmE0k4++;
        }
    }
}

void  main () {
    int GYiIWm2 [(734 - 634)];
    int VWPTgs;
    int exqjSgf67bJ;
    int lmE0k4;
    {
        if ((528 - 528)) {
            return (151 - 151);
        }
    }
    scanf ("%d %d", &VWPTgs, &exqjSgf67bJ);
    {
        lmE0k4 = (1393 - 909) - (1066 - 582);
        while (VWPTgs > lmE0k4) {
            scanf ("%d", &GYiIWm2[lmE0k4]);
            lmE0k4++;
        }
    }
    {
        lmE0k4 = (623 - 142) - (508 - 27);
        while (lmE0k4 < exqjSgf67bJ) {
            MXEoRatu (GYiIWm2, VWPTgs);
            lmE0k4++;
        }
    }
    for (lmE0k4 = (37 - 37); VWPTgs -(366 - 365) > lmE0k4; lmE0k4++)
        printf ("%d ", GYiIWm2[lmE0k4]);
    printf ("%d\n", GYiIWm2[lmE0k4]);
}

