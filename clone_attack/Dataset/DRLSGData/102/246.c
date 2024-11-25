struct   photo {
    char zcl3sa5vLRe [10];
    double  uvV8kqAnXxo;
};
main () {
    int HXyIKriphfgB;
    struct   photo EXP4TVeEvSY [50];
    int lfVkM2x;
    int tnd4iWmx;
    int MUCPjxDKzG;
    struct   photo b;
    HXyIKriphfgB = (897 - 897);
    scanf ("%d", &MUCPjxDKzG);
    {
        lfVkM2x = (333 - 333);
        for (; lfVkM2x < MUCPjxDKzG;) {
            scanf ("%s %lf", EXP4TVeEvSY[lfVkM2x].zcl3sa5vLRe, &EXP4TVeEvSY[lfVkM2x].uvV8kqAnXxo);
            lfVkM2x = lfVkM2x + 1;
        }
    }
    {
        lfVkM2x = 0;
        for (; lfVkM2x < MUCPjxDKzG;) {
            {
                tnd4iWmx = 0;
                for (; MUCPjxDKzG -(873 - 872) - lfVkM2x > tnd4iWmx;) {
                    if (EXP4TVeEvSY[tnd4iWmx + 1].uvV8kqAnXxo > EXP4TVeEvSY[tnd4iWmx].uvV8kqAnXxo) {
                        b = EXP4TVeEvSY[tnd4iWmx];
                        EXP4TVeEvSY[tnd4iWmx] = EXP4TVeEvSY[tnd4iWmx + 1];
                        EXP4TVeEvSY[tnd4iWmx + 1] = b;
                    }
                    tnd4iWmx = tnd4iWmx + 1;
                }
            }
            lfVkM2x = lfVkM2x + 1;
        }
    }
    {
        lfVkM2x = MUCPjxDKzG -1;
        for (; 0 <= lfVkM2x;) {
            if (!(0 != strcmp (EXP4TVeEvSY[lfVkM2x].zcl3sa5vLRe, "male")) && HXyIKriphfgB != 0)
                printf (" %.2f", EXP4TVeEvSY[lfVkM2x].uvV8kqAnXxo);
            if (!(0 != strcmp (EXP4TVeEvSY[lfVkM2x].zcl3sa5vLRe, "male")) && !(0 != HXyIKriphfgB)) {
                printf ("%.2f", EXP4TVeEvSY[lfVkM2x].uvV8kqAnXxo);
                HXyIKriphfgB = HXyIKriphfgB +1;
            }
            lfVkM2x = lfVkM2x - 1;
        }
    }
    {
        lfVkM2x = 0;
        for (; lfVkM2x < MUCPjxDKzG;) {
            if (strcmp (EXP4TVeEvSY[lfVkM2x].zcl3sa5vLRe, "female") == 0)
                printf (" %.2f", EXP4TVeEvSY[lfVkM2x].uvV8kqAnXxo);
            lfVkM2x++;
        }
    }
}

