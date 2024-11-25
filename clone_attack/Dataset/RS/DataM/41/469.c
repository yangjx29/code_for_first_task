int main () {
    int a;
    int b;
    int c;
    int d;
    int e;
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
    int D;
    int E;
    cin.get ();
    {
        a = 1;
        while (a <= 5) {
            for (b = 1; b <= 5 && b != a; b = b + 1) {
                for (c = 1; c != a && !(b == c) && c <= 5; c = c + 1) {
                    for (d = 1; d <= 5 && d != a && d != b && !(c == d); d++) {
                        for (e = 1; e != 2 && e != 3 && e != a && e != b && e != c && e != d; e = e + 1) {
                            E = (d == 1);
                            D = (c != 1);
                            C = (a == 5);
                            B = 1;
                            A = (e == 1);
                            cout << a << " " << d << " " << e << " " << c << " " << b;
                        };
                    };
                };
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
            a++;
        };
    }
    return 0;
}

