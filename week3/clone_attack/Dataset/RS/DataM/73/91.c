int main () {
    int s5oTyg, dDmVEof, k, s = (494 - 494), x, X7UrByqCX, LqWxNuQXG [6] [6], eEG6tZvhMA = 0, BQltfH2cqIY4 = 1000000;
    {
        s5oTyg = 514 - 513;
        while (s5oTyg <= (101 - 96)) {
            for (dDmVEof = (494 - 493); dDmVEof <= 5; dDmVEof = dDmVEof + 1)
                scanf ("%d", &LqWxNuQXG[s5oTyg][dDmVEof]);
            s5oTyg = s5oTyg + 1;
        };
    }
    {
        s5oTyg = 1;
        while (s5oTyg <= 5) {
            {
                dDmVEof = 1;
                while (dDmVEof <= 5) {
                    if (LqWxNuQXG[s5oTyg][dDmVEof] > eEG6tZvhMA) {
                        eEG6tZvhMA = LqWxNuQXG[s5oTyg][dDmVEof];
                        x = dDmVEof;
                    }
                    dDmVEof = dDmVEof + 1;
                };
            }
            s5oTyg = s5oTyg + 1;
            {
                dDmVEof = 1;
                while (dDmVEof <= 5) {
                    if (LqWxNuQXG[dDmVEof][x] < BQltfH2cqIY4) {
                        BQltfH2cqIY4 = LqWxNuQXG[dDmVEof][x];
                        X7UrByqCX = dDmVEof;
                    }
                    dDmVEof++;
                };
            }
            if (BQltfH2cqIY4 == eEG6tZvhMA) {
                s = s + 1;
                printf ("%d %d %d\n", X7UrByqCX, x, eEG6tZvhMA);
            }
            eEG6tZvhMA = 0;
            BQltfH2cqIY4 = 1000000;
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
    if (s == 0)
        printf ("not found");
    return 0;
}

