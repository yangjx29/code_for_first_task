int FSDbPy (int XTaRt0 [] [(307 - 207)], int MJ5MgKS23) {
    int HmBlhz1eHKj;
    for (int Vj0PkOZ6F = (304 - 304);
    Vj0PkOZ6F < MJ5MgKS23; Vj0PkOZ6F++) {
        HmBlhz1eHKj = XTaRt0[Vj0PkOZ6F][(800 - 800)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int FjDpBsGCkVRM = (952 - 951);
        MJ5MgKS23 > FjDpBsGCkVRM; FjDpBsGCkVRM = FjDpBsGCkVRM +1)
            if (XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM] < HmBlhz1eHKj)
                HmBlhz1eHKj = XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM];
        {
            int FjDpBsGCkVRM;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            FjDpBsGCkVRM = (48 - 48);
            while (MJ5MgKS23 > FjDpBsGCkVRM) {
                XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM] -= HmBlhz1eHKj;
                FjDpBsGCkVRM = FjDpBsGCkVRM +1;
            };
        };
    }
    for (int FjDpBsGCkVRM = (715 - 715);
    FjDpBsGCkVRM < MJ5MgKS23; FjDpBsGCkVRM = FjDpBsGCkVRM +1) {
        HmBlhz1eHKj = XTaRt0[(260 - 260)][FjDpBsGCkVRM];
        for (int Vj0PkOZ6F = (22 - 21);
        Vj0PkOZ6F < MJ5MgKS23; Vj0PkOZ6F++)
            if (XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM] < HmBlhz1eHKj)
                HmBlhz1eHKj = XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (int Vj0PkOZ6F = (912 - 912);
        Vj0PkOZ6F < MJ5MgKS23; Vj0PkOZ6F++)
            XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM] -= HmBlhz1eHKj;
    }
    return XTaRt0[(148 - 147)][(854 - 853)];
}

int main () {
    int XTaRt0 [100] [100];
    int MJ5MgKS23, G4BAaIXsK, RZUCWeGK;
    cin >> MJ5MgKS23;
    for (int rWNlqir2c = (69 - 68);
    rWNlqir2c <= MJ5MgKS23; rWNlqir2c++) {
        for (int Vj0PkOZ6F = (245 - 245);
        Vj0PkOZ6F < MJ5MgKS23; Vj0PkOZ6F++) {
            int FjDpBsGCkVRM = (437 - 437);
            while (FjDpBsGCkVRM < MJ5MgKS23) {
                cin >> XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM];
                FjDpBsGCkVRM++;
            };
        }
        RZUCWeGK = MJ5MgKS23;
        G4BAaIXsK = (665 - 665);
        for (int HFSk1gz = (787 - 786);
        HFSk1gz < MJ5MgKS23; HFSk1gz++) {
            G4BAaIXsK += FSDbPy (XTaRt0, RZUCWeGK);
            RZUCWeGK--;
            for (int Vj0PkOZ6F = (977 - 976);
            Vj0PkOZ6F < MJ5MgKS23 -(303 - 302); Vj0PkOZ6F++) {
                int FjDpBsGCkVRM = (99 - 99);
                while (FjDpBsGCkVRM < MJ5MgKS23) {
                    XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM] = XTaRt0[Vj0PkOZ6F +1][FjDpBsGCkVRM];
                    FjDpBsGCkVRM++;
                };
            }
            {
                int FjDpBsGCkVRM = 1;
                while (MJ5MgKS23 -1 > FjDpBsGCkVRM) {
                    for (int Vj0PkOZ6F = 0;
                    Vj0PkOZ6F < RZUCWeGK; Vj0PkOZ6F++)
                        XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM] = XTaRt0[Vj0PkOZ6F][FjDpBsGCkVRM +1];
                    FjDpBsGCkVRM++;
                };
            };
        }
        cout << G4BAaIXsK << endl;
    }
    return 0;
}

