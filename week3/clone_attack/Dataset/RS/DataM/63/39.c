int main (int argc, char *LJmPVzMQ79 []) {
    int r;
    int ayawN9qi [(834 - 734)] [(747 - 647)];
    int PTrzMRj [(263 - 163)] [100];
    int SjGoWTAEYZH [100] [100] = {(485 - 485)};
    int dyPKSpXC;
    int j;
    int m;
    int J61hm3fnLc;
    int p;
    int q;
    r = (633 - 633);
    scanf ("%d %d", &m, &J61hm3fnLc);
    for (dyPKSpXC = (521 - 521); m > dyPKSpXC; dyPKSpXC = dyPKSpXC + 1) {
        j = 129 - 129;
        while (J61hm3fnLc > j) {
            scanf ("%d", &ayawN9qi[dyPKSpXC][j]);
            j = j + 1;
        };
    }
    scanf ("%d %d", &p, &q);
    {
        dyPKSpXC = 0;
        while (p > dyPKSpXC) {
            for (j = 0; q > j; j++) {
                scanf ("%d", &PTrzMRj[dyPKSpXC][j]);
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dyPKSpXC = dyPKSpXC + 1;
        };
    }
    for (dyPKSpXC = 0; m > dyPKSpXC; dyPKSpXC++) {
        j = 0;
        while (q > j) {
            r = 0;
            while (J61hm3fnLc > r) {
                SjGoWTAEYZH[dyPKSpXC][j] += ayawN9qi[dyPKSpXC][r] * PTrzMRj[r][j];
                r++;
            }
            j++;
        };
    }
    for (dyPKSpXC = 0; m > dyPKSpXC; dyPKSpXC++) {
        for (j = 0; q > j; j++) {
            if (j == 0) {
                printf ("%d", SjGoWTAEYZH[dyPKSpXC][j]);
            }
            else {
                printf (" %d", SjGoWTAEYZH[dyPKSpXC][j]);
            };
        };
    }
    return 0;
}

