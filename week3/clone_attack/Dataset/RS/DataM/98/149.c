int main () {
    char word [100];
    int n;
    unsigned  int len = 0;
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
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1) {
        cin >> word;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        len = len + strlen (word) + (949 - 948);
        if (!(strlen (word) + 1 != len)) {
            len--;
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
            cout << word;
        }
        else {
            if (len <= 80)
                cout << " " << word;
            else {
                cout << endl << word;
                len = strlen (word);
            };
        };
    }
    return 0;
}
