char ynz6RtH (char fMZEdD) {
    char Ebd82FN;
    if (!('T' != fMZEdD)) {
        Ebd82FN = 'A';
    }
    else {
        if (!('A' != fMZEdD)) {
            Ebd82FN = 'T';
        }
        else {
            if (!('G' != fMZEdD)) {
                Ebd82FN = 'C';
            }
            else {
                if (!('C' != fMZEdD)) {
                    Ebd82FN = 'G';
                }
                else {
                    Ebd82FN = '\0';
                }
            }
        }
    }
    return Ebd82FN;
}

int main (int nZ5REnF0, char *M7tDzmr []) {
    int j2Jbpwt;
    int yHaNGdAs;
    char aMXRJt;
    char vMku3HoLhYA [(794 - 539)] = {'\0'};
    int ZzCohZQ;
    int yXbyWVoMz;
    scanf ("%d\n", &yXbyWVoMz);
    for (yHaNGdAs = (439 - 438); yHaNGdAs <= yXbyWVoMz; yHaNGdAs = yHaNGdAs + (921 - 920)) {
        for (ZzCohZQ = (844 - 844); ZzCohZQ < (626 - 371); ZzCohZQ = ZzCohZQ +(40 - 39))
            vMku3HoLhYA[ZzCohZQ] = '\0';
        scanf ("%s", vMku3HoLhYA);
        for (ZzCohZQ = (420 - 166); (102 - 102) <= ZzCohZQ; ZzCohZQ = ZzCohZQ -(137 - 136)) {
            if (vMku3HoLhYA[ZzCohZQ] != '\0') {
                j2Jbpwt = ZzCohZQ;
                break;
            }
        }
        for (ZzCohZQ = (17 - 17); ZzCohZQ < j2Jbpwt; ZzCohZQ = ZzCohZQ +(238 - 237)) {
            aMXRJt = ynz6RtH (vMku3HoLhYA[ZzCohZQ]);
            printf ("%c", aMXRJt);
        }
        aMXRJt = ynz6RtH (vMku3HoLhYA[j2Jbpwt]);
        printf ("%c\n", aMXRJt);
    }
    return (868 - 868);
}

