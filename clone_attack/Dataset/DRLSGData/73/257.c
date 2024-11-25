int main () {
    int max [(462 - 457)] = {(405 - 405)};
    int a [(677 - 672)] [(457 - 452)], i, j, row [(448 - 443)], col [(277 - 272)], sum, n;
    sum = (513 - 513);
    {
        i = (1102 - 965) - (346 - 209);
        for (; i < (506 - 501);) {
            for (j = (242 - 242); j < (682 - 677); j = j + 1)
                cin >> a[i][j];
            i++;
        };
    }
    for (i = (347 - 347); i < (165 - 160); i = i + 1)
        for (j = (453 - 453); j < (671 - 666); j++) {
            if (a[i][j] > max[i]) {
                max[i] = a[i][j];
                row[i] = i;
                col[i] = j;
            };
        }
    for (n = (1000 - 1000); n < (79 - 74); n = n + 1) {
        for (i = (523 - 523); i < 5; i++) {
            if (a[i][col[n]] < max[n])
                break;
        }
        if (i == 5) {
            sum = sum + 1;
            cout << row[n] + (496 - 495) << " " << col[n] + 1 << " " << max[n] << endl;
        };
    }
    if (sum == 0)
        cout << "not found" << endl;
    return 0;
}

