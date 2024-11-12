int main () {
    int GjoQwX;
    int qcnSR8V [(503 - 483)];
    int b [20];
    int djWlDYLGnpkV [20];
    int l0Vckqu;
    int nAEhrxNmu6LZ;
    int t4XfcZaR2;
    int wqhlftpNr9P;
    scanf ("%d", &GjoQwX);
    {
        t4XfcZaR2 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t4XfcZaR2 < GjoQwX) {
            scanf ("%d", &qcnSR8V[t4XfcZaR2]);
            t4XfcZaR2++;
        };
    }
    {
        l0Vckqu = 0;
        while (l0Vckqu < GjoQwX) {
            b[l0Vckqu] = 0;
            djWlDYLGnpkV[l0Vckqu] = 1;
            {
                wqhlftpNr9P = 0;
                while (wqhlftpNr9P < qcnSR8V[l0Vckqu] - 1) {
                    wqhlftpNr9P = wqhlftpNr9P + 1;
                    nAEhrxNmu6LZ = b[l0Vckqu];
                    b[l0Vckqu] = djWlDYLGnpkV[l0Vckqu];
                    djWlDYLGnpkV[l0Vckqu] = b[l0Vckqu] + nAEhrxNmu6LZ;
                };
            }
            printf ("%d\n", djWlDYLGnpkV[l0Vckqu]);
            l0Vckqu++;
        };
    }
    return 0;
}

