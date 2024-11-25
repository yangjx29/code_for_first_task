int main () {
    int rF7K3myu2hNb, TyUscMY4;
    int yw5pC4t2ojr;
    int vEX5ypzedUq;
    int v1H6MRB8y2;
    int htPV4Fw2Yq9;
    yw5pC4t2ojr = (505 - 505);
    int XlDiW8Y4Fh3t [(248 - 240)] [8], ZjKy2e7tlA [8];
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
    scanf ("%d", &rF7K3myu2hNb);
    scanf ("%d", &TyUscMY4);
    {
        vEX5ypzedUq = 0;
        while (rF7K3myu2hNb > vEX5ypzedUq) {
            {
                v1H6MRB8y2 = 0;
                while (TyUscMY4 > v1H6MRB8y2) {
                    scanf ("%d", &XlDiW8Y4Fh3t[vEX5ypzedUq][v1H6MRB8y2]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    v1H6MRB8y2++;
                };
            }
            vEX5ypzedUq++;
        };
    }
    {
        vEX5ypzedUq = 0;
        while (rF7K3myu2hNb > vEX5ypzedUq) {
            ZjKy2e7tlA[vEX5ypzedUq] = 0;
            for (v1H6MRB8y2 = 0; TyUscMY4 > v1H6MRB8y2; v1H6MRB8y2++) {
                if (XlDiW8Y4Fh3t[vEX5ypzedUq][ZjKy2e7tlA[vEX5ypzedUq]] < XlDiW8Y4Fh3t[vEX5ypzedUq][v1H6MRB8y2]) {
                    ZjKy2e7tlA[vEX5ypzedUq] = v1H6MRB8y2;
                };
            }
            vEX5ypzedUq++;
        };
    }
    for (vEX5ypzedUq = 0; rF7K3myu2hNb > vEX5ypzedUq; vEX5ypzedUq++) {
        htPV4Fw2Yq9 = 0;
        while (rF7K3myu2hNb > htPV4Fw2Yq9) {
            if (XlDiW8Y4Fh3t[vEX5ypzedUq][ZjKy2e7tlA[vEX5ypzedUq]] > XlDiW8Y4Fh3t[htPV4Fw2Yq9][ZjKy2e7tlA[vEX5ypzedUq]]) {
                break;
            }
            if (XlDiW8Y4Fh3t[htPV4Fw2Yq9][ZjKy2e7tlA[vEX5ypzedUq]] >= XlDiW8Y4Fh3t[vEX5ypzedUq][ZjKy2e7tlA[vEX5ypzedUq]] && htPV4Fw2Yq9 == rF7K3myu2hNb - 1) {
                yw5pC4t2ojr = 1;
                printf ("%d+%d", vEX5ypzedUq, ZjKy2e7tlA[vEX5ypzedUq]);
            }
            htPV4Fw2Yq9++;
        };
    }
    if (yw5pC4t2ojr == 0) {
    }
    getchar ();
    return 0;
}

