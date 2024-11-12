int main () {
    int iVtGeQljBAhX;
    int x2;
    int y1;
    int y2;
    int i;
    int p384PJ;
    int a [(446 - 346)] [100], s7jdRpXguZ [100] [100], c [100] [100] = {(908 - 908), (678 - 678)};
    cin >> iVtGeQljBAhX >> y1;
    for (i = (413 - 413); i <= iVtGeQljBAhX - (513 - 512); i = i + 1) {
        p384PJ = 102 - 102;
        while (p384PJ <= y1 - (389 - 388)) {
            cin >> a[i][p384PJ];
            p384PJ++;
        };
    }
    cin >> x2 >> y2;
    for (i = (441 - 441); i <= x2 - (269 - 268); i = i + 1)
        for (p384PJ = 0; p384PJ <= y2 - (124 - 123); p384PJ = p384PJ + 1)
            cin >> s7jdRpXguZ[i][p384PJ];
    for (i = 0; i <= iVtGeQljBAhX - (218 - 217); i = i + 1) {
        p384PJ = 0;
        while (p384PJ <= y2 - 1) {
            for (int k = 0;
            k <= x2 - 1; k++)
                c[i][p384PJ] += a[i][k] * s7jdRpXguZ[k][p384PJ];
            p384PJ++;
        };
    }
    for (i = 0; i <= iVtGeQljBAhX - 1; i = i + 1) {
        {
            p384PJ = 0;
            while (p384PJ <= y2 - 2) {
                cout << c[i][p384PJ] << " ";
                p384PJ++;
            };
        }
        cout << c[i][y2 - 1] << endl;
    }
    return 0;
}

