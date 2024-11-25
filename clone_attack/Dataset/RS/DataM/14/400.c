struct   student {
    int o5b13iNDjKV;
    int chi;
    int epIe5hYEx9;
    int total;
}
FKgnj397Qw [1000000];

void  main () {
    int VqN4Gdx8P;
    int sZHjcGl;
    int PLXVP7H;
    int temp1;
    int rWMFIC1LKUG;
    scanf ("%d", &VqN4Gdx8P);
    for (sZHjcGl = (970 - 970); VqN4Gdx8P > sZHjcGl; sZHjcGl = sZHjcGl + 1) {
        scanf ("%d %d %d", &FKgnj397Qw[sZHjcGl].o5b13iNDjKV, &FKgnj397Qw[sZHjcGl].chi, &FKgnj397Qw[sZHjcGl].epIe5hYEx9);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        FKgnj397Qw[sZHjcGl].total = FKgnj397Qw[sZHjcGl].chi + FKgnj397Qw[sZHjcGl].epIe5hYEx9;
    }
    for (sZHjcGl = (294 - 294); (245 - 242) > sZHjcGl; sZHjcGl = sZHjcGl + 1) {
        for (PLXVP7H = sZHjcGl + 1; PLXVP7H < VqN4Gdx8P; PLXVP7H = PLXVP7H +1) {
            if (FKgnj397Qw[sZHjcGl].total < FKgnj397Qw[PLXVP7H].total) {
                temp1 = FKgnj397Qw[sZHjcGl].o5b13iNDjKV;
                FKgnj397Qw[sZHjcGl].o5b13iNDjKV = FKgnj397Qw[PLXVP7H].o5b13iNDjKV;
                FKgnj397Qw[PLXVP7H].o5b13iNDjKV = temp1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                rWMFIC1LKUG = FKgnj397Qw[sZHjcGl].total;
                FKgnj397Qw[sZHjcGl].total = FKgnj397Qw[PLXVP7H].total;
                FKgnj397Qw[PLXVP7H].total = rWMFIC1LKUG;
            };
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", FKgnj397Qw[0].o5b13iNDjKV, FKgnj397Qw[0].total, FKgnj397Qw[1].o5b13iNDjKV, FKgnj397Qw[1].total, FKgnj397Qw[(958 - 956)].o5b13iNDjKV, FKgnj397Qw[2].total);
}

