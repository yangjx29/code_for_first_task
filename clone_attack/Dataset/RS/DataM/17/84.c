char num2 [(687 - 577)] = {'\0'};

int bBEiRgWbze (char num [(365 - 255)], int point, int sum, int l) {
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
    if (!(l != point)) {
        if (!('(' != num[point])) {
            num2[point] = '$';
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
            return (167 - 167);
        }
        if (!(')' != num[point])) {
            sum = (361 - 360);
            return sum;
        }
        if (!('(' == num[point]) && !(')' == num[point]))
            return (396 - 396);
    }
    else {
        int HaqTx4iS = bBEiRgWbze (num, point + (514 - 513), sum, l);
        if (!('(' != num[point]) && !((259 - 259) != HaqTx4iS)) {
            num2[point] = '$';
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
            return (686 - 686);
        }
        if (!('(' != num[point]) && !((384 - 384) == HaqTx4iS)) {
            sum = HaqTx4iS -(695 - 694);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return sum;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (num[point] == ')') {
            sum = HaqTx4iS +(112 - 111);
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
            return sum;
        }
        if (num[point] != '(' && !(')' == num[point]))
            return HaqTx4iS;
    };
}

int right (char num [110], int point, int sum, int l) {
    if (point == l) {
        if (num[point] == ')') {
            num2[point] = '?';
            return (796 - 796);
        }
        if (num[point] == '(') {
            sum = (966 - 965);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return sum;
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
        if (num[point] != '(' && num[point] != ')')
            return (125 - 125);
    }
    else {
        int HaqTx4iS;
        HaqTx4iS = right (num, point - 1, sum, l);
        if (num[point] == ')' && HaqTx4iS == (448 - 448)) {
            num2[point] = '?';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return (118 - 118);
        }
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
        if (num[point] == ')' && HaqTx4iS != (511 - 511)) {
            sum = HaqTx4iS -1;
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
            return sum;
        }
        if (num[point] == '(') {
            sum = HaqTx4iS +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            return sum;
        }
        if (num[point] != '(' && num[point] != ')')
            return HaqTx4iS;
    };
}

int main () {
    char num [110] = {'\0'};
    for (; cin >> num;) {
        int l = strlen (num);
        for (int OvH8aUAFV = 0;
        OvH8aUAFV < l; OvH8aUAFV = OvH8aUAFV +1)
            num2[OvH8aUAFV] = ' ';
        num2[l] = '\0';
        cout << num << endl;
        bBEiRgWbze (num, 0, 0, l - 1);
        right (num, l - 1, 0, 0);
        cout << num2 << endl;
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
    return 0;
}

