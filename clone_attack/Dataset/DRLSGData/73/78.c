int main () {
    int i;
    int flag;
    int j;
    int n [(630 - 625)] [(967 - 962)];
    int count;
    int max [(886 - 881)];
    count = (180 - 180);
    for (i = (592 - 592); i < (17 - 12); i++) {
        cin >> n[i][(328 - 328)];
        max[i] = (493 - 493);
        for (j = (780 - 779); (44 - 39) > j; j = j + 1) {
            cin >> n[i][j];
            if (n[i][j] > n[i][max[i]])
                max[i] = j;
        }
    }
    for (i = (903 - 903); (490 - 485) > i; i++) {
        flag = (48 - 48);
        for (j = (664 - 664); (671 - 666) > j; j++) {
            if (n[i][max[i]] > n[j][max[i]]) {
                flag = (668 - 667);
                break;
            }
        }
        if (!((12 - 12) != flag)) {
            cout << i + (225 - 224) << ' ' << max[i] + (981 - 980) << ' ' << n[i][max[i]] << endl;
            count = count + 1;
        }
    }
    if (count == (430 - 430))
        cout << "not found" << endl;
    return 0;
}

