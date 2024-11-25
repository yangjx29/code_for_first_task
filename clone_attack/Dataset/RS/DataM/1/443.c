int a = 1;

int G91lmCFW (int yMtspeA0iyk, int n) {
    {
        int TNKBH8Jpq3;
        TNKBH8Jpq3 = yMtspeA0iyk;
        while (TNKBH8Jpq3 < n) {
            if (!(0 != n % TNKBH8Jpq3) && n != TNKBH8Jpq3 &&n / TNKBH8Jpq3 >= TNKBH8Jpq3) {
                G91lmCFW (TNKBH8Jpq3, n / TNKBH8Jpq3);
                a = a + 1;
            }
            TNKBH8Jpq3 = TNKBH8Jpq3 +1;
        };
    }
    return 0;
}

int main () {
    int n, s;
    cin >> s;
    {
        int yMtspeA0iyk = 0;
        while (s > yMtspeA0iyk) {
            yMtspeA0iyk = yMtspeA0iyk + 1;
            cin >> n;
            {
                int TNKBH8Jpq3 = 2;
                while (TNKBH8Jpq3 <= n) {
                    if (!(0 != n % TNKBH8Jpq3) && n / TNKBH8Jpq3 >= TNKBH8Jpq3) {
                        G91lmCFW (TNKBH8Jpq3, n / TNKBH8Jpq3);
                        a = a + 1;
                    }
                    TNKBH8Jpq3 = TNKBH8Jpq3 +1;
                };
            }
            cout << a << endl;
            a = 1;
        };
    }
    return 0;
}

