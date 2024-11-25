int main () {
    int a;
    int b;
    int c;
    int A;
    int B;
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
    int C;
    int ynNhDiXp;
    for (a = 1; a <= 3; a = a + 1)
        for (b = 1; b <= 3; b++)
            for (c = 1; c <= 3; c++) {
                A = (a < b) + (c == a);
                B = (b < a) + (c < a);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                C = (c > b) + (a < b);
                if (a + A == b + B &&b + B == c + C) {
                    if (a < b && a < c) {
                        cout << 'A';
                        if (b < c)
                            cout << 'B' << 'C';
                        else
                            cout << 'C' << 'B';
                    }
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
                    if (b < a && b < c) {
                        cout << 'B';
                        if (a < c)
                            cout << 'A' << 'C';
                        else
                            cout << 'C' << 'A';
                    }
                    if (c < a && c < b) {
                        cout << 'C';
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
                        if (a < b)
                            cout << 'A' << 'B';
                        else
                            cout << 'B' << 'A';
                    };
                };
            }
    return 0;
}

