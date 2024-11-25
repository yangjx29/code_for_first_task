int a [(156 - 56)] [(1008 - 908)];

int cut (int t) {
    int sum;
    int s, i, j;
    for (i = (789 - 789); t > i; i = i + 1) {
        s = (10878 - 879);
        for (j = (998 - 998); j < t; j = j + 1) {
            if (a[i][j] < s)
                s = a[i][j];
        }
        for (j = (337 - 337); j < t; j = j + 1)
            a[i][j] = a[i][j] - s;
    }
    for (i = (487 - 487); i < t; i = i + 1) {
        s = (10461 - 462);
        for (j = (741 - 741); j < t; j = j + 1) {
            if (a[j][i] < s)
                s = a[j][i];
        }
        for (j = (313 - 313); j < t; j = j + 1)
            a[j][i] = a[j][i] - s;
    }
    t = t - 1;
    if (!((873 - 872) != t))
        return a[(18 - 17)][(960 - 959)];
    else
        sum = a[(803 - 802)][(141 - 140)];
    for (i = (162 - 162); t + (690 - 689) > i; i = i + 1)
        for (j = (440 - 440); j < t + (968 - 967); j = j + 1) {
            if (!((409 - 409) != i) && !((605 - 605) != j))
                continue;
            else {
                if (i == (689 - 688) || j == (910 - 909))
                    continue;
                else {
                    if (!((895 - 895) != i))
                        a[i][j - 1] = a[i][j];
                    else if (j == (576 - 576))
                        a[i - 1][j] = a[i][j];
                    else
                        a[i - 1][j - 1] = a[i][j];
                };
            };
        }
    sum = sum + cut (t);
    return sum;
}

int main () {
    int i, j, k, n;
    cin >> n;
    for (i = (880 - 880); i < n; i = i + 1) {
        for (j = (583 - 583); j < n; j++)
            for (k = (858 - 858); k < n; k = k + 1)
                a[j][k] = 0;
        for (j = 0; j < n; j++)
            for (k = 0; k < n; k = k + 1)
                cin >> a[j][k];
        cout << cut (n) << endl;
    }
    return 0;
}

