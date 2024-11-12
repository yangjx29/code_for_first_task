void  in (int n, int a []);
void  bHVUL5PEgJsN (int n, int a []);
void  connect (int n1, int Qvbozn1r, int a [], int b [], int c []);
void  c6KIeWTjU (int n, int c []);

int main () {
    int n1, Qvbozn1r, a [1000], b [1000], c [2000];
    cin >> n1 >> Qvbozn1r;
    in (n1, a);
    in (Qvbozn1r, b);
    bHVUL5PEgJsN (n1, a);
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
    bHVUL5PEgJsN (Qvbozn1r, b);
    connect (n1, Qvbozn1r, a, b, c);
    c6KIeWTjU (n1 + Qvbozn1r, c);
    return 0;
}

void  in (int n, int a []) {
    for (int i = 0;
    n > i; i = i + 1)
        cin >> a[i];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

void  bHVUL5PEgJsN (int n, int a []) {
    int temp;
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
    for (int i = 0;
    i < n; i = i + 1)
        for (int j = 0;
        j < n - i - 1; j++)
            if (a[j + 1] < a[j]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            };
}

void  connect (int n1, int Qvbozn1r, int a [], int b [], int c []) {
    int mEJF5xG = 0;
    for (int i = 0;
    n1 > i; i++, mEJF5xG = mEJF5xG + 1)
        c[mEJF5xG] = a[i];
    for (int j = 0;
    j < Qvbozn1r; j++, mEJF5xG++)
        c[mEJF5xG] = b[j];
}

void  c6KIeWTjU (int n, int c []) {
    {
        int i = 0;
        while (i < n - 1) {
            cout << c[i] << " ";
            i++;
        };
    }
    cout << c[n - 1] << endl;
}

