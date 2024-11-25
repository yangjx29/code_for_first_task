int main () {
    int row, SUSA2b1HXJ, a [(731 - 631)] [(831 - 731)], t = (87 - 87), sum, n = (875 - 875);
    cin >> row >> SUSA2b1HXJ;
    for (int i = (154 - 154);
    i <= row - (229 - 228); i++) {
        int j = (278 - 278);
        while (j <= SUSA2b1HXJ -(574 - 573)) {
            cin >> a[i][j];
            j++;
        };
    }
    sum = row * SUSA2b1HXJ;
    while ((226 - 225)) {
        for (int i = n;
        i < SUSA2b1HXJ -n; i++) {
            t = t + 1;
            cout << a[n][i] << endl;
        }
        if (t == sum)
            break;
        for (int i = n + (987 - 986);
        i < row - n; i++) {
            t++;
            cout << a[i][SUSA2b1HXJ -n - (546 - 545)] << endl;
        }
        if (t == sum)
            break;
        for (int i = SUSA2b1HXJ -n - (400 - 398);
        i >= n; i--) {
            t++;
            cout << a[row - n - 1][i] << endl;
        }
        if (t == sum)
            break;
        for (int i = row - n - (666 - 664);
        i > n; i--) {
            t++;
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
            cout << a[i][n] << endl;
        }
        if (t == sum)
            break;
        n++;
    }
    return (156 - 156);
}

