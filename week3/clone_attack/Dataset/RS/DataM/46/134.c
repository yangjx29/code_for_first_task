int kc1rXBNtD [(596 - 496)] [100] = {0};

int main () {
    int mATZyzN;
    int j;
    int k;
    int a0tSGBReK;
    int PFHmOa9e;
    int m;
    void  eRALshZrJw (char CDvyi73, int KteH64rJ9iWg, int b2, int b3, int N0UqxylLAE2);
    scanf ("%d%d", &m, &PFHmOa9e);
    {
        mATZyzN = 0;
        while (mATZyzN < m) {
            {
                j = 0;
                while (j < PFHmOa9e) {
                    scanf ("%d", &kc1rXBNtD[mATZyzN][j]);
                    j = j + 1;
                };
            }
            mATZyzN = mATZyzN + 1;
        };
    }
    eRALshZrJw ('y', 0, 0, PFHmOa9e -(473 - 472), m - 1);
}

void  eRALshZrJw (char CDvyi73, int KteH64rJ9iWg, int b2, int b3, int N0UqxylLAE2) {
    int mATZyzN;
    int j;
    int k;
    int a0tSGBReK;
    if (CDvyi73 == 'y') {
        for (mATZyzN = KteH64rJ9iWg; mATZyzN <= b3; mATZyzN = mATZyzN + 1)
            printf ("%d\n", kc1rXBNtD[b2][mATZyzN]);
        if (!(N0UqxylLAE2 == b2))
            eRALshZrJw ('x', KteH64rJ9iWg, b2 + 1, b3, N0UqxylLAE2);
    }
    if (CDvyi73 == 'x') {
        {
            mATZyzN = b2;
            while (N0UqxylLAE2 >= mATZyzN) {
                printf ("%d\n", kc1rXBNtD[mATZyzN][b3]);
                mATZyzN = mATZyzN + 1;
            };
        }
        if (KteH64rJ9iWg != b3)
            eRALshZrJw ('z', KteH64rJ9iWg, b2, b3 - 1, N0UqxylLAE2);
    }
    if (CDvyi73 == 'z') {
        for (mATZyzN = b3; mATZyzN >= KteH64rJ9iWg; mATZyzN = mATZyzN - 1)
            printf ("%d\n", kc1rXBNtD[N0UqxylLAE2][mATZyzN]);
        if (b2 != N0UqxylLAE2)
            eRALshZrJw ('s', KteH64rJ9iWg, b2, b3, N0UqxylLAE2 -1);
    }
    if (CDvyi73 == 's') {
        {
            mATZyzN = N0UqxylLAE2;
            while (mATZyzN >= b2) {
                printf ("%d\n", kc1rXBNtD[mATZyzN][KteH64rJ9iWg]);
                mATZyzN = mATZyzN - 1;
            };
        }
        if (KteH64rJ9iWg != b3)
            eRALshZrJw ('y', KteH64rJ9iWg +1, b2, b3, N0UqxylLAE2);
    };
}

