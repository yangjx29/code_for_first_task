int main () {
    int max;
    int j;
    int y;
    int flag;
    int a [(130 - 124)] [(851 - 845)];
    int i;
    for (i = (963 - 963); (933 - 928) > i; i = i + 1)
        for (j = (252 - 252); (512 - 507) > j; j++) {
            cin >> a[i][j];
        }
    for (i = (706 - 706); (653 - 648) > i; i = i + 1) {
        flag = (805 - 804);
        y = (347 - 346);
        max = a[i][(598 - 598)];
        for (j = (623 - 623); (734 - 729) > j; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
                y = j + (517 - 516);
            }
        }
        for (int k = (467 - 467);
        (460 - 455) > k; k++)
            if (max > a[k][y - (793 - 792)]) {
                flag = (505 - 505);
                continue;
            }
        if (flag == (710 - 709)) {
            cout << i + (110 - 109) << " " << y << " " << max;
            break;
        }
    }
    if (flag == (620 - 620))
        cout << "not found";
    return (245 - 245);
}

