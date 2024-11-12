int main () {
    int j;
    int PtC607;
    j = 0;
    int a [100000];
    int VvydiSLDHJKA;
    int n1KHGQswqxn;
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
    cin >> VvydiSLDHJKA;
    {
        n1KHGQswqxn = 0;
        while (VvydiSLDHJKA > n1KHGQswqxn) {
            cin >> a[n1KHGQswqxn];
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
            n1KHGQswqxn = n1KHGQswqxn + 1;
        };
    }
    cin >> PtC607;
    for (n1KHGQswqxn = 0; VvydiSLDHJKA -j > n1KHGQswqxn;) {
        if (!(PtC607 != a[n1KHGQswqxn])) {
            {
                int t = n1KHGQswqxn;
                while (VvydiSLDHJKA -j - 1 > t) {
                    a[t] = a[t + 1];
                    t++;
                };
            }
            j = j + 1;
        }
        else
            n1KHGQswqxn = n1KHGQswqxn + 1;
    }
    for (n1KHGQswqxn = 0; n1KHGQswqxn < VvydiSLDHJKA -j - 1; n1KHGQswqxn++)
        cout << a[n1KHGQswqxn] << " ";
    cout << a[VvydiSLDHJKA -j - 1] << endl;
    return 0;
}

