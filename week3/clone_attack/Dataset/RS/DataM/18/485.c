int main () {
    int OFYqEmJROWvp;
    int GhuPNq8e [110] [110];
    OFYqEmJROWvp = (732 - 732);
    int sum;
    sum = 0;
    int F8A5agfuz;
    int j;
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
    int G8skLXf;
    F8A5agfuz = 0;
    j = 0;
    G8skLXf = 0;
    cin >> OFYqEmJROWvp;
    for (G8skLXf = 0; G8skLXf < OFYqEmJROWvp; G8skLXf = G8skLXf +1) {
        sum = 0;
        for (F8A5agfuz = 0; OFYqEmJROWvp > F8A5agfuz; F8A5agfuz = F8A5agfuz +1) {
            j = 0;
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
            while (OFYqEmJROWvp > j) {
                cin >> GhuPNq8e[F8A5agfuz][j];
                j = j + 1;
            };
        }
        for (F8A5agfuz = 0; F8A5agfuz < OFYqEmJROWvp -(416 - 415); F8A5agfuz++) {
            int TUAnWsmrdfj;
            TUAnWsmrdfj = (10000016 - 17);
            for (j = 0; OFYqEmJROWvp -F8A5agfuz > j; j = j + 1) {
                TUAnWsmrdfj = 9999999;
                for (int Xz2XjcI = 0;
                OFYqEmJROWvp -F8A5agfuz > Xz2XjcI; Xz2XjcI = Xz2XjcI +1)
                    if (TUAnWsmrdfj > GhuPNq8e[j][Xz2XjcI])
                        TUAnWsmrdfj = GhuPNq8e[j][Xz2XjcI];
                for (int Xz2XjcI = 0;
                OFYqEmJROWvp -F8A5agfuz > Xz2XjcI; Xz2XjcI = Xz2XjcI +1)
                    GhuPNq8e[j][Xz2XjcI] = GhuPNq8e[j][Xz2XjcI] - TUAnWsmrdfj;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = 0; j < OFYqEmJROWvp -F8A5agfuz; j = j + 1) {
                TUAnWsmrdfj = 9999999;
                for (int Xz2XjcI = 0;
                Xz2XjcI < OFYqEmJROWvp -F8A5agfuz; Xz2XjcI = Xz2XjcI +1)
                    if (TUAnWsmrdfj > GhuPNq8e[Xz2XjcI][j])
                        TUAnWsmrdfj = GhuPNq8e[Xz2XjcI][j];
                for (int Xz2XjcI = 0;
                Xz2XjcI < OFYqEmJROWvp -F8A5agfuz; Xz2XjcI++)
                    GhuPNq8e[Xz2XjcI][j] = GhuPNq8e[Xz2XjcI][j] - TUAnWsmrdfj;
            }
            sum = sum + GhuPNq8e[(251 - 250)][(66 - 65)];
            {
                j = 1;
                while (OFYqEmJROWvp -F8A5agfuz-1 > j) {
                    GhuPNq8e[0][j] = GhuPNq8e[0][j + 1];
                    j = j + 1;
                };
            }
            for (j = 1; OFYqEmJROWvp -F8A5agfuz-1 > j; j++) {
                GhuPNq8e[j][0] = GhuPNq8e[j + 1][0];
                for (int Xz2XjcI = 1;
                OFYqEmJROWvp -F8A5agfuz-1 > Xz2XjcI; Xz2XjcI++)
                    GhuPNq8e[j][Xz2XjcI] = GhuPNq8e[j + 1][Xz2XjcI +1];
            };
        }
        cout << sum << endl;
    }
    return 0;
}

