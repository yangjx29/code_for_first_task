void  GT5PvkfI (int [], int);
int TAtiT5bXnLr (int [], int [], int);

void  main () {
    int RD4B6whK0;
    int aPI5RbzVj [100] [1000];
    int INgUbtOPe [100];
    int LMCj9i [100] [1000];
    int YS4HTvkzqRA = 0;
    scanf ("%d", &INgUbtOPe[YS4HTvkzqRA]);
    do {
        {
            RD4B6whK0 = 0;
            while (INgUbtOPe[YS4HTvkzqRA] > RD4B6whK0) {
                scanf ("%d", &LMCj9i[YS4HTvkzqRA][RD4B6whK0]);
                RD4B6whK0 = RD4B6whK0 +1;
            }
        }
        {
            RD4B6whK0 = 0;
            while (INgUbtOPe[YS4HTvkzqRA] > RD4B6whK0) {
                scanf ("%d", &aPI5RbzVj[YS4HTvkzqRA][RD4B6whK0]);
                RD4B6whK0++;
            }
        }
        YS4HTvkzqRA++;
        scanf ("%d", &INgUbtOPe[YS4HTvkzqRA]);
    }
    while (INgUbtOPe[YS4HTvkzqRA] != 0);
    {
        RD4B6whK0 = 0;
        while (YS4HTvkzqRA > RD4B6whK0) {
            GT5PvkfI (LMCj9i[RD4B6whK0], INgUbtOPe[RD4B6whK0]);
            GT5PvkfI (aPI5RbzVj[RD4B6whK0], INgUbtOPe[RD4B6whK0]);
            RD4B6whK0++;
        }
    }
    {
        RD4B6whK0 = 0;
        while (RD4B6whK0 < YS4HTvkzqRA) {
            printf ("%d\n", TAtiT5bXnLr (LMCj9i[RD4B6whK0], aPI5RbzVj[RD4B6whK0], INgUbtOPe[RD4B6whK0]));
            RD4B6whK0++;
        }
    }
}

void  GT5PvkfI (int jW3SHenL8O [], int hUtmu3g7) {
    int RD4B6whK0, uqaLrIcsM, WQSAxEzhkcT;
    for (RD4B6whK0 = 1; hUtmu3g7 > RD4B6whK0; RD4B6whK0++) {
        uqaLrIcsM = RD4B6whK0 -1;
        WQSAxEzhkcT = jW3SHenL8O[RD4B6whK0];
        for (; 0 <= uqaLrIcsM && WQSAxEzhkcT > jW3SHenL8O[uqaLrIcsM];) {
            jW3SHenL8O[uqaLrIcsM + 1] = jW3SHenL8O[uqaLrIcsM];
            uqaLrIcsM = uqaLrIcsM - 1;
        }
        jW3SHenL8O[uqaLrIcsM + 1] = WQSAxEzhkcT;
    }
}

int TAtiT5bXnLr (int hBoOEWQ [], int kiGCXOM3 [], int hUtmu3g7) {
    int RD4B6whK0, uqaLrIcsM;
    int XiCQjRowLP [1000] [1000];
    {
        RD4B6whK0 = 0;
        while (hUtmu3g7 > RD4B6whK0) {
            if (kiGCXOM3[RD4B6whK0] < hBoOEWQ[0])
                XiCQjRowLP[RD4B6whK0][0] = 1;
            else if (kiGCXOM3[RD4B6whK0] == hBoOEWQ[0])
                XiCQjRowLP[RD4B6whK0][0] = 0;
            else
                XiCQjRowLP[RD4B6whK0][0] = -1;
            RD4B6whK0++;
        }
    }
    {
        RD4B6whK0 = hUtmu3g7 - 2;
        while (0 <= RD4B6whK0) {
            {
                uqaLrIcsM = 1;
                while (uqaLrIcsM < hUtmu3g7 - RD4B6whK0) {
                    if (hBoOEWQ[uqaLrIcsM] > kiGCXOM3[RD4B6whK0 +uqaLrIcsM])
                        XiCQjRowLP[RD4B6whK0][uqaLrIcsM] = XiCQjRowLP[RD4B6whK0][uqaLrIcsM - 1] + 1;
                    else {
                        if (kiGCXOM3[RD4B6whK0 +uqaLrIcsM] > hBoOEWQ[uqaLrIcsM])
                            XiCQjRowLP[RD4B6whK0][uqaLrIcsM] = XiCQjRowLP[RD4B6whK0 +1][uqaLrIcsM - 1] - 1;
                        else {
                            if (XiCQjRowLP[RD4B6whK0 +1][uqaLrIcsM - 1] - 1 > XiCQjRowLP[RD4B6whK0][uqaLrIcsM - 1])
                                XiCQjRowLP[RD4B6whK0][uqaLrIcsM] = XiCQjRowLP[RD4B6whK0 +1][uqaLrIcsM - 1] - 1;
                            else
                                XiCQjRowLP[RD4B6whK0][uqaLrIcsM] = XiCQjRowLP[RD4B6whK0][uqaLrIcsM - 1];
                        }
                    }
                    uqaLrIcsM++;
                }
            }
            RD4B6whK0--;
        }
    }
    return 200 * XiCQjRowLP[0][hUtmu3g7 - 1];
}

