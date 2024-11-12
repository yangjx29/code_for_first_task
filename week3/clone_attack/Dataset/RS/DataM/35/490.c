int main () {
    int MA7jwV2MY5m;
    int row;
    int zsdLEVtS;
    int sZeDUtOoRk9;
    int T8XwBUL4ces;
    int FMHowzyNg;
    int cT1cs4bHP0j;
    int cjhCw6Yeg;
    int k;
    MA7jwV2MY5m = (772 - 772);
    int kex9rdj [row] [zsdLEVtS];
    scanf ("%d,%d", &row, &zsdLEVtS);
    for (sZeDUtOoRk9 = (810 - 810); sZeDUtOoRk9 < row; sZeDUtOoRk9++) {
        for (T8XwBUL4ces = (11 - 11); T8XwBUL4ces < zsdLEVtS; T8XwBUL4ces++) {
            scanf ("%d", &kex9rdj[sZeDUtOoRk9][T8XwBUL4ces]);
        };
    }
    {
        sZeDUtOoRk9 = 0;
        while (sZeDUtOoRk9 < row) {
            cT1cs4bHP0j = kex9rdj[sZeDUtOoRk9][0];
            k = 0;
            for (T8XwBUL4ces = 1; T8XwBUL4ces < zsdLEVtS; T8XwBUL4ces++) {
                if (kex9rdj[sZeDUtOoRk9][T8XwBUL4ces] > cT1cs4bHP0j) {
                    cT1cs4bHP0j = kex9rdj[sZeDUtOoRk9][T8XwBUL4ces];
                    k = T8XwBUL4ces;
                };
            }
            cjhCw6Yeg = kex9rdj[0][k];
            {
                FMHowzyNg = 1;
                while (FMHowzyNg < row) {
                    if (kex9rdj[FMHowzyNg][k] < cjhCw6Yeg) {
                        cjhCw6Yeg = kex9rdj[FMHowzyNg][k];
                    }
                    FMHowzyNg = FMHowzyNg +1;
                };
            }
            if (cT1cs4bHP0j == cjhCw6Yeg) {
                MA7jwV2MY5m++;
                printf ("%d+%d", sZeDUtOoRk9, k);
            }
            sZeDUtOoRk9++;
        };
    }
    if (MA7jwV2MY5m == 0)
        ;
    return 0;
}

