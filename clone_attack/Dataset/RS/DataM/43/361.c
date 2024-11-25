int main () {
    int a, b, c, mp6yxjoH4;
    int n;
    cin >> n;
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
        a = 3;
        while (n / 2 >= a) {
            {
                c = 2;
                while (sqrt ((double ) a) >= c) {
                    if (a % c == 0)
                        break;
                    c = c + 1;
                };
            }
            {
                mp6yxjoH4 = 2;
                while (mp6yxjoH4 <= sqrt ((double ) n - a)) {
                    if ((n - a) % mp6yxjoH4 == 0)
                        break;
                    mp6yxjoH4 = mp6yxjoH4 + 1;
                };
            }
            if (c > sqrt ((double ) a) && mp6yxjoH4 > sqrt ((double ) n - a))
                cout << a << " " << n - a << endl;
            a = a + 2;
        };
    }
    return 0;
}

