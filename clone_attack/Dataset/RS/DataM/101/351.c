int main () {
    int a;
    int b;
    int c;
    char S [3];
    {
        a = 0;
        while (3 > a) {
            {
                b = 0;
                while (3 > b) {
                    for (c = 0; 3 > c; c = c + 1) {
                        int x;
                        int y;
                        int z;
                        x = 2;
                        y = 2;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        z = 2;
                        if (a < b) {
                            x = x - 1;
                            z = z - 1;
                        }
                        if (!(c != a))
                            x = x - 1;
                        if (a > b)
                            y = y - 1;
                        if (c < a)
                            y = y - 1;
                        if (c > b)
                            z = z - 1;
                        if (a == x && b == y && c == z) {
                            S[a] = 'A';
                            S[b] = 'B';
                            S[c] = 'C';
                        };
                    }
                    b++;
                };
            }
            a = a + 1;
        };
    }
    cout << S[0] << S[1] << S[2];
    return 0;
}

