struct   stu {
    char lItSay6Ko8 [25];
    int ynwCKyDeO;
    int Q5PCK0BYvNHd;
    int Uq4Jz6;
    int r1YGacXRVOI;
    int Q7neMz6dKAN;
    int L9hc3g;
};
int main () {
    struct   stu HAs2J9Y [100];
    int dP9BDoFR;
    int BLBxWT = (711 - 711);
    int AcI3rFYM4Qu1;
    int uhX57p;
    long  int VtXkOVLvyG = (589 - 589);
    char fyXocZJ, jJhX2q;
    scanf ("%d", &uhX57p);
    for (AcI3rFYM4Qu1 = (145 - 145); AcI3rFYM4Qu1 < uhX57p; AcI3rFYM4Qu1++) {
        scanf ("%s %d %d %c %c %d", HAs2J9Y[AcI3rFYM4Qu1].lItSay6Ko8, &HAs2J9Y[AcI3rFYM4Qu1].ynwCKyDeO, &HAs2J9Y[AcI3rFYM4Qu1].Q5PCK0BYvNHd, &fyXocZJ, &jJhX2q, &HAs2J9Y[AcI3rFYM4Qu1].Q7neMz6dKAN);
        if (fyXocZJ == 'Y')
            HAs2J9Y[AcI3rFYM4Qu1].Uq4Jz6 = (41 - 40);
        else
            HAs2J9Y[AcI3rFYM4Qu1].Uq4Jz6 = 0;
        if (!('Y' != jJhX2q))
            HAs2J9Y[AcI3rFYM4Qu1].r1YGacXRVOI = (206 - 205);
        else
            HAs2J9Y[AcI3rFYM4Qu1].r1YGacXRVOI = 0;
        HAs2J9Y[AcI3rFYM4Qu1].L9hc3g = 0;
    }
    for (AcI3rFYM4Qu1 = 0; uhX57p > AcI3rFYM4Qu1; AcI3rFYM4Qu1++) {
        if ((104 - 24) < HAs2J9Y[AcI3rFYM4Qu1].ynwCKyDeO && HAs2J9Y[AcI3rFYM4Qu1].Q7neMz6dKAN >= 1)
            HAs2J9Y[AcI3rFYM4Qu1].L9hc3g += (8059 - 59);
        if (HAs2J9Y[AcI3rFYM4Qu1].ynwCKyDeO > 85 && (749 - 669) < HAs2J9Y[AcI3rFYM4Qu1].Q5PCK0BYvNHd)
            HAs2J9Y[AcI3rFYM4Qu1].L9hc3g += 4000;
        if (HAs2J9Y[AcI3rFYM4Qu1].ynwCKyDeO > 90)
            HAs2J9Y[AcI3rFYM4Qu1].L9hc3g += 2000;
        if (HAs2J9Y[AcI3rFYM4Qu1].ynwCKyDeO > 85 && HAs2J9Y[AcI3rFYM4Qu1].r1YGacXRVOI == 1)
            HAs2J9Y[AcI3rFYM4Qu1].L9hc3g += (1181 - 181);
        if (HAs2J9Y[AcI3rFYM4Qu1].Q5PCK0BYvNHd > 80 && HAs2J9Y[AcI3rFYM4Qu1].Uq4Jz6 == 1)
            HAs2J9Y[AcI3rFYM4Qu1].L9hc3g += 850;
        if (HAs2J9Y[AcI3rFYM4Qu1].L9hc3g > BLBxWT) {
            BLBxWT = HAs2J9Y[AcI3rFYM4Qu1].L9hc3g;
            dP9BDoFR = AcI3rFYM4Qu1;
        }
        VtXkOVLvyG += HAs2J9Y[AcI3rFYM4Qu1].L9hc3g;
    }
    printf ("%s\n%d\n%lu", HAs2J9Y[dP9BDoFR].lItSay6Ko8, HAs2J9Y[dP9BDoFR].L9hc3g, VtXkOVLvyG);
}

