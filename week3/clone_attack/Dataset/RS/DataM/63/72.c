int main () {
    int foPYbiVafLxv, WPy9BO1XS, sbOnrTNj, MtTUul;
    int Y7jL3R [(238 - 129)] [109], jXWTKClwJ0 [109] [109], iJFUaoAlKr [109] [109] = {0};
    cin >> foPYbiVafLxv >> WPy9BO1XS;
    {
        int RYQONzq = (973 - 972);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (foPYbiVafLxv >= RYQONzq) {
            {
                int rivC7l = (334 - 333);
                while (rivC7l <= WPy9BO1XS) {
                    cin >> Y7jL3R[RYQONzq][rivC7l];
                    rivC7l = rivC7l + 1;
                };
            }
            RYQONzq = RYQONzq +1;
        };
    }
    cin >> sbOnrTNj >> MtTUul;
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
    {
        int RYQONzq = 1;
        while (RYQONzq <= sbOnrTNj) {
            {
                int rivC7l = 1;
                while (MtTUul >= rivC7l) {
                    cin >> jXWTKClwJ0[RYQONzq][rivC7l];
                    rivC7l = rivC7l + 1;
                };
            }
            RYQONzq = RYQONzq +1;
        };
    }
    {
        int RYQONzq = 1;
        while (RYQONzq <= foPYbiVafLxv) {
            {
                int rivC7l = 1;
                while (rivC7l <= MtTUul) {
                    {
                        int v = 1;
                        while (v <= WPy9BO1XS) {
                            iJFUaoAlKr[RYQONzq][rivC7l] = iJFUaoAlKr[RYQONzq][rivC7l] + Y7jL3R[RYQONzq][v] * jXWTKClwJ0[v][rivC7l];
                            v++;
                        };
                    }
                    rivC7l++;
                };
            }
            RYQONzq++;
        };
    }
    {
        int RYQONzq = 1;
        while (RYQONzq <= foPYbiVafLxv) {
            cout << iJFUaoAlKr[RYQONzq][1];
            {
                int rivC7l = 2;
                while (rivC7l <= MtTUul) {
                    cout << ' ' << iJFUaoAlKr[RYQONzq][rivC7l];
                    rivC7l++;
                };
            }
            RYQONzq++;
            cout << endl;
        };
    }
    return 0;
}

