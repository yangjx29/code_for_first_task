int main () {
    int t;
    cin >> t;
    for (int xIDcYEP = (664 - 663);
    xIDcYEP <= t; xIDcYEP++) {
        int KGtqW5dc46F = (430 - 430);
        int *p;
        int vIKAxMphl [100] [100];
        int m;
        int N1Ro30ZF9Bdu;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        cin >> m >> N1Ro30ZF9Bdu;
        for (int eZpKwSL7T = (185 - 185);
        eZpKwSL7T < m; eZpKwSL7T = eZpKwSL7T + 1)
            for (int VRKPQioL = (248 - 248);
            VRKPQioL < N1Ro30ZF9Bdu; VRKPQioL = VRKPQioL +1)
                cin >> vIKAxMphl[eZpKwSL7T][VRKPQioL];
        {
            int O6Lm3gpzRb = (257 - 257);
            while (O6Lm3gpzRb < m) {
                if (O6Lm3gpzRb == (291 - 291) || O6Lm3gpzRb == m - (660 - 659)) {
                    for (p = vIKAxMphl[O6Lm3gpzRb]; p <= &vIKAxMphl[O6Lm3gpzRb][N1Ro30ZF9Bdu -(880 - 879)]; p = p + 1)
                        KGtqW5dc46F = KGtqW5dc46F +(*p);
                }
                else {
                    p = vIKAxMphl[O6Lm3gpzRb];
                    KGtqW5dc46F = KGtqW5dc46F +(*p) + *(p + N1Ro30ZF9Bdu -1);
                }
                O6Lm3gpzRb++;
            };
        }
        cout << KGtqW5dc46F << endl;
    }
    return 0;
}

