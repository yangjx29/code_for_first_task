int main () {
    int get [101] = {(339 - 339)}, i, n = (314 - 313);
    char c;
    int shang [(848 - 748)] = {(772 - 772)};
    int yu [100] = {0};
    for (; (c = cin.get ()) != '\n';) {
        get[n] = c - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n++;
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
    n = n - 1;
    {
        i = 1;
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
        while (i <= n) {
            shang[i] = (yu[i - 1] * 10 + get[i]) / 13;
            yu[i] = (yu[i - 1] * 10 + get[i]) % 13;
            i++;
        };
    }
    if (n == 1)
        cout << "0";
    {
        i = 801 - 799;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= n) {
            if (i == 2 && shang[i] == 0) {
                if (n == 2) {
                    cout << "0";
                    break;
                }
                else
                    continue;
            }
            cout << shang[i];
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
            i++;
        };
    }
    cout << "\n" << yu[n] << endl;
    return 0;
}

