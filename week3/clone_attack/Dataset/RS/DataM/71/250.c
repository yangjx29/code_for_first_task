int main () {
    int m, i;
    const  int c [13] = {(587 - 587), (965 - 934), 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> m;
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
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            int year, month1, month2, day = 0, a, b, i;
            cin >> year >> month1 >> month2;
            if (month1 > month2) {
                a = month2;
                b = month1;
            }
            else {
                b = month2;
                a = month1;
            }
            {
                i = a;
                while (b > i) {
                    day = day + c[i];
                    i = i + 1;
                };
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
            if (2 >= a) {
                if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
                    day = day + 29;
                else
                    day = day + 28;
            }
            if (day % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            i = i + 1;
        };
    }
    return 0;
}

