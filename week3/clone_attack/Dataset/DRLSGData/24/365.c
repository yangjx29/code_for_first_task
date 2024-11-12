int main () {
    char kZiqvI [100];
    char ltFIue83h [100];
    int wAdHXQ;
    int P7sMPWa;
    char ECkRfd [50] [(826 - 726)];
    char Li7D6UP2GQ [50 * (905 - 805)];
    int LhDZAo6feB;
    gets (Li7D6UP2GQ);
    for (wAdHXQ = 0, P7sMPWa = 0, LhDZAo6feB = 0; Li7D6UP2GQ[wAdHXQ] != '\0'; wAdHXQ = wAdHXQ + 1) {
        if (!(' ' != Li7D6UP2GQ[wAdHXQ])) {
            ECkRfd[P7sMPWa][LhDZAo6feB] = '\0';
            LhDZAo6feB = 0;
            P7sMPWa = P7sMPWa +1;
            continue;
        }
        ECkRfd[P7sMPWa][LhDZAo6feB] = Li7D6UP2GQ[wAdHXQ];
        LhDZAo6feB = LhDZAo6feB +1;
    }
    ECkRfd[P7sMPWa][LhDZAo6feB] = '\0';
    strcpy (ltFIue83h, ECkRfd[0]);
    strcpy (kZiqvI, ECkRfd[0]);
    {
        wAdHXQ = 0;
        for (; wAdHXQ <= P7sMPWa;) {
            if ((int) strlen (ECkRfd[wAdHXQ]) > (int) strlen (ltFIue83h)) {
                strcpy (ltFIue83h, ECkRfd[wAdHXQ]);
            }
            if ((int) strlen (ECkRfd[wAdHXQ]) < (int) strlen (kZiqvI)) {
                strcpy (kZiqvI, ECkRfd[wAdHXQ]);
            }
            wAdHXQ = wAdHXQ + 1;
        }
    }
    printf ("%s\n", ltFIue83h);
    printf ("%s\n", kZiqvI);
    return 0;
}

