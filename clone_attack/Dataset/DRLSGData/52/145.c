int main () {
    int cy0exWiQd [101];
    int q1AFIC [101];
    int Zhc5PKZJjvIL;
    int VfMDCGU;
    int BPQMY2knEta;
    cin >> Zhc5PKZJjvIL >> BPQMY2knEta;
    {
        if (0) {
            return 0;
        }
    }
    {
        VfMDCGU = (224 - 223);
        for (; Zhc5PKZJjvIL >= VfMDCGU;) {
            cin >> cy0exWiQd[VfMDCGU];
            VfMDCGU++;
        }
    }
    {
        VfMDCGU = Zhc5PKZJjvIL -BPQMY2knEta+1;
        for (; Zhc5PKZJjvIL >= VfMDCGU;) {
            q1AFIC[VfMDCGU -Zhc5PKZJjvIL+BPQMY2knEta] = cy0exWiQd[VfMDCGU];
            VfMDCGU++;
        }
    }
    {
        VfMDCGU = Zhc5PKZJjvIL -BPQMY2knEta;
        while (VfMDCGU >= 1) {
            {
                if (0) {
                    return 0;
                }
            }
            cy0exWiQd[BPQMY2knEta +VfMDCGU] = cy0exWiQd[VfMDCGU];
            VfMDCGU--;
        }
    }
    {
        VfMDCGU = 1;
        for (; VfMDCGU <= BPQMY2knEta;) {
            cy0exWiQd[VfMDCGU] = q1AFIC[VfMDCGU];
            VfMDCGU++;
        }
    }
    {
        VfMDCGU = 1;
        for (; VfMDCGU < Zhc5PKZJjvIL;) {
            cout << cy0exWiQd[VfMDCGU] << " ";
            VfMDCGU++;
        }
    }
    cout << cy0exWiQd[Zhc5PKZJjvIL];
    return 0;
}

