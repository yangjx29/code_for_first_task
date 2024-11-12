int JS4KJzWPCDq3 [9] [9], KARjIF6 [9] [9];

void  proliferation (int ds, int dd) {
    int m;
    int n;
    int oaM8V40;
    int OeY8dHzsbnG;
    if (dd == ds) {
        oaM8V40 = 0;
        while (oaM8V40 <= 8) {
            {
                OeY8dHzsbnG = 0;
                while (8 >= OeY8dHzsbnG) {
                    if (!(0 != OeY8dHzsbnG))
                        cout << KARjIF6[oaM8V40][OeY8dHzsbnG];
                    else
                        cout << " " << KARjIF6[oaM8V40][OeY8dHzsbnG];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    OeY8dHzsbnG = OeY8dHzsbnG +1;
                };
            }
            cout << endl;
            oaM8V40++;
        };
    }
    else if (dd < ds) {
        {
            m = 98 - 94;
            while (4 + dd >= m) {
                for (n = 4 - dd; n <= 4 + dd; n++) {
                    for (oaM8V40 = m - (392 - 391); oaM8V40 <= m + 1; oaM8V40++) {
                        OeY8dHzsbnG = n - 1;
                        while (OeY8dHzsbnG <= n + 1) {
                            JS4KJzWPCDq3[oaM8V40][OeY8dHzsbnG] = JS4KJzWPCDq3[oaM8V40][OeY8dHzsbnG] + KARjIF6[m][n];
                            OeY8dHzsbnG++;
                        };
                    };
                }
                m++;
            };
        }
        dd++;
        {
            oaM8V40 = 4 - dd;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (oaM8V40 <= 4 + dd) {
                {
                    OeY8dHzsbnG = 4 - dd;
                    while (OeY8dHzsbnG <= 4 + dd) {
                        KARjIF6[oaM8V40][OeY8dHzsbnG] = JS4KJzWPCDq3[oaM8V40][OeY8dHzsbnG];
                        OeY8dHzsbnG++;
                    };
                }
                oaM8V40++;
            };
        }
        proliferation (ds, dd);
    };
}

int main () {
    int ds;
    int m;
    cin >> m >> ds;
    memset (JS4KJzWPCDq3, 0, sizeof (JS4KJzWPCDq3));
    memset (KARjIF6, 0, sizeof (KARjIF6));
    KARjIF6[4][4] = m;
    JS4KJzWPCDq3[4][4] = m;
    proliferation (ds, 0);
    return 0;
}

