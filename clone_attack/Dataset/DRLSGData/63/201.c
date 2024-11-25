int main () {
    int pNWMicDjS, KFaBVbRY, O8Yz9crg, sJxyLIEmslA, CAnr8u05Uv [(715 - 615)] [(545 - 445)], SnTi6Al [(160 - 60)] [100], Vp2Glv [100] [100], u7PwFoQBM, cwq4M8u, PIYBsn;
    cin >> pNWMicDjS >> KFaBVbRY;
    {
        u7PwFoQBM = 313 - 313;
        while (pNWMicDjS > u7PwFoQBM) {
            for (cwq4M8u = (931 - 931); KFaBVbRY > cwq4M8u; cwq4M8u++)
                cin >> CAnr8u05Uv[u7PwFoQBM][cwq4M8u];
            u7PwFoQBM = u7PwFoQBM + 1;
        };
    }
    cin >> O8Yz9crg >> sJxyLIEmslA;
    {
        u7PwFoQBM = 702 - 702;
        while (O8Yz9crg > u7PwFoQBM) {
            cwq4M8u = 766 - 766;
            for (; sJxyLIEmslA > cwq4M8u;) {
                cin >> SnTi6Al[u7PwFoQBM][cwq4M8u];
                cwq4M8u++;
            }
            u7PwFoQBM = u7PwFoQBM + 1;
        };
    }
    {
        u7PwFoQBM = 0;
        for (; pNWMicDjS > u7PwFoQBM;) {
            for (cwq4M8u = 0; sJxyLIEmslA > cwq4M8u; cwq4M8u++) {
                Vp2Glv[u7PwFoQBM][cwq4M8u] = 0;
                {
                    PIYBsn = 0;
                    while (KFaBVbRY > PIYBsn) {
                        Vp2Glv[u7PwFoQBM][cwq4M8u] = Vp2Glv[u7PwFoQBM][cwq4M8u] + CAnr8u05Uv[u7PwFoQBM][PIYBsn] * SnTi6Al[PIYBsn][cwq4M8u];
                        PIYBsn++;
                    };
                };
            }
            u7PwFoQBM++;
        };
    }
    for (u7PwFoQBM = 0; pNWMicDjS > u7PwFoQBM; u7PwFoQBM++) {
        cout << Vp2Glv[u7PwFoQBM][0];
        {
            cwq4M8u = 1;
            while (cwq4M8u < sJxyLIEmslA) {
                cout << " " << Vp2Glv[u7PwFoQBM][cwq4M8u];
                cwq4M8u++;
            };
        }
        cout << endl;
    }
    return 0;
}

