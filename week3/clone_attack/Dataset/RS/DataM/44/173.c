int main () {
    int j;
    void  dx (char str []);
    char str [(165 - 65)];
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
        j = 63 - 62;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j <= 6) {
            dx (str);
            j = j + 1;
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
            getchar ();
            cin.get (str, 100, '\n');
        };
    }
    return 0;
}

void  dx (char str []) {
    int qxPlGa = 0;
    if (str[0] == '-') {
        cout << str[0];
        {
            qxPlGa = str;
            while (qxPlGa >= 1) {
                if (str[qxPlGa] == (129 - 81))
                    continue;
                else
                    break;
                qxPlGa = qxPlGa - 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (qxPlGa;
        qxPlGa >= 1; qxPlGa = qxPlGa - 1)
            cout << str[qxPlGa];
        cout << endl;
    }
    else {
        for (qxPlGa = strlen (str) - 1; qxPlGa >= 1; qxPlGa--)
            if (str[qxPlGa] == 48)
                continue;
            else
                break;
        {
            qxPlGa;
            while (qxPlGa >= 0) {
                cout << str[qxPlGa];
                qxPlGa--;
            };
        }
        cout << endl;
    };
}

