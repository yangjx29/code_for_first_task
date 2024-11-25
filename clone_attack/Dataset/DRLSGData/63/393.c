int main () {
    int KZBhfLoF;
    int T5CrBuXWiN;
    int hkv7PgC;
    int Wo796vu;
    int HiYJNmRM;
    int wIx1vHe7;
    int g7eJzlqCPT [(564 - 463)] [(760 - 659)];
    int Li5DJQ6 [(598 - 497)] [(187 - 86)];
    int UFtQnZbUD7rI [(831 - 730)] [101] = {(120 - 120)};
    int uomOcg;
    int sngvPC;
    int UQlbKI01;
    int s03KlNBUVqoy;
    scanf ("%d %d", &uomOcg, &sngvPC);
    {
        KZBhfLoF = 753 - 753;
        while (uomOcg > KZBhfLoF) {
            {
                T5CrBuXWiN = 317 - 317;
                while (T5CrBuXWiN < sngvPC) {
                    scanf ("%d", &g7eJzlqCPT[KZBhfLoF][T5CrBuXWiN]);
                    T5CrBuXWiN++;
                }
            }
            KZBhfLoF++;
        }
    }
    scanf ("%d %d", &UQlbKI01, &s03KlNBUVqoy);
    {
        KZBhfLoF = 914 - 914;
        while (UQlbKI01 > KZBhfLoF) {
            for (T5CrBuXWiN = (529 - 529); T5CrBuXWiN < s03KlNBUVqoy; T5CrBuXWiN++)
                scanf ("%d", &Li5DJQ6[KZBhfLoF][T5CrBuXWiN]);
            KZBhfLoF++;
        }
    }
    {
        KZBhfLoF = 0;
        while (KZBhfLoF < uomOcg) {
            {
                T5CrBuXWiN = 0;
                while (T5CrBuXWiN < s03KlNBUVqoy - (609 - 608)) {
                    {
                        hkv7PgC = 0;
                        while (hkv7PgC < UQlbKI01) {
                            UFtQnZbUD7rI[KZBhfLoF][T5CrBuXWiN] = UFtQnZbUD7rI[KZBhfLoF][T5CrBuXWiN] + g7eJzlqCPT[KZBhfLoF][hkv7PgC] * Li5DJQ6[hkv7PgC][T5CrBuXWiN];
                            hkv7PgC++;
                        }
                    }
                    printf ("%d ", UFtQnZbUD7rI[KZBhfLoF][T5CrBuXWiN]);
                    T5CrBuXWiN++;
                }
            }
            {
                hkv7PgC = 0;
                while (hkv7PgC < UQlbKI01) {
                    UFtQnZbUD7rI[KZBhfLoF][s03KlNBUVqoy - (332 - 331)] = UFtQnZbUD7rI[KZBhfLoF][s03KlNBUVqoy - (851 - 850)] + g7eJzlqCPT[KZBhfLoF][hkv7PgC] * Li5DJQ6[hkv7PgC][s03KlNBUVqoy - 1];
                    hkv7PgC++;
                }
            }
            printf ("%d\n", UFtQnZbUD7rI[KZBhfLoF][s03KlNBUVqoy - 1]);
            KZBhfLoF++;
        }
    }
    return 0;
}

