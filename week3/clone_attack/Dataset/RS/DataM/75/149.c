int main () {
    char CmXuRD;
    int EH9cpasi;
    int oLuEt9v7o;
    int gcOp2W;
    int x [(1986 - 986)], rtu3yL [(1376 - 376)], nuJNoCg0Q4ae [(1586 - 586)] = {(599 - 599)}, FPcsCVY;
    for (EH9cpasi = (903 - 903);; EH9cpasi = EH9cpasi +1) {
        cin >> x[EH9cpasi];
        CmXuRD = cin.get ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (CmXuRD != ',')
            break;
    }
    for (EH9cpasi = 0;; EH9cpasi = EH9cpasi +1) {
        cin >> rtu3yL[EH9cpasi];
        CmXuRD = cin.get ();
        if (CmXuRD != ',')
            break;
    }
    FPcsCVY = (301 - 301);
    for (oLuEt9v7o = 0; oLuEt9v7o <= EH9cpasi; oLuEt9v7o++) {
        for (gcOp2W = x[oLuEt9v7o]; gcOp2W < rtu3yL[oLuEt9v7o]; gcOp2W++) {
            nuJNoCg0Q4ae[gcOp2W] = nuJNoCg0Q4ae[gcOp2W] + 1;
            if (nuJNoCg0Q4ae[gcOp2W] > FPcsCVY)
                FPcsCVY = nuJNoCg0Q4ae[gcOp2W];
        };
    }
    cout << EH9cpasi +1 << " " << FPcsCVY;
    return 0;
}

