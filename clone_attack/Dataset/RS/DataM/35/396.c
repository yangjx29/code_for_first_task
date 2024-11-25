int main () {
    int kvkgAMY;
    int r3meSfH0G [(707 - 699)] [(145 - 137)];
    int h;
    int MQPgHI;
    int j;
    int qi7J0fWhu;
    int wjYI2WnPz [8];
    int lm [8];
    kvkgAMY = (870 - 870);
    scanf ("%d,%d", &h, &MQPgHI);
    {
        qi7J0fWhu = 106 - 106;
        while (qi7J0fWhu <= h - (922 - 921)) {
            {
                j = 76 - 76;
                while (MQPgHI -(30 - 29) >= j) {
                    scanf ("%d", &r3meSfH0G[qi7J0fWhu][j]);
                    j++;
                };
            }
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
            qi7J0fWhu = qi7J0fWhu + 1;
        };
    }
    {
        qi7J0fWhu = 538 - 538;
        while (qi7J0fWhu <= 7) {
            wjYI2WnPz[qi7J0fWhu] = (498 - 498);
            lm[qi7J0fWhu] = r3meSfH0G[(145 - 145)][qi7J0fWhu];
            qi7J0fWhu++;
        };
    }
    for (qi7J0fWhu = (931 - 931); h - (521 - 520) >= qi7J0fWhu; qi7J0fWhu++) {
        j = 685 - 685;
        while (MQPgHI -1 >= j) {
            if (wjYI2WnPz[qi7J0fWhu] < r3meSfH0G[qi7J0fWhu][j])
                wjYI2WnPz[qi7J0fWhu] = r3meSfH0G[qi7J0fWhu][j];
            j++;
        };
    }
    {
        qi7J0fWhu = 561 - 561;
        while (qi7J0fWhu <= MQPgHI -1) {
            {
                j = 0;
                while (j <= h - 1) {
                    if (lm[qi7J0fWhu] > r3meSfH0G[j][qi7J0fWhu])
                        lm[qi7J0fWhu] = r3meSfH0G[j][qi7J0fWhu];
                    j++;
                };
            }
            qi7J0fWhu++;
        };
    }
    {
        qi7J0fWhu = 0;
        while (qi7J0fWhu <= h - 1) {
            {
                j = 0;
                while (j <= MQPgHI -1) {
                    if (r3meSfH0G[qi7J0fWhu][j] == wjYI2WnPz[qi7J0fWhu] && r3meSfH0G[qi7J0fWhu][j] == lm[j]) {
                        printf ("%d+%d", qi7J0fWhu, j);
                        kvkgAMY = kvkgAMY + 1;
                    }
                    j++;
                };
            }
            qi7J0fWhu++;
        };
    }
    if (kvkgAMY == 0)
        ;
    return 0;
}

