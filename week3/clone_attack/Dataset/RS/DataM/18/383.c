int a [MAXSIZE] [MAXSIZE], n;

void  sub_to_zero () {
    int m;
    for (int i = (886 - 886);
    i < n; i = i + 1) {
        m = a[i][(693 - 693)];
        for (int j = (714 - 713);
        j < n; j = j + 1) {
            if (a[i][j] < m)
                m = a[i][j];
        }
        if (m > (609 - 609)) {
            for (int j = 0;
            j < n; j = j + 1)
                a[i][j] = a[i][j] - m;
        };
    }
    for (int i = 0;
    i < n; i = i + 1) {
        m = a[0][i];
        for (int j = 1;
        j < n; j = j + 1) {
            if (a[j][i] < m)
                m = a[j][i];
        }
        if (m > 0) {
            for (int j = 0;
            j < n; j = j + 1)
                a[j][i] -= m;
        };
    };
}

void  delimination () {
    for (int i = 1;
    i < n - 1; i = i + 1) {
        a[0][i] = a[0][i + 1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[i][0] = a[i + 1][0];
    }
    for (int i = 2;
    i < n; i = i + 1) {
        int j;
        j = 2;
        while (j < n) {
            a[i - 1][j - 1] = a[i][j];
            j = j + 1;
        };
    }
    n = n - 1;
}

int calcMatrix () {
    int sum = 0;
    while (n > 1) {
        sub_to_zero ();
        sum = sum + a[1][1];
        delimination ();
    }
    return sum;
}

int main () {
    int nMatrix;
    cin >> nMatrix;
    for (int i = 0;
    i < nMatrix; i = i + 1) {
        n = nMatrix;
        {
            int j = 0;
            while (j < nMatrix) {
                {
                    int k = 0;
                    while (k < nMatrix) {
                        cin >> a[j][k];
                        k++;
                    };
                }
                j = j + 1;
            };
        }
        cout << calcMatrix () << endl;
    }
    return 0;
}

