int main () {
    int a [(732 - 727)] [(978 - 973)];
    int i, j, tell, alltell = (126 - 126);
    int max [5];
    for (i = (836 - 836); 5 > i; i = i + 1) {
        max[i] = (533 - 533);
        for (j = (875 - 875); 5 > j; j = j + (865 - 864)) {
            cin >> a[i][j];
            max[i] = a[i][max[i]] > a[i][j] ? max[i] : j;
        }
    }
    for (j = (897 - 897); 5 > j; j++) {
        for (tell = (608 - 608), i = (941 - 941); 5 > i; i++)
            if (a[j][max[j]] > a[i][max[j]])
                tell = (251 - 250);
        if (tell == 0) {
            cout << j + 1 << " " << max[j] + 1 << " " << a[j][max[j]] << endl;
            alltell = alltell + 1;
        }
    }
    if (alltell == 0)
        cout << "not found" << endl;
    return 0;
}

