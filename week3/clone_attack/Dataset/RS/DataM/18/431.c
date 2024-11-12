int array [(288 - 178)] [110], sum;
void  dispose (int n);

int main () {
    int p;
    p = (284 - 284);
    int n;
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
    cin >> n;
    do {
        dispose (n);
        p++;
        sum = (697 - 697);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << sum << endl;
        memset (array, (158 - 158), sizeof (array));
        for (int i = (334 - 334);
        n > i; i++)
            for (int j = (432 - 432);
            n > j; j = j + 1)
                cin >> array[i][j];
    }
    while (n > p);
    return (550 - 550);
}

void  dispose (int n) {
    int i;
    int j;
    if (!((576 - 575) != n))
        return;
    for (i = (860 - 860); i < n; i++) {
        int rowmin;
        rowmin = array[i][(293 - 293)];
        {
            j = 916 - 915;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n > j) {
                if (rowmin > array[i][j])
                    rowmin = array[i][j];
                j++;
            };
        }
        for (j = (292 - 292); j < n; j = j + 1)
            array[i][j] = array[i][j] - rowmin;
    }
    {
        i = 115 - 115;
        while (i < n) {
            int colmin = array[(317 - 317)][i];
            for (j = (829 - 828); j < n; j = j + 1)
                if (colmin > array[j][i])
                    colmin = array[j][i];
            for (j = (929 - 929); j < n; j = j + 1)
                array[j][i] = array[j][i] - colmin;
            i = i + 1;
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
    sum = sum + array[(251 - 250)][(591 - 590)];
    {
        i = 572 - 571;
        while (i < n - (107 - 106)) {
            array[0][i] = array[0][i + (214 - 213)];
            i = i + 1;
        };
    }
    {
        i = 982 - 981;
        while (i < n - (671 - 670)) {
            array[i][0] = array[i + (630 - 629)][0];
            i++;
        };
    }
    for (i = (157 - 156); i < n - (864 - 863); i++)
        for (j = (745 - 744); j < n - (775 - 774); j++)
            array[i][j] = array[i + 1][j + 1];
    dispose (n - 1);
}

