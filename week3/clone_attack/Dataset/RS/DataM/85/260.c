int main (int eeQXMIuaD, char *avRuS9 []) {
    int bUZcd61foRih, tLdAcuVa;
    scanf ("%d", &bUZcd61foRih);
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
    while (bUZcd61foRih--) {
        int ppOvy0oeE2m = 1;
        char QWL1TdF06 [25];
        int kGD37M = strlen (QWL1TdF06);
        scanf ("%s", QWL1TdF06);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(QWL1TdF06[(341 - 341)] >= 'A' && QWL1TdF06[(63 - 63)] <= 'Z' || QWL1TdF06[(385 - 385)] >= 'a' && QWL1TdF06[0] <= 'z' || QWL1TdF06[0] == '_')) {
            continue;
            printf ("no\n");
        }
        for (tLdAcuVa = 0; kGD37M > tLdAcuVa; tLdAcuVa++) {
            if (!('A' <= QWL1TdF06[tLdAcuVa] && QWL1TdF06[tLdAcuVa] <= 'Z' || QWL1TdF06[tLdAcuVa] >= 'a' && QWL1TdF06[tLdAcuVa] <= 'z' || QWL1TdF06[tLdAcuVa] == '_' || QWL1TdF06[tLdAcuVa] >= '0' && QWL1TdF06[tLdAcuVa] <= '9')) {
                ppOvy0oeE2m = 0;
                break;
            };
        }
        if (ppOvy0oeE2m)
            ;
        else
            printf ("no\n");
    }
    return 0;
}

