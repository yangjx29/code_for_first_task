int input (int n) {
    cin >> n;
    return n;
}

void  paixu (int a [], int n) {
    int i;
    int j;
    int p;
    for (i = 0; i <= n - 2; i = i + 1) {
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
        for (j = i + 1; n > j; j++) {
            if (a[i] > a[j]) {
                p = a[i];
                a[i] = a[j];
                a[j] = p;
            };
        };
    };
}

void  add (int a [], int b [], int n1, int n2) {
    int i;
    for (i = 0; i < n1; i = i + 1)
        cout << a[i] << " ";
    for (i = 0; i < n2 - 1; i++)
        cout << b[i] << " ";
    cout << b[n2 - 1] << endl;
}

int main () {
    int a [100];
    int b [100];
    int n1;
    int n2;
    int i;
    cin >> n1 >> n2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = 0; i < n1; i++)
        a[i] = input (a[i]);
    paixu (a, n1);
    for (i = 0; i < n2; i++)
        b[i] = input (b[i]);
    paixu (b, n2);
    add (a, b, n1, n2);
    return 0;
}

