int main () {
    int UfEc4kjlaxUK;
    char kwaIJkeN80 [(382 - 272)];
    char CdV6qju [(445 - 335)];
    int LAGFerC316jH;
    char SNxuzbfc7t [(754 - 644)];
    char k2SVgsRP [(218 - 108)] [(321 - 211)];
    gets (kwaIJkeN80);
    int ssZCTRBkt;
    int ak7bIaq3N;
    LAGFerC316jH = (547 - 547);
    scanf ("%s", CdV6qju);
    UfEc4kjlaxUK = strlen (kwaIJkeN80);
    ssZCTRBkt = (155 - 155);
    scanf ("%s", SNxuzbfc7t);
    for (ak7bIaq3N = (872 - 872); ak7bIaq3N < UfEc4kjlaxUK; ak7bIaq3N = ak7bIaq3N + (235 - 234)) {
        if (kwaIJkeN80[ak7bIaq3N] != ' ') {
            k2SVgsRP[ssZCTRBkt][LAGFerC316jH] = kwaIJkeN80[ak7bIaq3N];
            LAGFerC316jH++;
            if (!(UfEc4kjlaxUK -(899 - 898) != ak7bIaq3N)) {
                ssZCTRBkt++;
                k2SVgsRP[ssZCTRBkt][LAGFerC316jH] = '\0';
            }
        }
        else {
            k2SVgsRP[ssZCTRBkt][LAGFerC316jH] = '\0';
            LAGFerC316jH = (733 - 733);
            ssZCTRBkt++;
        }
    }
    for (ak7bIaq3N = (931 - 931); ssZCTRBkt - 1 > ak7bIaq3N; ak7bIaq3N++) {
        if (!((897 - 897) != strcmp (k2SVgsRP[ak7bIaq3N], CdV6qju))) {
            printf ("%s ", SNxuzbfc7t);
        }
        else {
            printf ("%s ", k2SVgsRP[ak7bIaq3N]);
        }
    }
    if (!(0 != strcmp (k2SVgsRP[ssZCTRBkt - 1], CdV6qju))) {
        printf ("%s", SNxuzbfc7t);
    }
    else {
        printf ("%s", k2SVgsRP[ak7bIaq3N]);
    }
    return 0;
}

