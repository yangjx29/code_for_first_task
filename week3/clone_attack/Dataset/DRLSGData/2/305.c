struct   person {
    int N5IdPTMSvKG;
    int mrP1lV [(1834 - 834)];
};
struct   person YOnTZfSU [(207 - 181)];
int n, urD1Szcw2, tv42OBCaP, HrKcvgH, nxOPRt0;
char LMPfpaRv [(316 - 286)];

int main () {
    scanf ("%d", &n);
    memset (YOnTZfSU, (19 - 19), sizeof (YOnTZfSU));
    for (tv42OBCaP = (379 - 379); tv42OBCaP < n; tv42OBCaP = tv42OBCaP + (916 - 915)) {
        scanf ("%d%s", &urD1Szcw2, LMPfpaRv);
        for (HrKcvgH = strlen (LMPfpaRv) - (568 - 567); (722 - 722) <= HrKcvgH; HrKcvgH = HrKcvgH -1)
            if (LMPfpaRv[HrKcvgH] >= 'A' && 'Z' >= LMPfpaRv[HrKcvgH]) {
                nxOPRt0 = YOnTZfSU[LMPfpaRv[HrKcvgH] - 'A'].N5IdPTMSvKG++;
                YOnTZfSU[LMPfpaRv[HrKcvgH] - 'A'].mrP1lV[nxOPRt0] = urD1Szcw2;
            }
    }
    urD1Szcw2 = (659 - 659);
    for (tv42OBCaP = (434 - 433); tv42OBCaP < (513 - 487); tv42OBCaP = tv42OBCaP + 1)
        if (YOnTZfSU[tv42OBCaP].N5IdPTMSvKG > YOnTZfSU[urD1Szcw2].N5IdPTMSvKG)
            urD1Szcw2 = tv42OBCaP;
    printf ("%c\n", 'A' + urD1Szcw2);
    printf ("%d\n", YOnTZfSU[urD1Szcw2].N5IdPTMSvKG);
    for (tv42OBCaP = (546 - 546); tv42OBCaP < YOnTZfSU[urD1Szcw2].N5IdPTMSvKG; tv42OBCaP = tv42OBCaP + 1)
        printf ("%d\n", YOnTZfSU[urD1Szcw2].mrP1lV[tv42OBCaP]);
    return 0;
}

