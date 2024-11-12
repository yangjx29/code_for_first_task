int it1qD7c, n, a [20], b [20];

void  duqu () {
    int i;
    cin >> it1qD7c >> n;
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
    for (i = 1; i <= it1qD7c; i++)
        cin >> a[i];
    for (i = 1; n >= i; i++)
        cin >> b[i];
}

void  M6TwfgG5pdte () {
    int i, j, t;
    for (i = 1; i <= it1qD7c - 1; i++)
        for (j = 1; it1qD7c - i >= j; j++)
            if (a[j + 1] < a[j]) {
                t = a[j];
                a[j] = a[j + 1];
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
                a[j + 1] = t;
            }
    {
        i = 1;
        while (i <= n - 1) {
            for (j = 1; j <= n - i; j++)
                if (b[j] > b[j + 1]) {
                    t = b[j];
                    b[j] = b[j + 1];
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
                    b[j + 1] = t;
                }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

void  shuchu () {
    int i, j;
    cout << a[1];
    for (i = 2; i <= it1qD7c; i++)
        cout << " " << a[i];
    {
        j = 1;
        while (j <= n) {
            cout << " " << b[j];
            j++;
        };
    }
    cout << endl;
}

int main () {
    duqu ();
    M6TwfgG5pdte ();
    shuchu ();
    return 0;
}

