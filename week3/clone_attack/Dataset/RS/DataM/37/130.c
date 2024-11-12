int main () {
    char str [(996 - 896)] [(10482 - 482)];
    int t;
    int i;
    int IoFZyP;
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
    int k;
    cin >> t;
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
        while (t >= i) {
            cin >> str[i];
            {
                IoFZyP = 0;
                while (str[i][IoFZyP] != '\0') {
                    {
                        k = 0;
                        while (!('\0' == str[i][k])) {
                            if (IoFZyP == k)
                                continue;
                            if (str[i][k] == str[i][IoFZyP])
                                break;
                            k++;
                        };
                    }
                    if (str[i][k] == '\0') {
                        cout << str[i][IoFZyP] << endl;
                        break;
                    }
                    IoFZyP = IoFZyP +1;
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
            if (str[i][IoFZyP] == '\0')
                cout << "no" << endl;
            i++;
        };
    }
    return 0;
}

