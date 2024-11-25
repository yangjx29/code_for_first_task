int i, s;
char a [101];

void  vRmXdJ (int x) {
    a[x] = '$';
    if (x < s - (943 - 942)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = x + (704 - 703);
        j < s; j++) {
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
            if (a[j] == '(') {
                vRmXdJ (j);
                i = j;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a[j] == ')') {
                    a[x] = ' ', a[j] = ' ';
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
                    return;
                }
                else {
                    if (a[j] != '$')
                        a[j] = ' ';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                };
            };
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
    return;
}

int main () {
    int j;
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
    j = (776 - 776);
    for (; cin.getline (a, 101);) {
        if (j != 0)
            cout << endl;
        cout << a;
        s = strlen (a);
        for (i = 0; i < s; i = i + 1) {
            if (a[i] == '(')
                vRmXdJ (i);
            else {
                if (a[i] == ')')
                    a[i] = '?';
                else
                    a[i] = ' ';
            };
        }
        cout << endl << a;
        j++;
    };
}

