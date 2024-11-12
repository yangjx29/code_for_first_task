void  main () {
    int ScJBdLoh;
    int L9VpmGH (int zvtDn5, int IFd2mDLkMU9);
    int zvtDn5;
    int IFd2mDLkMU9;
    scanf ("%d %d", &zvtDn5, &IFd2mDLkMU9);
    ScJBdLoh = L9VpmGH (zvtDn5, IFd2mDLkMU9);
    printf ("%d\n", ScJBdLoh);
}

int L9VpmGH (int zvtDn5, int IFd2mDLkMU9) {
    int lDHIAcMOx1Wg;
    if (!(IFd2mDLkMU9 != zvtDn5))
        lDHIAcMOx1Wg = zvtDn5;
    else {
        if (IFd2mDLkMU9 > zvtDn5)
            lDHIAcMOx1Wg = L9VpmGH (zvtDn5, IFd2mDLkMU9 / (444 - 442));
        else
            lDHIAcMOx1Wg = L9VpmGH (zvtDn5 / (212 - 210), IFd2mDLkMU9);
    }
    return (lDHIAcMOx1Wg);
}

