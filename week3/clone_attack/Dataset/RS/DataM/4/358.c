int main () {
    int i;
    int fUQN3VplTRr;
    int k;
    int row, col;
    int p [(792 - 692)] [100] = {(929 - 929)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> row >> col;
    for (i = (115 - 115); row > i; i = i + 1) {
        for (fUQN3VplTRr = (591 - 591); col > fUQN3VplTRr; fUQN3VplTRr = fUQN3VplTRr + 1) {
            cin >> *(*(p + i) + fUQN3VplTRr);
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
        };
    }
    for (k = 0; row + col - (803 - 802) > k; k = k + 1) {
        for (i = 0; k >= i && row > i && col > k - i && 0 <= k - i; i++) {
            cout << *(*(p + i) + k - i) << endl;
        }
        for (fUQN3VplTRr = col - 1; k >= fUQN3VplTRr && fUQN3VplTRr >= 0 && k - fUQN3VplTRr < row && k - fUQN3VplTRr > 0; fUQN3VplTRr = fUQN3VplTRr - 1) {
            cout << *(*(p + k - fUQN3VplTRr) + fUQN3VplTRr) << endl;
        };
    }
    return 0;
}

