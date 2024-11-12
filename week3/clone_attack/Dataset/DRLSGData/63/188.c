int main () {
    int qnSPM3Tpjq [100] [100];
    int M6c79IXkgFN;
    int q2j74e [100] [100];
    int cGerjFoHBs;
    int wtzxa9YQwZD;
    int PczFG0lH;
    int PF3np0;
    int XT6nQmqL;
    int Rqlcpe;
    int S2meEKZ;
    int vHdClZ1S8 [100] [100];
    XT6nQmqL = 0;
    cin >> PczFG0lH >> S2meEKZ;
    {
        Rqlcpe = 0;
        while (Rqlcpe < PczFG0lH) {
            for (M6c79IXkgFN = 0; S2meEKZ > M6c79IXkgFN; M6c79IXkgFN++) {
                cin >> qnSPM3Tpjq[Rqlcpe][M6c79IXkgFN];
            }
            Rqlcpe++;
        }
    }
    cin >> wtzxa9YQwZD >> cGerjFoHBs;
    for (Rqlcpe = 0; wtzxa9YQwZD > Rqlcpe; Rqlcpe++) {
        M6c79IXkgFN = 0;
        for (; cGerjFoHBs > M6c79IXkgFN;) {
            cin >> vHdClZ1S8[Rqlcpe][M6c79IXkgFN];
            M6c79IXkgFN++;
        }
    }
    {
        Rqlcpe = 0;
        for (; Rqlcpe < PczFG0lH;) {
            {
                M6c79IXkgFN = 0;
                while (M6c79IXkgFN < cGerjFoHBs) {
                    XT6nQmqL = XT6nQmqL +1;
                    q2j74e[Rqlcpe][M6c79IXkgFN] = 0;
                    for (PF3np0 = 0; PF3np0 < S2meEKZ; PF3np0++) {
                        q2j74e[Rqlcpe][M6c79IXkgFN] = q2j74e[Rqlcpe][M6c79IXkgFN] + qnSPM3Tpjq[Rqlcpe][PF3np0] * vHdClZ1S8[PF3np0][M6c79IXkgFN];
                    }
                    if (XT6nQmqL % cGerjFoHBs != 0)
                        cout << q2j74e[Rqlcpe][M6c79IXkgFN] << ' ';
                    else
                        cout << q2j74e[Rqlcpe][M6c79IXkgFN] << endl;
                    M6c79IXkgFN++;
                }
            }
            Rqlcpe++;
        }
    }
    return 0;
}

