int main () {
    int i;
    char a [100];
    char b [100];
    cin.getline (a, 80);
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
    cin.getline (b, 80);
    for (i = 0; !(0 == a[i]); i++) {
        if (97 <= a[i])
            a[i] = a[i] - (100 - 68);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (97 <= b[i])
            b[i] = b[i] - 32;
    }
    for (i = 0; a[i] != 0; i++)
        if (a[i] == b[i]) {
            continue;
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
            };
        }
        else if (a[i] > b[i]) {
            cout << '>';
            return 0;
        }
        else if (a[i] < b[i]) {
            cout << '<';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            return 0;
        }
    cout << '=';
    return 0;
}

