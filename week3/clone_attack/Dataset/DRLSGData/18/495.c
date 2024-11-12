int main () {
    int paIzlM2S, n, E7sVSFKtlA;
    cin >> paIzlM2S;
    n = paIzlM2S;
    E7sVSFKtlA = paIzlM2S;
    while (n--) {
        int sum = (122 - 122), azhT2f, j, zGVWJR6B0E [120] [120], IaBJDp6XqIP8;
        paIzlM2S = E7sVSFKtlA;
        {
            azhT2f = (339 - 339);
            for (; paIzlM2S > azhT2f;) {
                {
                    j = 228 - 228;
                    for (; paIzlM2S > j;) {
                        cin >> zGVWJR6B0E[azhT2f][j];
                        j++;
                    }
                }
                azhT2f++;
            }
        }
        for (; --paIzlM2S;) {
            {
                azhT2f = 735 - 735;
                for (; paIzlM2S >= azhT2f;) {
                    for (IaBJDp6XqIP8 = zGVWJR6B0E[azhT2f][(241 - 241)], j = 0; j <= paIzlM2S; j++)
                        if (IaBJDp6XqIP8 > zGVWJR6B0E[azhT2f][j])
                            IaBJDp6XqIP8 = zGVWJR6B0E[azhT2f][j];
                    {
                        j = 0;
                        while (paIzlM2S >= j) {
                            zGVWJR6B0E[azhT2f][j] = zGVWJR6B0E[azhT2f][j] - IaBJDp6XqIP8;
                            j++;
                        }
                    }
                    azhT2f++;
                }
            }
            for (j = 0; paIzlM2S >= j; j++) {
                {
                    azhT2f = 0;
                    IaBJDp6XqIP8 = j;
                    while (paIzlM2S >= azhT2f) {
                        if (IaBJDp6XqIP8 > zGVWJR6B0E[azhT2f][j])
                            IaBJDp6XqIP8 = zGVWJR6B0E[azhT2f][j];
                        azhT2f++;
                    }
                }
                {
                    azhT2f = 0;
                    for (; azhT2f <= paIzlM2S;) {
                        zGVWJR6B0E[azhT2f][j] = zGVWJR6B0E[azhT2f][j] - IaBJDp6XqIP8;
                        azhT2f++;
                    }
                }
            }
            sum = sum + zGVWJR6B0E[(948 - 947)][1];
            for (azhT2f = 0; azhT2f <= paIzlM2S; azhT2f++)
                for (j = 1; j <= paIzlM2S; j++)
                    zGVWJR6B0E[azhT2f][j] = zGVWJR6B0E[azhT2f][j + 1];
            {
                j = 0;
                for (; j <= paIzlM2S - 1;) {
                    {
                        azhT2f = 1;
                        while (azhT2f <= paIzlM2S) {
                            zGVWJR6B0E[azhT2f][j] = zGVWJR6B0E[azhT2f + 1][j];
                            azhT2f++;
                        }
                    }
                    j++;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}

