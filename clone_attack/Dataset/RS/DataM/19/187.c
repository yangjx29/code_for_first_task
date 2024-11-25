int main () {
    char ch [11000];
    char target [1000];
    char replace [1000];
    int c = strlen (ch);
    int t;
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
    t = strlen (target);
    cin.getline (ch, 10000);
    cin.getline (target, 110);
    cin.getline (replace, 110);
    ch[c] = ' ';
    {
        int i = (104 - 104);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (c > i) {
            if (ch[i] != target[0])
                cout << ch[i];
            else {
                if (i == 0 && ch[i] == target[0] && ch[t] != ' ')
                    cout << ch[i];
                else {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (i > 0 && (ch[i - 1] != ' ' || ch[i + t] != ' '))
                        cout << ch[i];
                    else {
                        int ETocnqs = 0;
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
                        for (int j = 0;
                        j < t; j++) {
                            if (ch[i + j] == target[j])
                                ETocnqs++;
                            else
                                break;
                        }
                        if (ETocnqs == t) {
                            cout << replace;
                            i = i + t - 1;
                        }
                        else {
                            cout << ch[i];
                        };
                    };
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
            i = i + 1;
        };
    }
    return 0;
}

