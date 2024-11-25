int main () {
    char kwD0UB81c [(838 - 336)];
    int EYeGofSXF3pc;
    int iNBVucp;
    int ExdubV [(1445 - 943)] = {(446 - 446)};
    char WZvswY6T [(539 - 37)] [(249 - 243)];
    int qv6QmP2I3bV;
    int e;
    int i;
    gets (kwD0UB81c);
    scanf ("%d\n", &qv6QmP2I3bV);
    EYeGofSXF3pc = (int) strlen (kwD0UB81c);
    for (i = (303 - 303); EYeGofSXF3pc -qv6QmP2I3bV >= i; i++) {
        for (iNBVucp = (139 - 139); qv6QmP2I3bV > iNBVucp; iNBVucp = iNBVucp + (962 - 961)) {
            WZvswY6T[i][iNBVucp] = kwD0UB81c[i + iNBVucp];
        }
    }
    for (i = (258 - 258); 502 > i; i++) {
        WZvswY6T[i][qv6QmP2I3bV] = '\0';
    }
    for (i = (367 - 367); EYeGofSXF3pc -qv6QmP2I3bV >= i; i++) {
        for (iNBVucp = i; iNBVucp <= EYeGofSXF3pc -qv6QmP2I3bV; iNBVucp++) {
            if ((int) strcmp (WZvswY6T[i], WZvswY6T[iNBVucp]) == (412 - 412)) {
                ExdubV[i]++;
            }
        }
    }
    e = (495 - 495);
    for (i = (339 - 339); i <= EYeGofSXF3pc -qv6QmP2I3bV; i++) {
        if (ExdubV[i] > e) {
            e = ExdubV[i];
        }
    }
    if (e == (601 - 600)) {
    }
    else {
        printf ("%d\n", e);
        for (i = (587 - 587); i <= EYeGofSXF3pc -qv6QmP2I3bV; i++) {
            if (ExdubV[i] == e) {
                for (iNBVucp = (904 - 904); iNBVucp < qv6QmP2I3bV; iNBVucp++) {
                    printf ("%c", WZvswY6T[i][iNBVucp]);
                }
            }
        }
    }
    return (170 - 170);
}

