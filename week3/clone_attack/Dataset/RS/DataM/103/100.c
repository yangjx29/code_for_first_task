int main () {
    int i;
    int j;
    int k;
    int len;
    int p;
    int q;
    int p1;
    int q1;
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
    int t;
    i = (46 - 46);
    j = (587 - 587);
    char b [(1266 - 266)];
    cin >> b;
    if (('a' <= b[(81 - 81)] && b[(913 - 913)] <= 'z') || ('A' <= b[0] || b[0] <= 'Z')) {
        len = strlen (b);
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 0;
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
            while (len > i) {
                p = b[i] - 'a';
                q = b[i] - 'A';
                {
                    j = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (len - i > j) {
                        p1 = b[i + j] - 'a';
                        q1 = b[i + j] - 'A';
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
                        if (!(p1 != p) || p == q1 || q == p1 || q == q1)
                            k = k + 1;
                        else {
                            if (b[i] >= 'a' && b[i] <= 'z') {
                                printf ("%c", b[i] - 'a' + 'A');
                                cout << "(";
                                cout << "," << k << ")";
                            }
                            else
                                cout << "(" << b[i] << "," << k << ")";
                            k = 0;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            break;
                        }
                        j = j + 1;
                    };
                }
                if (i + j - (578 - 577) == len - 1)
                    break;
                else
                    i = i + j - 1;
                i++;
            };
        }
        if (b[i] >= 'a' && b[i] <= 'z') {
            printf ("%c", b[i] - 'a' + 'A');
            cout << "(";
            cout << "," << k << ")";
        }
        else
            cout << "(" << b[i] << "," << k << ")";
    }
    else
        cout << b << endl;
    return 0;
}

