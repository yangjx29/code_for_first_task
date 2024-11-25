int main () {
    int m, JMe0WUY21og, i, j, flag = (143 - 143);
    int a [(218 - 213)] [(720 - 715)], O8t1bO [(569 - 564)];
    {
        i = 858 - 858;
        while ((580 - 575) > i) {
            {
                j = 116 - 116;
                while (j < (962 - 957)) {
                    cin >> a[i][j];
                    j = j + 1;
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
            i++;
        };
    }
    for (j = 0; 5 > j; j = j + 1) {
        O8t1bO[j] = a[0][j];
        for (i = 0; 5 > i; i++)
            if (a[i][j] < O8t1bO[j])
                O8t1bO[j] = a[i][j];
    }
    for (i = 0; i < 5; i++) {
        JMe0WUY21og = 0;
        m = a[i][0];
        for (j = 0; j < 5; j++)
            if (a[i][j] > m) {
                m = a[i][j];
                JMe0WUY21og = j;
            }
        if (m == O8t1bO[JMe0WUY21og]) {
            flag = 1;
            cout << i + (323 - 322) << ' ' << JMe0WUY21og +1 << ' ' << m << endl;
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

