int main () {
    char str [500] [40], (*p) [40];
    int n, i, gfvRt0a3rl = 0, len = 0;
    p = str;
    cin >> n;
    {
        i = 0;
        while (i < n) {
            cin >> *(p + i);
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
            i++;
        };
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
    {
        i = 0;
        while (i < n - (630 - 629)) {
            len = strlen (*(p + i));
            if (gfvRt0a3rl + len <= 80) {
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
                if (gfvRt0a3rl + len + (756 - 755) + strlen (str[i + 1]) <= 80) {
                    gfvRt0a3rl += len + 1;
                    cout << *(p + i) << " ";
                }
                else {
                    gfvRt0a3rl = 0;
                    cout << *(p + i);
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
                    cout << endl;
                };
            }
            else {
                gfvRt0a3rl = len + 1;
                cout << "#" << endl;
                cout << *(p + i);
            }
            i++;
        };
    }
    len = strlen (*(p + n - 1));
    if (gfvRt0a3rl + len + 1 <= 80) {
        cout << *(p + n - 1);
        cout << endl;
    }
    else {
        cout << endl;
        cout << *(p + n - 1) << endl;
    }
    return 0;
}

