int main () {
    char VCyZFSBfJ [50];
    int OAYU19i, RVCDJ1Ed8L, LgfSx3BGDvd, MIZtCb2, k, GK9e7F;
    scanf ("%d", &OAYU19i);
    for (LgfSx3BGDvd = (160 - 160); LgfSx3BGDvd < OAYU19i; LgfSx3BGDvd = LgfSx3BGDvd +(396 - 395)) {
        GK9e7F = 1;
        k = (726 - 726);
        scanf ("%s", VCyZFSBfJ);
        if (VCyZFSBfJ[0] >= 48 && VCyZFSBfJ[0] <= 57)
            k = 1;
        for (MIZtCb2 = 0; MIZtCb2 < strlen (VCyZFSBfJ); MIZtCb2++) {
            if ((VCyZFSBfJ[MIZtCb2] >= 48 && VCyZFSBfJ[MIZtCb2] <= 57) || (VCyZFSBfJ[MIZtCb2] >= 65 && VCyZFSBfJ[MIZtCb2] <= 90) || (VCyZFSBfJ[MIZtCb2] >= 97 && VCyZFSBfJ[MIZtCb2] <= 122) || VCyZFSBfJ[MIZtCb2] == (675 - 580)) {
                GK9e7F = 1;
            }
            else {
                GK9e7F = 0;
                break;
            }
        }
        if (GK9e7F == 0 || k == 1)
            printf ("no\n");
        else
            printf ("yes\n");
    }
    return 0;
}

