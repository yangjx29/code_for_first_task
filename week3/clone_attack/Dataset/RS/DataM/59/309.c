int main () {
    int ppyADN = 0, vx26s7OnhZSf = 0, PKxczXFoQT = 0;
    char R2aelLJsMgi [100] [101] = {0};
    cin >> ppyADN;
    {
        int W5p3JTZ = 0;
        while (W5p3JTZ < ppyADN) {
            {
                int nEjNzZUfI = 0;
                while (nEjNzZUfI < ppyADN) {
                    cin >> R2aelLJsMgi[W5p3JTZ][nEjNzZUfI];
                    nEjNzZUfI = nEjNzZUfI + 1;
                };
            }
            W5p3JTZ = W5p3JTZ +1;
        };
    }
    cin >> vx26s7OnhZSf;
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
        int vqm7Ptb54 = 1;
        while (vqm7Ptb54 < vx26s7OnhZSf) {
            vqm7Ptb54 = vqm7Ptb54 + 1;
            for (int W5p3JTZ = 0;
            W5p3JTZ < ppyADN; W5p3JTZ = W5p3JTZ +1) {
                int nEjNzZUfI = 0;
                while (nEjNzZUfI < ppyADN) {
                    if (!('@' != R2aelLJsMgi[W5p3JTZ][nEjNzZUfI])) {
                        if (nEjNzZUfI > 0 && R2aelLJsMgi[W5p3JTZ][nEjNzZUfI - 1] == '.')
                            R2aelLJsMgi[W5p3JTZ][nEjNzZUfI - 1] = '&';
                        if (nEjNzZUfI < ppyADN - 1 && R2aelLJsMgi[W5p3JTZ][nEjNzZUfI + 1] == '.')
                            R2aelLJsMgi[W5p3JTZ][nEjNzZUfI + 1] = '&';
                        if (W5p3JTZ > 0 && R2aelLJsMgi[W5p3JTZ -1][nEjNzZUfI] == '.')
                            R2aelLJsMgi[W5p3JTZ -1][nEjNzZUfI] = '&';
                        if (W5p3JTZ < ppyADN - 1 && R2aelLJsMgi[W5p3JTZ +1][nEjNzZUfI] == '.')
                            R2aelLJsMgi[W5p3JTZ +1][nEjNzZUfI] = '&';
                    }
                    nEjNzZUfI = nEjNzZUfI + 1;
                };
            }
            {
                int W5p3JTZ = 0;
                while (W5p3JTZ < ppyADN) {
                    {
                        int nEjNzZUfI = 0;
                        while (nEjNzZUfI < ppyADN) {
                            if (R2aelLJsMgi[W5p3JTZ][nEjNzZUfI] == '&')
                                R2aelLJsMgi[W5p3JTZ][nEjNzZUfI] = '@';
                            nEjNzZUfI = nEjNzZUfI + 1;
                        };
                    }
                    W5p3JTZ = W5p3JTZ +1;
                };
            };
        };
    }
    {
        int W5p3JTZ = 0;
        while (W5p3JTZ < ppyADN) {
            {
                int nEjNzZUfI = 0;
                while (nEjNzZUfI < ppyADN) {
                    if (R2aelLJsMgi[W5p3JTZ][nEjNzZUfI] == '@' || R2aelLJsMgi[W5p3JTZ][nEjNzZUfI] == '&')
                        PKxczXFoQT = PKxczXFoQT +1;
                    nEjNzZUfI = nEjNzZUfI + 1;
                };
            }
            W5p3JTZ++;
        };
    }
    cout << PKxczXFoQT;
    return 0;
}

