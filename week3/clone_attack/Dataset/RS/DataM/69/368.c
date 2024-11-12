int zdYBolbeH [MAXLEN +10];
int an2 [MAXLEN +10];
char ZcWXHhmrvPk [MAXLEN +10];
char pl58Ttq9 [MAXLEN +10];

int gpDbaCc1 (int txlP23a, int *fp5TZQACz4, int *a2) {
    int halv0P;
    int i;
    int ETf9Dla2;
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
    i = 0;
    ETf9Dla2 = 0;
    for (i = 0; i <= txlP23a; i++) {
        fp5TZQACz4[i] += a2[i];
        if (fp5TZQACz4[i] >= 10) {
            fp5TZQACz4[i] = fp5TZQACz4[i] - 10;
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
            }
            fp5TZQACz4[i + 1]++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (fp5TZQACz4[i] > 0)
            halv0P = i;
    }
    return halv0P;
}

int main () {
    int IO6cABwIL = gpDbaCc1 (MAXLEN, zdYBolbeH, an2);
    int ls4ni95NqVx;
    ls4ni95NqVx = strlen (ZcWXHhmrvPk);
    int Mb8ZtLJeIhF7 = strlen (pl58Ttq9);
    int i;
    int ETf9Dla2;
    i = 0;
    ETf9Dla2 = 0;
    cin >> ZcWXHhmrvPk >> pl58Ttq9;
    memset (zdYBolbeH, 0, sizeof (zdYBolbeH));
    for (ETf9Dla2 = 0, i = ls4ni95NqVx - 1; i >= 0; i--) {
        zdYBolbeH[ETf9Dla2++] = ZcWXHhmrvPk[i] - '0';
    }
    memset (an2, 0, sizeof (an2));
    for (ETf9Dla2 = 0, i = Mb8ZtLJeIhF7 -1; i >= 0; i--) {
        an2[ETf9Dla2++] = pl58Ttq9[i] - '0';
    }
    for (i = IO6cABwIL; i >= 0; i--) {
        cout << zdYBolbeH[i];
    }
    return 0;
}

