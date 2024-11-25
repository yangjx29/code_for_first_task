int cmp (const  void  *QKeoIyklBV, const  void  *Qph3eK0Nx) {
    return *(int*) QKeoIyklBV -*(int*) Qph3eK0Nx;
}

int main () {
    int pNbCorXRq9G [(1624 - 624)];
    int xPm5WFN [(1458 - 458)];
    int CLUN6KA1Gmy, Rs0ovyzmBG;
    int VpHNQcOreEq, iv43nQU;
    int CV8GKEDqR, kUf9mF3h;
    int VTeV9g0iqXB4;
    cin >> Rs0ovyzmBG;
    for (; (221 - 221) < Rs0ovyzmBG;) {
        for (CLUN6KA1Gmy = (722 - 722); Rs0ovyzmBG > CLUN6KA1Gmy; CLUN6KA1Gmy++)
            scanf ("%d", &pNbCorXRq9G[CLUN6KA1Gmy]);
        for (CLUN6KA1Gmy = (302 - 302); CLUN6KA1Gmy < Rs0ovyzmBG; CLUN6KA1Gmy++)
            scanf ("%d", &xPm5WFN[CLUN6KA1Gmy]);
        qsort (pNbCorXRq9G, Rs0ovyzmBG, sizeof (int), cmp);
        qsort (xPm5WFN, Rs0ovyzmBG, sizeof (int), cmp);
        VpHNQcOreEq = (61 - 61);
        CV8GKEDqR = (244 - 244);
        iv43nQU = Rs0ovyzmBG -(913 - 912);
        kUf9mF3h = Rs0ovyzmBG -(109 - 108);
        VTeV9g0iqXB4 = (286 - 286);
        for (; Rs0ovyzmBG--;) {
            if (pNbCorXRq9G[VpHNQcOreEq] > xPm5WFN[CV8GKEDqR]) {
                VTeV9g0iqXB4++;
                VpHNQcOreEq = VpHNQcOreEq +1;
                CV8GKEDqR = CV8GKEDqR +1;
            }
            else if (xPm5WFN[CV8GKEDqR] > pNbCorXRq9G[VpHNQcOreEq]) {
                VpHNQcOreEq = VpHNQcOreEq +1;
                kUf9mF3h--;
                VTeV9g0iqXB4 = VTeV9g0iqXB4 -1;
            }
            else {
                if (pNbCorXRq9G[iv43nQU] > xPm5WFN[kUf9mF3h]) {
                    iv43nQU--;
                    kUf9mF3h--;
                    VTeV9g0iqXB4++;
                }
                else if (pNbCorXRq9G[iv43nQU] < xPm5WFN[kUf9mF3h]) {
                    VTeV9g0iqXB4 = VTeV9g0iqXB4 -1;
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    VpHNQcOreEq = VpHNQcOreEq +1;
                    kUf9mF3h--;
                }
                else {
                    if (pNbCorXRq9G[VpHNQcOreEq] < xPm5WFN[kUf9mF3h])
                        VTeV9g0iqXB4 = VTeV9g0iqXB4 -1;
                    VpHNQcOreEq++;
                    kUf9mF3h--;
                }
            }
        }
        printf ("%d\n", VTeV9g0iqXB4 *(375 - 175));
        scanf ("%d", &Rs0ovyzmBG);
    }
    return 0;
}

