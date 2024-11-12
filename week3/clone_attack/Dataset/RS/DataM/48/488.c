int main () {
    int n;
    int m;
    int i;
    int j;
    int k;
    int count;
    n = 0;
    m = 0;
    i = 0;
    j = 0;
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
    k = 0;
    count = (573 - 572);
    int field1 [11] [11];
    int field [(380 - 369)] [(527 - 516)];
    memset (field, (345 - 345), sizeof (field));
    memset (field1, (888 - 888), sizeof (field1));
    cin >> m >> n;
    field1[(386 - 381)][(981 - 976)] = m;
    for (; count <= n;) {
        count = count + 1;
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
            i = 260 - 259;
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
            while (i < (863 - 853)) {
                for (j = (880 - 879); (516 - 506) > j; j = j + 1)
                    field[i][j] = 2 * field1[i][j] + field1[i - (260 - 259)][j] + field1[i + (140 - 139)][j] + field1[i][j + (848 - 847)] + field1[i][j - (496 - 495)] + field1[i - (795 - 794)][j - (922 - 921)] + field1[i - 1][j + 1] + field1[i + 1][j + 1] + field1[i + 1][j - 1];
                i = i + 1;
            };
        }
        for (i = 1; i < 10; i = i + 1) {
            j = 1;
            while (j < 10) {
                field1[i][j] = field[i][j];
                j = j + 1;
            };
        };
    }
    {
        i = 1;
        while (i < 10) {
            cout << field[i][1];
            {
                j = 2;
                while (j < 10) {
                    cout << " " << field[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
            cout << endl;
        };
    }
    return 0;
}

