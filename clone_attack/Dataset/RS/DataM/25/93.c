int main () {
    int num [(786 - 685)] [100];
    int UPQoZV7GlYR;
    int j;
    int yoxR6VATgI;
    for (UPQoZV7GlYR = 0; 100 > UPQoZV7GlYR; UPQoZV7GlYR = UPQoZV7GlYR +1)
        for (j = 0; 101 > j; j = j + 1)
            num[j][UPQoZV7GlYR] = 0;
    num[0][0] = 1;
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
    cin >> yoxR6VATgI;
    for (UPQoZV7GlYR = 1; yoxR6VATgI >= UPQoZV7GlYR; UPQoZV7GlYR = UPQoZV7GlYR +1) {
        j = 0;
        while (90 > j) {
            num[UPQoZV7GlYR][j] = num[UPQoZV7GlYR][j] + 2 * num[UPQoZV7GlYR -1][j];
            if (num[UPQoZV7GlYR][j] > 9) {
                num[UPQoZV7GlYR][j + 1] = num[UPQoZV7GlYR][j + 1] + num[UPQoZV7GlYR][j] / 10;
                num[UPQoZV7GlYR][j] = num[UPQoZV7GlYR][j] % 10;
            }
            j = j + 1;
        };
    }
    UPQoZV7GlYR = 90;
    while (num[yoxR6VATgI][UPQoZV7GlYR] == 0)
        UPQoZV7GlYR--;
    {
        j = UPQoZV7GlYR;
        while (j >= 0) {
            cout << num[yoxR6VATgI][j];
            j--;
        };
    }
    cout << endl;
    return 0;
}

