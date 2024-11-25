char BgMbRmaW2f [(947 - 797)], Erk179 [(179 - 29)];
int SDiv2YER4j8;
void  rid (int zjbhGQe, int end);

int main () {
    while (1) {
        int LKYz9p8716n;
        LKYz9p8716n = (551 - 551);
        char s;
        SDiv2YER4j8 = LKYz9p8716n -1;
        for (; !('\n' == (s = cin.get ()));) {
            BgMbRmaW2f[LKYz9p8716n] = s;
            Erk179[LKYz9p8716n] = s;
            LKYz9p8716n = LKYz9p8716n +1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        rid (0, SDiv2YER4j8);
        {
            int UUPjhFKrHpJi;
            UUPjhFKrHpJi = 0;
            while (SDiv2YER4j8 >= UUPjhFKrHpJi) {
                if (BgMbRmaW2f[UUPjhFKrHpJi] == '(')
                    BgMbRmaW2f[UUPjhFKrHpJi] = '$';
                else {
                    if (!(')' != BgMbRmaW2f[UUPjhFKrHpJi]))
                        BgMbRmaW2f[UUPjhFKrHpJi] = '?';
                    else if (!('?' == BgMbRmaW2f[UUPjhFKrHpJi]) && !('$' == BgMbRmaW2f[UUPjhFKrHpJi]))
                        BgMbRmaW2f[UUPjhFKrHpJi] = ' ';
                }
                UUPjhFKrHpJi++;
            };
        }
        for (LKYz9p8716n = 0; SDiv2YER4j8 >= LKYz9p8716n; LKYz9p8716n = LKYz9p8716n +1)
            cout << Erk179[LKYz9p8716n];
        cout << endl;
        for (LKYz9p8716n = 0; LKYz9p8716n <= SDiv2YER4j8; LKYz9p8716n++)
            cout << BgMbRmaW2f[LKYz9p8716n];
        cout << endl;
    }
    return 0;
}

void  rid (int zjbhGQe, int end) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    if (zjbhGQe <= end) {
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
        if (BgMbRmaW2f[zjbhGQe] != ')')
            rid (zjbhGQe + 1, end);
        else {
            int LKYz9p8716n = zjbhGQe;
            while (BgMbRmaW2f[LKYz9p8716n] != '(' && LKYz9p8716n >= 0)
                LKYz9p8716n = LKYz9p8716n -1;
            if (LKYz9p8716n == -1) {
                BgMbRmaW2f[zjbhGQe] = '?';
                rid (zjbhGQe + 1, end);
            }
            else
                for (int UUPjhFKrHpJi = LKYz9p8716n;
                UUPjhFKrHpJi <= zjbhGQe; UUPjhFKrHpJi++) {
                    BgMbRmaW2f[UUPjhFKrHpJi] = ' ';
                    rid (zjbhGQe + 1, end);
                };
        };
    };
}

