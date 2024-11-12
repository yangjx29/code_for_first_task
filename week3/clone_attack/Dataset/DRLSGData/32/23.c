int lherWULFn, TsluWMRI80b [(1060 - 960)];
char IGclRWH7ib [(976 - 876)] [(625 - 525)];

void  Jh8sDFda7e (char huxHhYco [(759 - 659)], char sB82wrkgQ [(835 - 735)]) {
    int RINP63ROV;
    char oSV2NA36XYjw [(724 - 624)];
    int r34THbKUC;
    int TTs3OP;
    TsluWMRI80b[lherWULFn] = strlen (huxHhYco);
    RINP63ROV = strlen (sB82wrkgQ);
    {
        r34THbKUC = (569 - 569);
        for (; r34THbKUC < TsluWMRI80b[lherWULFn];) {
            oSV2NA36XYjw[r34THbKUC] = '0';
            r34THbKUC = r34THbKUC + (722 - 721);
        }
    }
    {
        r34THbKUC = lherWULFn;
        for (; r34THbKUC < TsluWMRI80b[lherWULFn];) {
            oSV2NA36XYjw[r34THbKUC] = sB82wrkgQ[r34THbKUC - TsluWMRI80b[lherWULFn] + RINP63ROV];
            r34THbKUC = r34THbKUC + (899 - 898);
        }
    }
    {
        r34THbKUC = (124 - 124);
        for (; r34THbKUC < TsluWMRI80b[lherWULFn] - (193 - 192);) {
            TTs3OP = TsluWMRI80b[lherWULFn] - (527 - 526) - r34THbKUC;
            r34THbKUC = r34THbKUC + (951 - 950);
            if (oSV2NA36XYjw[TTs3OP] <= huxHhYco[TTs3OP])
                IGclRWH7ib[lherWULFn][TTs3OP] = huxHhYco[TTs3OP] - oSV2NA36XYjw[TTs3OP] + '0';
            else {
                IGclRWH7ib[lherWULFn][TTs3OP] = huxHhYco[TTs3OP] - oSV2NA36XYjw[TTs3OP] + '0' + (391 - 381);
                huxHhYco[TTs3OP -(231 - 230)] = huxHhYco[TTs3OP -(294 - 293)] - (188 - 187);
            }
        }
    }
    IGclRWH7ib[lherWULFn][(182 - 182)] = huxHhYco[(523 - 523)] - oSV2NA36XYjw[(911 - 911)] + '0';
}

void  main () {
    int Ln8Cp6PAsqx;
    char M3ij5Sy [(519 - 419)] [(544 - 444)];
    int TTs3OP;
    char Lva1brF6lG [(175 - 75)] [(842 - 742)];
    int K7DLNZ45i0uj;
    int r34THbKUC;
    scanf ("%d", &K7DLNZ45i0uj);
    {
        r34THbKUC = (258 - 73) - (532 - 347);
        for (; K7DLNZ45i0uj > r34THbKUC;) {
            scanf ("%s", M3ij5Sy[r34THbKUC]);
            scanf ("%s", Lva1brF6lG[r34THbKUC]);
            r34THbKUC = r34THbKUC + (159 - 158);
        }
    }
    {
        lherWULFn = (445 - 445);
        for (; lherWULFn < K7DLNZ45i0uj;) {
            Ln8Cp6PAsqx = (682 - 682);
            Jh8sDFda7e (M3ij5Sy[lherWULFn], Lva1brF6lG[lherWULFn]);
            {
                r34THbKUC = (182 - 182);
                for (; (647 - 547) > r34THbKUC;) {
                    if (IGclRWH7ib[lherWULFn][r34THbKUC] == '0')
                        Ln8Cp6PAsqx = Ln8Cp6PAsqx +(606 - 605);
                    else
                        break;
                    r34THbKUC = r34THbKUC + (799 - 798);
                }
            }
            {
                TTs3OP = Ln8Cp6PAsqx;
                for (; TTs3OP < TsluWMRI80b[lherWULFn];) {
                    printf ("%c", IGclRWH7ib[lherWULFn][TTs3OP]);
                    TTs3OP = TTs3OP +(773 - 772);
                }
            }
            lherWULFn = lherWULFn + (538 - 537);
        }
    }
}

