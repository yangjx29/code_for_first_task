int main () {
    int IiZuMzyaXUT, zSFYlRLzn2Q, fSV4QwYrC8v = 0, SB = 0;
    int xM2VEU [IiZuMzyaXUT];
    int NXxzJ4osEa [IiZuMzyaXUT];
    scanf ("%d", &IiZuMzyaXUT);
    for (zSFYlRLzn2Q = 0; zSFYlRLzn2Q < IiZuMzyaXUT; zSFYlRLzn2Q++) {
        scanf ("%d %d", &xM2VEU[zSFYlRLzn2Q], &NXxzJ4osEa[zSFYlRLzn2Q]);
    }
    for (zSFYlRLzn2Q = 0; zSFYlRLzn2Q < IiZuMzyaXUT; zSFYlRLzn2Q++) {
        if (xM2VEU[zSFYlRLzn2Q] == NXxzJ4osEa[zSFYlRLzn2Q] - 1 || xM2VEU[zSFYlRLzn2Q] == NXxzJ4osEa[zSFYlRLzn2Q] + 2) {
            fSV4QwYrC8v++;
        }
        else if (NXxzJ4osEa[zSFYlRLzn2Q] == xM2VEU[zSFYlRLzn2Q] - 1 || NXxzJ4osEa[zSFYlRLzn2Q] == xM2VEU[zSFYlRLzn2Q] + 2) {
            SB++;
        }
        else {
            SB = SB;
            fSV4QwYrC8v = fSV4QwYrC8v;
        };
    }
    if (fSV4QwYrC8v > SB) {
        printf ("A");
    }
    else {
        if (fSV4QwYrC8v < SB) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else if (fSV4QwYrC8v = SB) {
            printf ("Tie");
        };
    }
    return 0;
}

