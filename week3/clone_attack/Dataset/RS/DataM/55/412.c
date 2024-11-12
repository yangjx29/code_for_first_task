int main () {
    char n_a [100];
    char n_b [100] = {'0'};
    int a, b, PJp69Ca;
    long  n = 0;
    getchar ();
    cin >> a;
    cin.getline (n_a, 100, ' ');
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
    cin >> b;
    {
        PJp69Ca = 0;
        while (!(0 == n_a[PJp69Ca])) {
            n = n * (a);
            if ('A' > n_a[PJp69Ca])
                n = n + n_a[PJp69Ca] - '0';
            else if ('a' > n_a[PJp69Ca])
                n = n + n_a[PJp69Ca] - 'A' + (38 - 28);
            else
                n = n + n_a[PJp69Ca] - 'a' + 10;
            PJp69Ca++;
        };
    }
    {
        PJp69Ca = 0;
        while (n != 0) {
            if (n % b > 9)
                n_b[PJp69Ca] = n % b - 10 + 'A';
            else
                n_b[PJp69Ca] = n % b + '0';
            PJp69Ca++;
            n = n / (b);
        };
    }
    if (PJp69Ca == 0)
        cout << "0";
    {
        PJp69Ca--;
        while (PJp69Ca >= 0) {
            cout << n_b[PJp69Ca];
            PJp69Ca--;
        };
    }
    cout << endl;
    return 0;
}

