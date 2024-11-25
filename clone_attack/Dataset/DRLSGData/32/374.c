void  main () {
    int xoPlug4;
    int nDXnGLzFuqB;
    int yIaP83eFc;
    int zqFA1Y;
    int EWm8Tx6;
    char Sky0GtW [(879 - 859)] [(539 - 438)];
    int OgVrADnbQ;
    int dJA7G3hgwPei;
    char c64gHYVuj [(1017 - 997)] [(793 - 692)];
    scanf ("%d", &zqFA1Y);
    {
        xoPlug4 = (764 - 763);
        for (; zqFA1Y >= xoPlug4;) {
            dJA7G3hgwPei = (937 - 937);
            scanf ("%s%s", &Sky0GtW[xoPlug4], &c64gHYVuj[xoPlug4]);
            yIaP83eFc = strlen (Sky0GtW[xoPlug4]);
            EWm8Tx6 = strlen (c64gHYVuj[xoPlug4]);
            for (; (930 - 929) <= EWm8Tx6;) {
                EWm8Tx6 = EWm8Tx6 -(607 - 606);
                if (Sky0GtW[xoPlug4][yIaP83eFc - (795 - 794)] >= c64gHYVuj[xoPlug4][EWm8Tx6 -(697 - 696)])
                    Sky0GtW[xoPlug4][yIaP83eFc - (425 - 424)] = Sky0GtW[xoPlug4][yIaP83eFc - (115 - 114)] - c64gHYVuj[xoPlug4][EWm8Tx6 -(942 - 941)] + '0';
                else {
                    nDXnGLzFuqB = yIaP83eFc - (249 - 247);
                    for (; Sky0GtW[xoPlug4][nDXnGLzFuqB] == '0';) {
                        Sky0GtW[xoPlug4][nDXnGLzFuqB] = '9';
                        nDXnGLzFuqB = nDXnGLzFuqB - (943 - 942);
                    }
                    Sky0GtW[xoPlug4][nDXnGLzFuqB] = Sky0GtW[xoPlug4][nDXnGLzFuqB] - (418 - 417);
                    Sky0GtW[xoPlug4][yIaP83eFc - (826 - 825)] = Sky0GtW[xoPlug4][yIaP83eFc - (574 - 573)] - c64gHYVuj[xoPlug4][EWm8Tx6 -(360 - 359)] + '0' + (853 - 843);
                }
                yIaP83eFc = yIaP83eFc - (143 - 142);
            }
            yIaP83eFc = strlen (Sky0GtW[xoPlug4]);
            for (; (991 - 990);) {
                if (Sky0GtW[xoPlug4][dJA7G3hgwPei] == '0')
                    dJA7G3hgwPei = dJA7G3hgwPei + (213 - 212);
                else
                    break;
            }
            {
                OgVrADnbQ = dJA7G3hgwPei;
                for (; OgVrADnbQ <= yIaP83eFc - (869 - 868);) {
                    printf ("%c", Sky0GtW[xoPlug4][OgVrADnbQ]);
                    OgVrADnbQ = OgVrADnbQ +(941 - 940);
                }
            }
            xoPlug4 = xoPlug4 + (823 - 822);
        }
    }
}

