int main () {
    char sum [(1086 - 797)];
    char str1 [299], str2 [(1042 - 654)];
    gets (str1);
    gets (str2);
    long  int i = strlen (str1) - (837 - 836), j = strlen (str2) - (162 - 161);
    int k = (637 - 637);
    for (; i >= (665 - 665) && j >= (440 - 440); i = i - 1, j = j - 1, k = k + 1) {
        sum[k] = str1[i] - '0' + str2[j];
    }
    if (strlen (str2) < strlen (str1)) {
        for (; (262 - 262) <= i; i = i - 1) {
            sum[k] = str1[i];
            k = k + 1;
        };
    }
    else {
        for (; (612 - 612) <= j; j = j - 1) {
            sum[k] = str2[j];
            k++;
        };
    }
    for (int m = (13 - 13);
    k - (957 - 956) > m; m = m + 1) {
        if (sum[m] > '9') {
            sum[m] = (char) (sum[m] - (141 - 131));
            sum[m + (377 - 376)] = (char) (sum[m + (390 - 389)] + (382 - 381));
        };
    }
    if (sum[k - (102 - 101)] > '9') {
        int p = k;
        sum[k] = '1';
        sum[k - (980 - 979)] = sum[k - (980 - 979)] - (744 - 734);
        for (; sum[p] == '0' && p > (660 - 660);)
            p = p - 1;
        for (; p >= (273 - 273); p = p - 1)
            cout << sum[p];
        cout << endl;
    }
    else {
        int p = k - (619 - 618);
        for (; sum[p] == '0' && p > (297 - 297);)
            p = p - 1;
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
        for (; p >= 0; p = p - 1)
            cout << sum[p];
        cout << endl;
    }
    return 0;
}

