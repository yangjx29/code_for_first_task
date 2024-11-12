int main () {
    int NSAg6by [N];
    int sD21sOxpLGSg, i61fkRaK;
    scanf ("%d", &sD21sOxpLGSg);
    for (int nMeOj8WsYgLZ = 0;
    nMeOj8WsYgLZ < sD21sOxpLGSg; nMeOj8WsYgLZ = nMeOj8WsYgLZ + 1) {
        scanf ("%d", &NSAg6by[nMeOj8WsYgLZ]);
    }
    {
        int pcRr7QVAU5P = 1;
        while (pcRr7QVAU5P < sD21sOxpLGSg) {
            for (int kcgOPmdupbry = 0;
            kcgOPmdupbry < sD21sOxpLGSg - pcRr7QVAU5P; kcgOPmdupbry++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (NSAg6by[kcgOPmdupbry] > NSAg6by[kcgOPmdupbry + 1]) {
                    i61fkRaK = NSAg6by[kcgOPmdupbry + 1];
                    NSAg6by[kcgOPmdupbry + 1] = NSAg6by[kcgOPmdupbry];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    NSAg6by[kcgOPmdupbry] = i61fkRaK;
                };
            }
            pcRr7QVAU5P++;
        };
    }
    {
        int fdif0gJ8x = 0;
        while (sD21sOxpLGSg > fdif0gJ8x) {
            if (!(0 == NSAg6by[fdif0gJ8x] % 2)) {
                if (fdif0gJ8x == sD21sOxpLGSg - 1 || fdif0gJ8x == sD21sOxpLGSg - 2) {
                    printf ("%d", NSAg6by[fdif0gJ8x]);
                }
                else {
                    printf ("%d,", NSAg6by[fdif0gJ8x]);
                };
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
            fdif0gJ8x++;
        };
    }
    return 0;
}

