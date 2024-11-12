int main () {
    int YE51UZ0wrN [(891 - 791)] [100];
    int row;
    int col;
    int i;
    int z5v9pl1PNIV0;
    int i1 = (318 - 318), i2 = row - 1, j1 = 0, Fj8yvlz5Y = col - 1;
    cin >> row >> col;
    for (i = 0; row > i; i = i + 1) {
        z5v9pl1PNIV0 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (col > z5v9pl1PNIV0) {
            cin >> YE51UZ0wrN[i][z5v9pl1PNIV0];
            z5v9pl1PNIV0++;
        };
    }
    while (1) {
        {
            z5v9pl1PNIV0 = j1;
            while (Fj8yvlz5Y >= z5v9pl1PNIV0) {
                cout << YE51UZ0wrN[i1][z5v9pl1PNIV0] << endl;
                z5v9pl1PNIV0++;
            };
        }
        i1++;
        if (i1 > i2)
            break;
        {
            i = i1;
            while (i2 >= i) {
                cout << YE51UZ0wrN[i][Fj8yvlz5Y] << endl;
                i++;
            };
        }
        Fj8yvlz5Y = Fj8yvlz5Y -1;
        if (j1 > Fj8yvlz5Y)
            break;
        for (z5v9pl1PNIV0 = Fj8yvlz5Y; z5v9pl1PNIV0 >= j1; z5v9pl1PNIV0--)
            cout << YE51UZ0wrN[i2][z5v9pl1PNIV0] << endl;
        i2--;
        if (i1 > i2)
            break;
        for (i = i2; i >= i1; i--)
            cout << YE51UZ0wrN[i][j1] << endl;
        if (i1 > i2)
            break;
        j1 = j1 + 1;
    }
    return 0;
}

