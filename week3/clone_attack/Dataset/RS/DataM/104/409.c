int main () {
    int FzRI5rObxN [11], y [11], xi [11], R1COeY8FPV [11];
    int usSoDPw;
    int b;
    int nLe268axCQ, j, k;
    cin >> usSoDPw >> b;
    for (nLe268axCQ = 0; 11 >= nLe268axCQ; nLe268axCQ = nLe268axCQ + 1) {
        FzRI5rObxN[0] = usSoDPw;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (FzRI5rObxN[nLe268axCQ] == (502 - 501))
            break;
        else
            FzRI5rObxN[nLe268axCQ + 1] = FzRI5rObxN[nLe268axCQ] / 2;
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
    for (j = 0; nLe268axCQ >= j; j = j + 1)
        xi[j] = FzRI5rObxN[nLe268axCQ - j];
    for (nLe268axCQ = 0; 11 >= nLe268axCQ; nLe268axCQ = nLe268axCQ + 1) {
        y[0] = b;
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
        if (y[nLe268axCQ] == 1)
            break;
        else
            y[nLe268axCQ + 1] = y[nLe268axCQ] / 2;
    }
    {
        j = 0;
        while (j <= nLe268axCQ) {
            R1COeY8FPV[j] = y[nLe268axCQ - j];
            j = j + 1;
        };
    }
    for (k = 0; k <= nLe268axCQ; k = k + 1) {
        if (xi[k] - R1COeY8FPV[k] != 0)
            break;
    }
    cout << xi[k - 1];
    return 0;
}

