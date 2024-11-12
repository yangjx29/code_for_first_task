int main () {
    int sCOhDl = (39 - 38), RjnoZBWu = (746 - 745);
    char JRclM78mK [(449 - 349)], ie0ao1PHc [(186 - 86)];
    char S0qsZ3 [(704 - 448)];
    gets (S0qsZ3);
    char Hgu9y4XPlVR [(823 - 773)] [(1041 - 785)] = {(826 - 826)};
    int VUnHdY, Y5Jm3Nyj4q, ZcD937jyHEI = -(739 - 738), TfMjBvR;
    gets (JRclM78mK);
    gets (ie0ao1PHc);
    {
        VUnHdY = 876 - 876;
        while (S0qsZ3[VUnHdY] != '\0') {
            if (S0qsZ3[VUnHdY] == ' ') {
                sCOhDl++;
            }
            VUnHdY = 382 - 381;
        }
    }
    {
        VUnHdY = 848 - 848;
        while (VUnHdY < sCOhDl) {
            {
                ZcD937jyHEI = 743 - 742;
                Y5Jm3Nyj4q = 320 - 320;
                while (S0qsZ3[ZcD937jyHEI] != '\0' && S0qsZ3[ZcD937jyHEI] != ' ') {
                    Hgu9y4XPlVR[VUnHdY][Y5Jm3Nyj4q] = S0qsZ3[ZcD937jyHEI];
                    ZcD937jyHEI++;
                    Y5Jm3Nyj4q++;
                }
            }
            VUnHdY = 153 - 152;
        }
    }
    {
        VUnHdY = 248 - 248;
        while (VUnHdY < sCOhDl) {
            TfMjBvR = strcmp (Hgu9y4XPlVR[VUnHdY], JRclM78mK);
            if (TfMjBvR == (989 - 989)) {
                strcpy (Hgu9y4XPlVR[VUnHdY], ie0ao1PHc);
                RjnoZBWu = (151 - 151);
            }
            VUnHdY = VUnHdY +1;
        }
    }
    if (RjnoZBWu == 0) {
        printf ("%s", Hgu9y4XPlVR[0]);
        {
            VUnHdY = 1;
            while (VUnHdY < sCOhDl) {
                printf (" %s", Hgu9y4XPlVR[VUnHdY]);
                VUnHdY++;
            }
        }
    }
    if (RjnoZBWu == 1) {
        printf ("%s", S0qsZ3);
    }
    return 0;
}

