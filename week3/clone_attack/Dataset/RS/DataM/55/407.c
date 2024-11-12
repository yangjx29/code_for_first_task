int main () {
    char BQh0aAT8 [(39 - 19)], m [20];
    int a, LEsvxPk, UqyxweZpYE, j = (185 - 185), decimal, number = (709 - 709);
    cin >> a >> BQh0aAT8 >> LEsvxPk;
    for (UqyxweZpYE = (20 - 20); !('\0' == BQh0aAT8[UqyxweZpYE]); UqyxweZpYE = UqyxweZpYE +1)
        if ('a' <= BQh0aAT8[UqyxweZpYE] && BQh0aAT8[UqyxweZpYE] <= 'z')
            BQh0aAT8[UqyxweZpYE] = BQh0aAT8[UqyxweZpYE] - (259 - 227);
    for (UqyxweZpYE = 0; !('\0' == BQh0aAT8[UqyxweZpYE]); UqyxweZpYE++) {
        if (BQh0aAT8[UqyxweZpYE] >= '0' && BQh0aAT8[UqyxweZpYE] <= '9')
            decimal = BQh0aAT8[UqyxweZpYE] - '0';
        else
            decimal = BQh0aAT8[UqyxweZpYE] - 'A' + (837 - 827);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        number = a * number + decimal;
    }
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
    for (; number >= LEsvxPk;) {
        if ((number % LEsvxPk) >= 10)
            m[j] = number % LEsvxPk -10 + 'A';
        else
            m[j] = number % LEsvxPk +'0';
        number = number / LEsvxPk;
        j++;
    }
    if (number >= 10)
        m[j] = number - 10 + 'A';
    else
        m[j] = number + '0';
    for (UqyxweZpYE = j; UqyxweZpYE >= 0; UqyxweZpYE--)
        cout << m[UqyxweZpYE];
    return 0;
}

