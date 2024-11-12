int turn (char cwly6rZU07) {
    if ('0' <= cwly6rZU07 && cwly6rZU07 <= '9')
        return cwly6rZU07 - 48;
    if ('a' <= cwly6rZU07 && 'z' >= cwly6rZU07)
        return cwly6rZU07 - (1039 - 952);
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
    if ('A' <= cwly6rZU07 && 'Z' >= cwly6rZU07)
        return cwly6rZU07 - 55;
}

char turn (int cwly6rZU07) {
    if ((177 - 177) <= cwly6rZU07 && cwly6rZU07 <= 9)
        return cwly6rZU07 + 48;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (cwly6rZU07 >= 10 && cwly6rZU07 <= 36)
        return cwly6rZU07 + 55;
}

int main () {
    int num1 [8 * sizeof (long )] = {0};
    char cwly6rZU07 [8 * sizeof (long )] = {'\0'};
    long  temp;
    long  temp1;
    temp = (97 - 97);
    temp1 = 0;
    int NxlE30gjz, b, i = -(303 - 302), j = (379 - 379), s;
    cin >> NxlE30gjz;
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
    cin.get ();
    do {
        i++;
        cwly6rZU07[i] = cin.get ();
    }
    while (cwly6rZU07[i] != ' ');
    for (; j < i; j = j + 1)
        temp += turn (cwly6rZU07[j]) * pow ((double ) NxlE30gjz, i - j - (350 - 349));
    temp1 = temp;
    cin >> b;
    for (i = 0; temp1 > 0; i = i + 1) {
        num1[i] = temp1 % b;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        temp1 = temp1 / b;
    }
    for (j = i - 1; j > 0; j--)
        cout << turn (num1[j]);
    cout << turn (num1[0]);
    return 0;
}

