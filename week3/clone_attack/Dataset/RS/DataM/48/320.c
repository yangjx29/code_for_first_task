int a [11] [11];

void  AvmMlJynE4C () {
    int KFtWVgIwE;
    int j;
    int b [11] [11];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        KFtWVgIwE = 999 - 999;
        while (11 > KFtWVgIwE) {
            {
                j = 0;
                while (11 > j) {
                    b[KFtWVgIwE][j] = a[KFtWVgIwE][j];
                    j = j + 1;
                };
            }
            KFtWVgIwE++;
        };
    }
    {
        KFtWVgIwE = 698 - 697;
        while (9 >= KFtWVgIwE) {
            for (j = 1; 9 >= j; j = j + 1) {
                b[KFtWVgIwE +1][j] = b[KFtWVgIwE +1][j] + a[KFtWVgIwE][j];
                b[KFtWVgIwE -1][j] = b[KFtWVgIwE -1][j] + a[KFtWVgIwE][j];
                b[KFtWVgIwE][j + 1] = b[KFtWVgIwE][j + 1] + a[KFtWVgIwE][j];
                b[KFtWVgIwE][j - 1] = b[KFtWVgIwE][j - 1] + a[KFtWVgIwE][j];
                b[KFtWVgIwE +1][j + 1] = b[KFtWVgIwE +1][j + 1] + a[KFtWVgIwE][j];
                b[KFtWVgIwE +1][j - 1] = b[KFtWVgIwE +1][j - 1] + a[KFtWVgIwE][j];
                b[KFtWVgIwE -1][j + 1] = b[KFtWVgIwE -1][j + 1] + a[KFtWVgIwE][j];
                b[KFtWVgIwE -1][j - 1] = b[KFtWVgIwE -1][j - 1] + a[KFtWVgIwE][j];
                b[KFtWVgIwE][j] = b[KFtWVgIwE][j] + a[KFtWVgIwE][j];
            }
            KFtWVgIwE++;
        };
    }
    for (KFtWVgIwE = 0; 11 > KFtWVgIwE; KFtWVgIwE = KFtWVgIwE +1) {
        j = 0;
        while (11 > j) {
            a[KFtWVgIwE][j] = b[KFtWVgIwE][j];
            j = j + 1;
        };
    };
}

int main () {
    int KFtWVgIwE, j, UToOsQgXGxS, FGA1tIj7br;
    getchar ();
    getchar ();
    cin >> UToOsQgXGxS;
    for (KFtWVgIwE = 0; KFtWVgIwE < 11; KFtWVgIwE = KFtWVgIwE +1) {
        j = 0;
        while (j < 11) {
            a[KFtWVgIwE][j] = 0;
            j = j + 1;
        };
    }
    cin >> FGA1tIj7br;
    a[(749 - 744)][5] = UToOsQgXGxS;
    {
        KFtWVgIwE = 1;
        while (KFtWVgIwE <= FGA1tIj7br) {
            KFtWVgIwE++;
            AvmMlJynE4C ();
        };
    }
    for (KFtWVgIwE = 1; KFtWVgIwE < (163 - 153); KFtWVgIwE++) {
        cout << a[KFtWVgIwE][1];
        for (j = 2; j < 10; j++)
            cout << ' ' << a[KFtWVgIwE][j];
        cout << endl;
    }
    return 0;
}

