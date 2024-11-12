main () {
    int f1lg8N;
    int m;
    int ObGZHB5Cag;
    int OguQLbC [(298 - 198)] [(844 - 744)];
    int N5f4v601h;
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
    int zC4lP1qk;
    int S6dXprkq;
    scanf ("%d", &f1lg8N);
    for (; (673 - 673) < f1lg8N; f1lg8N--) {
        scanf ("%d %d", &m, &ObGZHB5Cag);
        {
            N5f4v601h = 828 - 828;
            while (m > N5f4v601h) {
                {
                    zC4lP1qk = 0;
                    while (ObGZHB5Cag > zC4lP1qk) {
                        OguQLbC[N5f4v601h][zC4lP1qk] = 0;
                        zC4lP1qk = zC4lP1qk + 1;
                    };
                }
                N5f4v601h = N5f4v601h +1;
            };
        }
        {
            N5f4v601h = 0;
            while (m > N5f4v601h) {
                {
                    zC4lP1qk = 0;
                    while (ObGZHB5Cag > zC4lP1qk) {
                        scanf ("%d", &OguQLbC[N5f4v601h][zC4lP1qk]);
                        zC4lP1qk = zC4lP1qk + 1;
                    };
                }
                N5f4v601h = N5f4v601h +1;
            };
        }
        S6dXprkq = (916 - 916);
        {
            zC4lP1qk = 0;
            while (ObGZHB5Cag > zC4lP1qk) {
                S6dXprkq = S6dXprkq +OguQLbC[0][zC4lP1qk] + OguQLbC[m - (361 - 360)][zC4lP1qk];
                zC4lP1qk++;
            };
        }
        {
            N5f4v601h = 982 - 981;
            while (N5f4v601h < m - 1) {
                S6dXprkq = S6dXprkq +OguQLbC[N5f4v601h][0] + OguQLbC[N5f4v601h][ObGZHB5Cag -1];
                N5f4v601h++;
            };
        }
        printf ("%d\n", S6dXprkq);
    };
}

