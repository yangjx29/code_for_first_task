int main () {
    int a [(735 - 635)] [100];
    int GmwBX9 [100] [100];
    int SBUFu3yPGOoA [100] [100] = {0};
    int i, D6ro9k0LFEU, x1, gheNXL, Ei3nR6qkpGOX, ptVB62, e15uHcQ;
    scanf ("%d %d", &x1, &e15uHcQ);
    for (i = 0; i < x1; i = i + 1) {
        for (D6ro9k0LFEU = 0; D6ro9k0LFEU < e15uHcQ; D6ro9k0LFEU = D6ro9k0LFEU +1)
            scanf ("%d", &a[i][D6ro9k0LFEU]);
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
    scanf ("%d %d", &gheNXL, &Ei3nR6qkpGOX);
    for (i = 0; i < gheNXL; i++) {
        for (D6ro9k0LFEU = 0; D6ro9k0LFEU < Ei3nR6qkpGOX; D6ro9k0LFEU++)
            scanf ("%d", &GmwBX9[i][D6ro9k0LFEU]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    for (i = 0; i < x1; i++) {
        for (D6ro9k0LFEU = 0; D6ro9k0LFEU < Ei3nR6qkpGOX; D6ro9k0LFEU++) {
            for (ptVB62 = 0; ptVB62 < gheNXL; ptVB62++) {
                SBUFu3yPGOoA[i][D6ro9k0LFEU] = SBUFu3yPGOoA[i][D6ro9k0LFEU] + a[i][ptVB62] * GmwBX9[ptVB62][D6ro9k0LFEU];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (i != x1 - 1) {
                if (D6ro9k0LFEU != Ei3nR6qkpGOX -1)
                    printf ("%d ", SBUFu3yPGOoA[i][D6ro9k0LFEU]);
                else
                    printf ("%d\n", SBUFu3yPGOoA[i][D6ro9k0LFEU]);
            }
            else {
                if (D6ro9k0LFEU != Ei3nR6qkpGOX -1)
                    printf ("%d ", SBUFu3yPGOoA[i][D6ro9k0LFEU]);
                else
                    printf ("%d", SBUFu3yPGOoA[i][D6ro9k0LFEU]);
            };
        };
    }
    getchar ();
    getchar ();
}

