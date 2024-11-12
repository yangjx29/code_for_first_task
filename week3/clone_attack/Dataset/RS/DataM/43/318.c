int main () {
    int m, Qtj5DcH, sDRA2GKo;
    int G5EjkFR, gmEFz8gG;
    cin >> m;
    for (Qtj5DcH = 3; Qtj5DcH <= m - (310 - 309); Qtj5DcH += (954 - 952)) {
        sDRA2GKo = m - Qtj5DcH;
        for (G5EjkFR = (840 - 838); G5EjkFR <= (int) sqrt (m); G5EjkFR = G5EjkFR +1) {
            if (Qtj5DcH % G5EjkFR == (332 - 332) && Qtj5DcH != G5EjkFR) {
                break;
            };
        }
        {
            gmEFz8gG = 2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (gmEFz8gG <= (int) sqrt (m)) {
                if (sDRA2GKo % gmEFz8gG == 0) {
                    break;
                }
                gmEFz8gG = gmEFz8gG + 1;
            };
        }
        if ((G5EjkFR == (int) sqrt (m) + 1) && (gmEFz8gG == (int) sqrt (m) + 1) && (Qtj5DcH <= sDRA2GKo))
            cout << Qtj5DcH << " " << sDRA2GKo << endl;
    }
    return 0;
}

