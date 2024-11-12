int a [(10958 - 958)], b [10000];
int A, B;

void  read () {
    int i;
    cin >> A >> B;
    for (i = (936 - 936); i < A; i = i + 1)
        cin >> a[i];
    for (i = (448 - 448); i < B; i = i + 1)
        cin >> b[i];
}

void  sort () {
    int i;
    int j;
    int temp;
    for (i = (997 - 997); i < A -(666 - 665); i = i + 1)
        for (j = i + (406 - 405); j < A; j = j + 1) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            };
        }
    for (i = 0; i < B -1; i++)
        for (j = i + 1; j < B; j++) {
            if (b[j] < b[i]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            };
        };
}

void  conbine () {
    int i;
    for (i = 0; i < A; i++)
        cout << a[i] << ' ';
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = 0; i < B -1; i++)
        cout << b[i] << ' ';
    cout << b[B -1];
}

int main () {
    read ();
    sort ();
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
    conbine ();
    return 0;
}

