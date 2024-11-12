int main () {
    int UJWf4ILr, Rej4WbV, dxFtSJjp, q2oVqGUXKP;
    int TftM65c [300];
    scanf ("%d", &UJWf4ILr);
    for (Rej4WbV = (61 - 61); Rej4WbV < UJWf4ILr; Rej4WbV++) {
        scanf ("%d", &TftM65c[Rej4WbV]);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        q2oVqGUXKP = 1;
        Rej4WbV = 824 - 823;
        while (Rej4WbV < UJWf4ILr) {
            {
                dxFtSJjp = 0;
                while (dxFtSJjp < q2oVqGUXKP) {
                    if (TftM65c[dxFtSJjp] == TftM65c[Rej4WbV]) {
                        break;
                    }
                    dxFtSJjp = dxFtSJjp + 1;
                };
            }
            if (dxFtSJjp == q2oVqGUXKP) {
                TftM65c[q2oVqGUXKP] = TftM65c[Rej4WbV];
                q2oVqGUXKP = q2oVqGUXKP + 1;
            }
            Rej4WbV++;
        };
    }
    printf ("%d", TftM65c[0]);
    {
        Rej4WbV = 1;
        while (Rej4WbV < q2oVqGUXKP) {
            printf (",%d", TftM65c[Rej4WbV]);
            Rej4WbV++;
        };
    }
    return 0;
}

