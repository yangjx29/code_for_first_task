void  main () {
    int v3sy6wb;
    int nadAqlsR;
    int W9f8wL;
    int v9bPMXvog;
    char DnY9DtpbjVd [(170 - 120)] [(431 - 331)];
    int fH6z3YI;
    int iInumf;
    scanf ("%s", DnY9DtpbjVd[(443 - 443)]);
    W9f8wL = fH6z3YI = strlen (DnY9DtpbjVd[(565 - 565)]);
    iInumf = v3sy6wb = (69 - 69);
    nadAqlsR = (598 - 597);
    for (; !((634 - 633) != scanf ("%s", DnY9DtpbjVd[nadAqlsR]));) {
        v9bPMXvog = strlen (DnY9DtpbjVd[nadAqlsR]);
        if (v9bPMXvog > W9f8wL) {
            iInumf = nadAqlsR;
            W9f8wL = v9bPMXvog;
        }
        else {
            if (v9bPMXvog < fH6z3YI) {
                fH6z3YI = v9bPMXvog;
                v3sy6wb = nadAqlsR;
            }
        }
        nadAqlsR = nadAqlsR + (790 - 789);
    }
    printf ("%s\n%s", DnY9DtpbjVd[iInumf], DnY9DtpbjVd[v3sy6wb]);
}

