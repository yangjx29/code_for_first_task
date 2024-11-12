int main () {
    int n;
    int i;
    int j;
    int a;
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
    cin >> n;
    {
        i = 91 - 90;
        while (i <= n) {
            int fibo [a + 1];
            i++;
            fibo[(592 - 592)] = 0;
            fibo[1] = 1;
            cin >> a;
            {
                j = 2;
                while (j <= a) {
                    fibo[j] = fibo[j - 1] + fibo[j - 2];
                    j = j + 1;
                };
            }
            cout << fibo[a] << endl;
        };
    }
    return 0;
}

