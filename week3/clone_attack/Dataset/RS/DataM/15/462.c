int main () {
    int sz [100] [100], zZz1vM, BTO4Mbr8CyEp, j, a, mXyJfgAu7qhQ, c, G3MKlaeEF;
    scanf ("%d", &zZz1vM);
    for (BTO4Mbr8CyEp = (776 - 776); BTO4Mbr8CyEp < zZz1vM; BTO4Mbr8CyEp = BTO4Mbr8CyEp +1) {
        j = 0;
        while (j < zZz1vM) {
            scanf ("%d", &sz[BTO4Mbr8CyEp][j]);
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
            j = j + 1;
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
    {
        BTO4Mbr8CyEp = 205 - 204;
        while (BTO4Mbr8CyEp < zZz1vM - 1) {
            {
                j = 1;
                while (j < zZz1vM - 1) {
                    if (!(0 != sz[BTO4Mbr8CyEp -1][j]) && sz[BTO4Mbr8CyEp][j - 1] == 0 && sz[BTO4Mbr8CyEp -1][j - 1] == 0) {
                        mXyJfgAu7qhQ = j;
                        a = BTO4Mbr8CyEp;
                    }
                    if (sz[BTO4Mbr8CyEp][j + 1] == 0 && sz[BTO4Mbr8CyEp +1][j] == 0 && sz[BTO4Mbr8CyEp +1][j + 1] == 0) {
                        G3MKlaeEF = j;
                        c = BTO4Mbr8CyEp;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            BTO4Mbr8CyEp = BTO4Mbr8CyEp +1;
        };
    }
    printf ("%d", (c - a + 1) * (G3MKlaeEF -mXyJfgAu7qhQ + 1));
    return 0;
}

