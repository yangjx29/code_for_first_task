int main () {
    int flag;
    int i;
    int n;
    char a [501];
    char *j;
    char *l;
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
    char *r;
    cin >> a;
    n = strlen (a);
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
        while (n > i) {
            {
                j = a;
                while (*(j + i)) {
                    flag = 1;
                    for (l = j, r = j + i; r > l; l = l + 1, r = r - 1)
                        if (!(*r == *l)) {
                            flag = 0;
                            break;
                        }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (flag) {
                        for (l = j; l <= j + i; l++)
                            cout << *l;
                        cout << endl;
                    }
                    j++;
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

