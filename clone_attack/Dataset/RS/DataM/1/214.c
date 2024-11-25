void  JyTUXrQw4 (int);
int E4w7hPb9ixCs = (683 - 682);

int main () {
    int lZ7m3B2J5, X1QSGXO0a, i;
    cin >> lZ7m3B2J5;
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
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= lZ7m3B2J5) {
            JyTUXrQw4 (X1QSGXO0a);
            cin >> X1QSGXO0a;
            cout << E4w7hPb9ixCs << endl;
            E4w7hPb9ixCs = 1;
            i = i + 1;
        };
    }
    return 0;
}

int EQSyjstZG [100] = {2}, i = 0;

void  JyTUXrQw4 (int x) {
    int zgtmIrq;
    for (zgtmIrq = EQSyjstZG[i]; zgtmIrq < x; zgtmIrq++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (x % zgtmIrq == 0 && x / zgtmIrq >= zgtmIrq) {
            i++;
            EQSyjstZG[i] = zgtmIrq;
            JyTUXrQw4 (x / zgtmIrq);
            zgtmIrq = EQSyjstZG[i];
            i = i - 1;
            E4w7hPb9ixCs = E4w7hPb9ixCs +1;
        };
    };
}

