int main () {
    int flag;
    int tdiZzJD;
    int i0QOGXnSBIe;
    int len;
    int temDivid;
    flag = 0;
    char dividend [100];
    char RrMJGmp [100];
    cin >> dividend;
    len = strlen (dividend);
    {
        temDivid = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        tdiZzJD = 0;
        while (tdiZzJD < len - 1) {
            RrMJGmp[tdiZzJD] = temDivid / DIVISOR +'0';
            i0QOGXnSBIe = temDivid % DIVISOR;
            temDivid = i0QOGXnSBIe * 10 + (dividend[tdiZzJD + 1] - '0');
            tdiZzJD++;
        };
    }
    RrMJGmp[tdiZzJD] = temDivid / DIVISOR +'0';
    i0QOGXnSBIe = temDivid % DIVISOR;
    RrMJGmp[tdiZzJD + 1] = '\0';
    for (tdiZzJD = 0; !('0' != RrMJGmp[tdiZzJD]);)
        tdiZzJD++;
    if (RrMJGmp[tdiZzJD] == '\0')
        cout << 0 << endl << i0QOGXnSBIe << endl;
    else
        cout << RrMJGmp +tdiZzJD << endl << i0QOGXnSBIe << endl;
    return 0;
}

