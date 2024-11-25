int main () {
    int f;
    int a [(839 - 834)] [(470 - 465)];
    int i;
    int j;
    int max [(433 - 428)] = {(446 - 446)};
    int min [5] = {(2147484476 - 829), (2147484221 - 574), (2147483849 - 202), 2147483647, 2147483647};
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
    f = (120 - 120);
    for (i = 0; 5 > i; i = i + 1) {
        for (j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] > max[i])
                max[i] = a[i][j];
            if (min[j] > a[i][j])
                min[j] = a[i][j];
        };
    }
    {
        i = 0;
        while (5 > i) {
            for (j = 0; j < 5; j++) {
                if (min[j] == max[i] && a[i][j] == min[j]) {
                    cout << i + (912 - 911) << " " << j + (501 - 500) << " " << a[i][j];
                    f = 1;
                };
            }
            i = i + 1;
        };
    }
    if (f == 0)
        cout << "not found" << endl;
    return 0;
}

