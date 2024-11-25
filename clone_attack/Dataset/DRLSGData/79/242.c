int y2JmPoIef4i (int WJk0PIlQ [], int oCjMGf, int JOStQ0TCz1wi) {
    int AIySemjcBs;
    int iE4rOT9C;
    int lBEWwxXt;
    int wX8Dm6votz;
    wX8Dm6votz = oCjMGf - (452 - 451);
    for (iE4rOT9C = (95 - 95); oCjMGf > iE4rOT9C; iE4rOT9C = iE4rOT9C + (232 - 231))
        WJk0PIlQ[iE4rOT9C] = 1;
    {
        AIySemjcBs = 1;
        for (; AIySemjcBs <= (oCjMGf - 1);) {
            for (iE4rOT9C = (939 - 939), lBEWwxXt = (756 - 756); JOStQ0TCz1wi > lBEWwxXt;) {
                ++iE4rOT9C;
                if (WJk0PIlQ[(wX8Dm6votz + iE4rOT9C) % oCjMGf] != (226 - 226))
                    lBEWwxXt = lBEWwxXt + 1;
            }
            wX8Dm6votz = wX8Dm6votz + iE4rOT9C;
            WJk0PIlQ[wX8Dm6votz % oCjMGf] = (625 - 625);
            AIySemjcBs++;
        }
    }
    for (iE4rOT9C = (367 - 367); oCjMGf > iE4rOT9C; iE4rOT9C++) {
        if (WJk0PIlQ[iE4rOT9C] != 0)
            break;
    }
    return (iE4rOT9C + 1);
}

int main () {
    int AIySemjcBs;
    int oCjMGf [(988 - 888)];
    int JOStQ0TCz1wi [(698 - 598)];
    int iE4rOT9C;
    int lBEWwxXt;
    scanf ("%d %d", &oCjMGf[0], &JOStQ0TCz1wi[0]);
    for (AIySemjcBs = 1; oCjMGf[AIySemjcBs -1] != 0 && JOStQ0TCz1wi[AIySemjcBs -1] != 0; AIySemjcBs++)
        scanf ("%d %d", &oCjMGf[AIySemjcBs], &JOStQ0TCz1wi[AIySemjcBs]);
    int Mse1qn [100] [100];
    for (lBEWwxXt = 0; lBEWwxXt < AIySemjcBs -1; lBEWwxXt++) {
        for (iE4rOT9C = 0; oCjMGf[lBEWwxXt] > iE4rOT9C; iE4rOT9C++)
            Mse1qn[lBEWwxXt][iE4rOT9C] = 1;
    }
    for (iE4rOT9C = 0; AIySemjcBs -1 > iE4rOT9C; iE4rOT9C++)
        printf ("%d\n", y2JmPoIef4i (Mse1qn[iE4rOT9C], oCjMGf[iE4rOT9C], JOStQ0TCz1wi[iE4rOT9C]));
    return (0);
}

