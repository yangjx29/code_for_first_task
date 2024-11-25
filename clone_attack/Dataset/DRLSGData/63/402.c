int main () {
    int qit7YvQAq50, WEMGhe, FqYSgn, mdN1f7iroOZ;
    int fZprM1;
    int Fn4691OU0o;
    int fiBZJpEn6U;
    int WstcPjO [(1017 - 917)] [100], S2YgrLDZ0E [100] [100];
    int yWiEzfDA [100] [100] = {0};
    scanf ("%d %d", &qit7YvQAq50, &WEMGhe);
    {
        fZprM1 = 0;
        while (qit7YvQAq50 > fZprM1) {
            {
                Fn4691OU0o = 0;
                while (WEMGhe > Fn4691OU0o) {
                    scanf ("%d", &WstcPjO[fZprM1][Fn4691OU0o]);
                    Fn4691OU0o = Fn4691OU0o +1;
                }
            }
            fZprM1 = fZprM1 + 1;
        }
    }
    scanf ("%d %d", &FqYSgn, &mdN1f7iroOZ);
    {
        fZprM1 = 0;
        while (fZprM1 < FqYSgn) {
            Fn4691OU0o = 0;
            while (mdN1f7iroOZ > Fn4691OU0o) {
                scanf ("%d", &S2YgrLDZ0E[fZprM1][Fn4691OU0o]);
                Fn4691OU0o = Fn4691OU0o +1;
            }
            fZprM1 = fZprM1 + 1;
        }
    }
    {
        fZprM1 = 0;
        while (qit7YvQAq50 > fZprM1) {
            {
                Fn4691OU0o = 0;
                while (Fn4691OU0o < mdN1f7iroOZ) {
                    {
                        fiBZJpEn6U = 0;
                        while (fiBZJpEn6U < WEMGhe) {
                            yWiEzfDA[fZprM1][Fn4691OU0o] = yWiEzfDA[fZprM1][Fn4691OU0o] + WstcPjO[fZprM1][fiBZJpEn6U] * S2YgrLDZ0E[fiBZJpEn6U][Fn4691OU0o];
                            fiBZJpEn6U = fiBZJpEn6U + 1;
                        }
                    }
                    Fn4691OU0o = Fn4691OU0o +1;
                }
            }
            fZprM1 = fZprM1 + 1;
        }
    }
    {
        fZprM1 = 0;
        while (fZprM1 < qit7YvQAq50) {
            {
                Fn4691OU0o = 0;
                while (Fn4691OU0o < mdN1f7iroOZ) {
                    printf ("%d%c", yWiEzfDA[fZprM1][Fn4691OU0o], (Fn4691OU0o == mdN1f7iroOZ - 1) ? '\n' : ' ');
                    Fn4691OU0o++;
                }
            }
            fZprM1++;
        }
    }
    return 0;
}

