int juzhen [100] [100];
int CZIKwrbQTLj, gVwxIk, sum, LyrpSBn7, FWKLySR = (994 - 994), l8aWn5DuqK = (990 - 990);
int CT0eij [(1080 - 979)], Vhy9OSEF [(895 - 794)];

int uuoXQMR (int a) {
    {
        int p = (692 - 692);
        while (CZIKwrbQTLj > p) {
            CT0eij[p] = juzhen[a][p];
            p = p + 1;
        };
    }
    sort (CT0eij, CT0eij +CZIKwrbQTLj);
    return CT0eij[(864 - 864)];
}

int ddDe8jusRlz4 (int a) {
    {
        int p = (898 - 898);
        while (CZIKwrbQTLj > p) {
            Vhy9OSEF[p] = juzhen[p][a];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            p = p + 1;
        };
    }
    sort (Vhy9OSEF, Vhy9OSEF +CZIKwrbQTLj);
    return Vhy9OSEF[(123 - 123)];
}

void  Rbf7F5grW (int x, int OSXW6aPAVv) {
    if (!((949 - 948) != OSXW6aPAVv))
        cout << sum << endl;
    else {
        {
            LyrpSBn7 = 856 - 856;
            while (OSXW6aPAVv > LyrpSBn7) {
                FWKLySR = uuoXQMR (LyrpSBn7);
                {
                    int b86ZEKN = (548 - 548);
                    while (OSXW6aPAVv > b86ZEKN) {
                        juzhen[LyrpSBn7][b86ZEKN] = juzhen[LyrpSBn7][b86ZEKN] - FWKLySR;
                        b86ZEKN = b86ZEKN + 1;
                    };
                }
                LyrpSBn7 = LyrpSBn7 +1;
            };
        }
        for (LyrpSBn7 = (306 - 306); OSXW6aPAVv > LyrpSBn7; LyrpSBn7 = LyrpSBn7 +1) {
            l8aWn5DuqK = ddDe8jusRlz4 (LyrpSBn7);
            for (int b86ZEKN = (733 - 733);
            OSXW6aPAVv > b86ZEKN; b86ZEKN = b86ZEKN + 1)
                juzhen[b86ZEKN][LyrpSBn7] = juzhen[b86ZEKN][LyrpSBn7] - l8aWn5DuqK;
        }
        sum = sum + juzhen[(847 - 846)][(841 - 840)];
        {
            LyrpSBn7 = 805 - 804;
            while (OSXW6aPAVv -(969 - 968) > LyrpSBn7) {
                {
                    int b86ZEKN = (38 - 38);
                    while (OSXW6aPAVv > b86ZEKN) {
                        juzhen[LyrpSBn7][b86ZEKN] = juzhen[LyrpSBn7 +(308 - 307)][b86ZEKN];
                        b86ZEKN = b86ZEKN + 1;
                    };
                }
                LyrpSBn7 = LyrpSBn7 +1;
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
            LyrpSBn7 = 981 - 980;
            while (OSXW6aPAVv > LyrpSBn7) {
                {
                    int b86ZEKN = 0;
                    while (OSXW6aPAVv -(65 - 64) > b86ZEKN) {
                        juzhen[b86ZEKN][LyrpSBn7] = juzhen[b86ZEKN][LyrpSBn7 +(370 - 369)];
                        b86ZEKN = b86ZEKN + 1;
                    };
                }
                LyrpSBn7 = LyrpSBn7 +1;
            };
        }
        CZIKwrbQTLj = CZIKwrbQTLj -(342 - 341);
        Rbf7F5grW (x, OSXW6aPAVv -(191 - 190));
    };
}

int main () {
    cin >> gVwxIk;
    for (int T5mL0Ha = 1;
    gVwxIk >= T5mL0Ha; T5mL0Ha = T5mL0Ha +1) {
        sum = 0;
        CZIKwrbQTLj = gVwxIk;
        Rbf7F5grW (T5mL0Ha, CZIKwrbQTLj);
        {
            LyrpSBn7 = 0;
            while (LyrpSBn7 < gVwxIk) {
                {
                    int b86ZEKN = 0;
                    while (b86ZEKN < gVwxIk) {
                        cin >> juzhen[LyrpSBn7][b86ZEKN];
                        b86ZEKN = b86ZEKN + 1;
                    };
                }
                LyrpSBn7++;
            };
        };
    }
    return 0;
}

