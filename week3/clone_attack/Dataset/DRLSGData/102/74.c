int main () {
    int RMEhSXmP87T, iHT7ngI, vC0y7e, wTzBIA152Z;
    char mXRUyb26uEJ [(834 - 794)] [7];
    double  V2h7e5j [40], q5W8azl1Z [40], ruh2PkXDM6 [40], oJBkRI26TC;
    vC0y7e = (962 - 962);
    wTzBIA152Z = (593 - 593);
    scanf ("%d", &RMEhSXmP87T);
    for (iHT7ngI = 0; RMEhSXmP87T > iHT7ngI; iHT7ngI = iHT7ngI + (431 - 430)) {
        scanf ("%s %lf", mXRUyb26uEJ[iHT7ngI], &V2h7e5j[iHT7ngI]);
        if (mXRUyb26uEJ[iHT7ngI][0] == 'f') {
            q5W8azl1Z[vC0y7e] = V2h7e5j[iHT7ngI];
            vC0y7e = vC0y7e + (520 - 519);
        }
        if (!('m' != mXRUyb26uEJ[iHT7ngI][0])) {
            ruh2PkXDM6[wTzBIA152Z] = V2h7e5j[iHT7ngI];
            wTzBIA152Z = wTzBIA152Z + (206 - 205);
        }
    }
    for (RMEhSXmP87T = 1; wTzBIA152Z > RMEhSXmP87T; RMEhSXmP87T = RMEhSXmP87T +1) {
        for (iHT7ngI = 0; iHT7ngI < wTzBIA152Z - RMEhSXmP87T; iHT7ngI = iHT7ngI + 1) {
            if (ruh2PkXDM6[iHT7ngI + 1] < ruh2PkXDM6[iHT7ngI]) {
                oJBkRI26TC = ruh2PkXDM6[iHT7ngI];
                ruh2PkXDM6[iHT7ngI] = ruh2PkXDM6[iHT7ngI + 1];
                ruh2PkXDM6[iHT7ngI + 1] = oJBkRI26TC;
            }
        }
    }
    for (RMEhSXmP87T = 1; RMEhSXmP87T < vC0y7e; RMEhSXmP87T = RMEhSXmP87T +1) {
        for (iHT7ngI = 0; iHT7ngI < vC0y7e - RMEhSXmP87T; iHT7ngI = iHT7ngI + 1) {
            if (q5W8azl1Z[iHT7ngI] < q5W8azl1Z[iHT7ngI + 1]) {
                oJBkRI26TC = q5W8azl1Z[iHT7ngI];
                q5W8azl1Z[iHT7ngI] = q5W8azl1Z[iHT7ngI + 1];
                q5W8azl1Z[iHT7ngI + 1] = oJBkRI26TC;
            }
        }
    }
    for (iHT7ngI = 0; iHT7ngI < wTzBIA152Z; iHT7ngI = iHT7ngI + 1) {
        printf ("%.2lf ", ruh2PkXDM6[iHT7ngI]);
    }
    for (iHT7ngI = 0; iHT7ngI < vC0y7e - 1; iHT7ngI++) {
        printf ("%.2lf ", q5W8azl1Z[iHT7ngI]);
    }
    printf ("%.2lf", q5W8azl1Z[iHT7ngI]);
    return 0;
}

