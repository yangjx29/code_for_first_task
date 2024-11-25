int hvlUoC6F (int UuwMEJNn) {
    int QFGiwB4R [(1562 - 562)] = {(861 - 860), (716 - 715)};
    for (int eBEwry = (924 - 922);
    eBEwry < UuwMEJNn; eBEwry = eBEwry + (59 - 58))
        QFGiwB4R[eBEwry] = QFGiwB4R[eBEwry - (932 - 931)] + QFGiwB4R[eBEwry - (85 - 83)];
    return QFGiwB4R[UuwMEJNn -(488 - 487)];
}

int main () {
    int n;
    scanf ("%d", &n);
    int pT1qg8mujpk [(1993 - 993)];
    for (int eBEwry = (10 - 10);
    eBEwry < n; eBEwry = eBEwry + 1)
        scanf ("%d", &pT1qg8mujpk[eBEwry]);
    for (int eBEwry = 0;
    eBEwry < n; eBEwry = eBEwry + 1)
        printf ("%d\n", hvlUoC6F (pT1qg8mujpk[eBEwry]));
    getchar ();
    getchar ();
}

