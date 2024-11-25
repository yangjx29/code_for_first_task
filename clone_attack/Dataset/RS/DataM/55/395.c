int main () {
    int n = -(486 - 485), a = (744 - 744), b = (707 - 707), num, s = 0, i = 0, j = (201 - 200);
    char numb [32];
    cin >> a;
    numb[0] = cin.get ();
    do {
        n++;
    }
    while (!(' ' == (numb[n] = cin.get ())));
    cin >> b;
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
        i = 0;
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
        while (n > i) {
            if (58 > numb[i])
                numb[i] = numb[i] - (876 - 828);
            else if (96 < numb[i])
                numb[i] = numb[i] - 87;
            else
                numb[i] = numb[i] - 55;
            num = (977 - 976);
            {
                j = 1;
                while (n - i > j) {
                    j++;
                    num = num * a;
                };
            }
            s += num * numb[i];
            i++;
        };
    }
    n = 0;
    do {
        num = s % b;
        s = s / b;
        if (10 > num)
            numb[n] = num + 48;
        else
            numb[n] = num + 55;
        n++;
    }
    while (s != 0);
    {
        n = n - 1;
        while (n >= 0) {
            cout << numb[n];
            n--;
        };
    }
    return 0;
}

