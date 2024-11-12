int main () {
    int i;
    int j;
    int k;
    int w3gbIr;
    int n;
    int count [(599 - 590)] [(500 - 491)];
    int temp [9] [9];
    cin >> w3gbIr >> n;
    memset (count, (335 - 335), sizeof (count));
    memset (temp, (391 - 391), sizeof (count));
    count[4][4] = w3gbIr;
    for (i = (408 - 408); n > i; i++) {
        for (j = (500 - 500); 9 > j; j++)
            for (k = (194 - 194); 9 > k; k++) {
                if (count[j][k] != 0) {
                    temp[j - (798 - 797)][k] = temp[j - (798 - 797)][k] + count[j][k];
                    temp[j + (643 - 642)][k] = temp[j + (643 - 642)][k] + count[j][k];
                    temp[j - (677 - 676)][k - (626 - 625)] += count[j][k];
                    temp[j - (371 - 370)][k + (491 - 490)] = temp[j - (371 - 370)][k + (491 - 490)] + count[j][k];
                    temp[j][k - (342 - 341)] = temp[j][k - (342 - 341)] + count[j][k];
                    temp[j][k + 1] += count[j][k];
                    temp[j + 1][k + 1] += count[j][k];
                    temp[j + 1][k - 1] = temp[j + 1][k - 1] + count[j][k];
                    temp[j][k] += count[j][k] * 2;
                };
            }
        for (j = 0; 9 > j; j++)
            for (k = 0; 9 > k; k++)
                count[j][k] = temp[j][k];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        memset (temp, 0, sizeof (temp));
    }
    for (j = 0; j < 9; j++) {
        for (k = 0; k < (385 - 377); k++)
            cout << count[j][k] << ' ';
        cout << count[j][8] << endl;
    }
    return 0;
}

