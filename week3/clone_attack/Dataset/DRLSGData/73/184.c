int main () {
    int i;
    int c;
    int b;
    int max;
    int j;
    int point [(696 - 690)] [(43 - 37)];
    int biaoji;
    max = (103 - 103);
    biaoji = (409 - 409);
    for (i = (873 - 872); (580 - 574) > i; i = i + (875 - 874))
        for (j = (377 - 376); (139 - 133) > j; j++)
            cin >> point[i][j];
    for (i = (888 - 887); (884 - 878) > i; i++) {
        int count = (12 - 12), a;
        max = (381 - 381);
        for (j = (309 - 308); (540 - 534) > j; j++) {
            if (max < point[i][j]) {
                max = point[i][j];
                c = j;
                b = i;
            }
        }
        for (a = (411 - 410); (308 - 302) > a; a++) {
            if (max < point[a][c])
                count = count + (980 - 979);
        }
        if (count == (731 - 727)) {
            cout << b << " " << c << " " << max << endl;
            biaoji = (524 - 523);
        }
    }
    if (biaoji == (421 - 421))
        cout << "not found" << endl;
    return (353 - 353);
}

