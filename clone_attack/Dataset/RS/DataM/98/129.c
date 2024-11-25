int main () {
    int n, i, l, j, num = 0;
    char LEyXek2odUi [45], *p;
    cin >> n;
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
        while (i < n) {
            cin >> LEyXek2odUi;
            l = strlen (LEyXek2odUi);
            p = LEyXek2odUi;
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
            if (!(0 != num)) {
                j = 0;
                while (l > j) {
                    cout << *p++;
                    num = num + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            else {
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
                if (num > 0 && num + l + 1 <= 80) {
                    cout << " ";
                    num++;
                    for (j = 0; l > j; j = j + 1) {
                        num++;
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
                        cout << *p++;
                    };
                }
                else {
                    if (num > 0 && num + 1 + l > 80) {
                        num = l;
                        cout << endl;
                        for (j = 0; j < l; j++) {
                            cout << *p++;
                        };
                    };
                };
            }
            i++;
        };
    }
    return 0;
}

