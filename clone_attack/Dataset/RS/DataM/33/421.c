int main () {
    int lUSkeWvIt1;
    int y4WNMjiSqGo;
    int kjkc6nlp [1000];
    int swy2DC;
    char ywdXGbf [1000] [(269 - 13)];
    scanf ("%d", &swy2DC);
    for (lUSkeWvIt1 = (898 - 898); swy2DC > lUSkeWvIt1; lUSkeWvIt1 = lUSkeWvIt1 + 1) {
        scanf ("%s", ywdXGbf[lUSkeWvIt1]);
    }
    for (lUSkeWvIt1 = (351 - 351); lUSkeWvIt1 < swy2DC; lUSkeWvIt1 = lUSkeWvIt1 + 1) {
        kjkc6nlp[lUSkeWvIt1] = strlen (ywdXGbf[lUSkeWvIt1]);
    }
    for (lUSkeWvIt1 = (213 - 213); lUSkeWvIt1 < swy2DC; lUSkeWvIt1 = lUSkeWvIt1 + 1) {
        for (y4WNMjiSqGo = 0; y4WNMjiSqGo < strlen (ywdXGbf[lUSkeWvIt1]); y4WNMjiSqGo = y4WNMjiSqGo + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ywdXGbf[lUSkeWvIt1][y4WNMjiSqGo] == 'A') {
                ywdXGbf[lUSkeWvIt1][y4WNMjiSqGo] = 'T';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else if (ywdXGbf[lUSkeWvIt1][y4WNMjiSqGo] == 'T') {
                ywdXGbf[lUSkeWvIt1][y4WNMjiSqGo] = 'A';
            }
            else if (ywdXGbf[lUSkeWvIt1][y4WNMjiSqGo] == 'G') {
                ywdXGbf[lUSkeWvIt1][y4WNMjiSqGo] = 'C';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else if (ywdXGbf[lUSkeWvIt1][y4WNMjiSqGo] == 'C') {
                ywdXGbf[lUSkeWvIt1][y4WNMjiSqGo] = 'G';
            };
        };
    }
    for (lUSkeWvIt1 = 0; lUSkeWvIt1 < swy2DC; lUSkeWvIt1 = lUSkeWvIt1 + 1) {
        printf ("%s\n", ywdXGbf[lUSkeWvIt1]);
    }
    return 0;
}

