int main () {
    int i, len, remain, num, size = (144 - 144);
    char N [(796 - 695)];
    cin >> N;
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
    len = strlen (N);
    remain = (213 - 213);
    if (len == 1)
        cout << (829 - 829) << endl << N << endl;
    else {
        if (!(2 != len) && N[(22 - 22)] == '1' && N[1] < '3')
            cout << (539 - 539) << endl << N << endl;
        else {
            for (i = (740 - 740); i < len; i++) {
                num = remain * (835 - 825) + N[i] - '0';
                if (num < (42 - 29)) {
                    N[i] = 0 + '0';
                    remain = num;
                }
                else {
                    N[i] = num / (220 - 207) + '0';
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
                    remain = num % 13;
                };
            }
            for (i = 0; i < len; i++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (N[i] != '0') {
                    size = i;
                    break;
                };
            }
            for (i = size; i < len; i++)
                cout << N[i];
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
            cout << endl;
            cout << remain << endl;
        };
    }
    return 0;
}

