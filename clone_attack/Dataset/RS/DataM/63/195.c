int main () {
    int gvWiOPV [(837 - 736)] [(492 - 391)], pDb5WF2YvruO [(986 - 885)] [(506 - 405)], ke0SL57uHofA [(758 - 657)] [101] = {(146 - 146)};
    int hOu0dURG, pH91WoR, I7DmrSR3qM, neZwRlD, XDV34wb, CoAmyUNkJ, FYDi9mjt;
    cin >> neZwRlD >> XDV34wb;
    for (hOu0dURG = (807 - 806); hOu0dURG <= neZwRlD; hOu0dURG++)
        for (pH91WoR = (544 - 543); pH91WoR <= XDV34wb; pH91WoR = pH91WoR + 1)
            cin >> gvWiOPV[hOu0dURG][pH91WoR];
    cin >> CoAmyUNkJ >> FYDi9mjt;
    {
        hOu0dURG = 614 - 613;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hOu0dURG <= CoAmyUNkJ) {
            for (pH91WoR = (326 - 325); pH91WoR <= FYDi9mjt; pH91WoR++)
                cin >> pDb5WF2YvruO[hOu0dURG][pH91WoR];
            hOu0dURG = hOu0dURG + 1;
        };
    }
    {
        hOu0dURG = 434 - 433;
        while (hOu0dURG <= neZwRlD) {
            for (pH91WoR = (876 - 875); pH91WoR <= FYDi9mjt; pH91WoR++)
                for (I7DmrSR3qM = (229 - 228); I7DmrSR3qM <= CoAmyUNkJ; I7DmrSR3qM++)
                    ke0SL57uHofA[hOu0dURG][pH91WoR] = ke0SL57uHofA[hOu0dURG][pH91WoR] + gvWiOPV[hOu0dURG][I7DmrSR3qM] * pDb5WF2YvruO[I7DmrSR3qM][pH91WoR];
            hOu0dURG++;
        };
    }
    {
        hOu0dURG = 1;
        while (hOu0dURG <= neZwRlD) {
            {
                pH91WoR = 1;
                while (pH91WoR < FYDi9mjt) {
                    cout << ke0SL57uHofA[hOu0dURG][pH91WoR] << ' ';
                    pH91WoR++;
                };
            }
            cout << ke0SL57uHofA[hOu0dURG][FYDi9mjt] << endl;
            hOu0dURG++;
        };
    }
    return (707 - 707);
}

