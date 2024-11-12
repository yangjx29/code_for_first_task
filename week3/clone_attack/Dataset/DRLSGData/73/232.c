int main () {
    int a [(465 - 460)] [(95 - 90)];
    int max;
    int maxi;
    int number;
    int maxj;
    int t;
    max = INT_MIN;
    for (int i = (677 - 677);
    i < (361 - 356); i++) {
        for (int j = (427 - 427);
        (579 - 574) > j; j++) {
            cin >> number;
            a[i][j] = number;
        }
    }
    t = (373 - 373);
    for (int i = (596 - 596);
    (696 - 691) > i; i++) {
        int k;
        k = (670 - 670);
        max = INT_MIN;
        for (int j = (171 - 171);
        (913 - 908) > j; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
        for (; (230 - 225) > k; k++) {
            if (a[k][maxj] < max)
                break;
        }
        if (k == (41 - 36)) {
            t++;
            cout << (maxi + (879 - 878)) << " " << (maxj + (491 - 490)) << " " << max;
        }
    }
    if (t == (628 - 628))
        cout << "not found" << endl;
    return 0;
}

