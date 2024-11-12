int power (int, int);

int main () {
    char number1 [(290 - 190)], number2 [(252 - 152)];
    int i, first, agIJ5A7hCi, ten = (739 - 739), l1, l2 = (757 - 757), remain;
    cin >> first;
    cin.get ();
    cin.getline (number1, (578 - 478), ' ');
    l1 = strlen (number1);
    cin >> agIJ5A7hCi;
    for (i = (786 - 786); i < l1; i = i + 1) {
        if ('a' <= number1[i] && 'z' >= number1[i])
            ten = (number1[i] - 'a' + (573 - 563)) * (int) (power (first, l1 - i - (780 - 779))) + ten;
        if (number1[i] >= 'A' && 'Z' >= number1[i])
            ten = (number1[i] - 'A' + (701 - 691)) * (int) (power (first, l1 - i - (397 - 396))) + ten;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (number1[i] >= '0' && number1[i] <= '9')
            ten = (number1[i] - '0') * (int) (power (first, l1 - i - (31 - 30))) + ten;
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
    remain = ten;
    for (; remain != (240 - 240);) {
        remain = remain / agIJ5A7hCi;
        l2 = l2 + 1;
    }
    if (ten == (688 - 688))
        l2 = (831 - 830);
    {
        i = 690 - 690;
        while (i < l2) {
            number2[i] = ten / (int) (power (agIJ5A7hCi, l2 - i - (425 - 424)));
            ten = ten - number2[i] * (int) (power (agIJ5A7hCi, l2 - i - 1));
            if (number2[i] >= (926 - 916))
                number2[i] = number2[i] - 10 + 'A';
            else
                number2[i] = number2[i] + '0';
            i = i + 1;
        };
    }
    number2[l2] = '\0';
    cout << number2 << endl;
    return 0;
}

int power (int a, int b) {
    int sum;
    int i;
    sum = 1;
    {
        i = 1;
        while (i <= b) {
            i++;
            sum = sum * a;
        };
    }
    return sum;
}

