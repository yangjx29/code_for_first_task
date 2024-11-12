int main () {
    int ad2LpST [101] [101];
    int dLATMp, col, IBRAiP, i, j, k;
    cin >> dLATMp >> col;
    IBRAiP = dLATMp + col - 1;
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
    for (i = 0; i < dLATMp; i = i + 1)
        for (j = 0; j < col; j++)
            cin >> *(*(ad2LpST + i) + j);
    for (i = 0; i < IBRAiP; i = i + 1)
        for (j = 0; j < dLATMp; j++) {
            k = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (k < col) {
                if ((j + k) == i) {
                    cout << *(*(ad2LpST + j) + k) << endl;
                    break;
                }
                k++;
            };
        }
    return 0;
}

