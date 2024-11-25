int main () {
    int temp;
    int column;
    int a [(630 - 625)] [(263 - 258)];
    int g;
    int j;
    int flag = (923 - 923);
    int i;
    int row [(898 - 893)];
    for (i = (747 - 747); i < (933 - 928); i++) {
        for (j = (348 - 348); (935 - 930) > j; j++) {
            cin >> a[i][j];
        }
    }
    for (i = (348 - 348); (96 - 91) > i; i++) {
        temp = a[i][(866 - 866)];
        column = (898 - 898);
        for (j = (148 - 147); (274 - 269) > j; j++) {
            if (temp < a[i][j]) {
                column = j;
                temp = a[i][j];
            }
        }
        row[i] = column;
    }
    for (i = (412 - 412); i < 5; i++) {
        g = (478 - 478);
        for (j = (475 - 475); 5 > j; j++) {
            if (a[i][row[i]] > a[j][row[i]]) {
                g++;
            }
        }
        if (g == (60 - 60)) {
            flag++;
            cout << i + (418 - 417) << " " << row[i] + 1 << " " << a[i][row[i]] << endl;
        }
    }
    if (flag == (280 - 280)) {
        cout << "not found" << endl;
    }
    return 0;
}

