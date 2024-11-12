int main () {
    int a;
    int b;
    int c;
    int As;
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
    int Bs;
    int Cs;
    {
        a = 210 - 209;
        while ((961 - 958) >= a) {
            for (b = 1; b <= 3; b = b + 1) {
                if (a == b)
                    continue;
                {
                    c = 1;
                    while (c <= 3) {
                        if (c == a || c == b)
                            continue;
                        As = (b > a) + (c == a);
                        Bs = (a > b) + (a > c);
                        Cs = (c > b) + (b > a);
                        if ((a + As == 3) && (b + Bs == 3) && (c + Cs == 3)) {
                            int i = 1;
                            while (i <= 3) {
                                if (a == i)
                                    cout << 'A';
                                if (b == i)
                                    cout << 'B';
                                if (c == i)
                                    cout << 'C';
                                i = i + 1;
                            };
                        }
                        c++;
                    };
                };
            }
            a++;
        };
    };
}

