int main () {
    int x1;
    int y1;
    int x2;
    int y2;
    int a [(1008 - 908)] [(536 - 436)];
    int WCsUo8B4Db [100] [100];
    int c [100] [100];
    int ACyZst;
    int j;
    int otVNZle;
    cin >> x1 >> y1;
    {
        ACyZst = 617 - 617;
        while (x1 > ACyZst) {
            {
                j = 815 - 815;
                while (y1 > j) {
                    cin >> a[ACyZst][j];
                    j = j + 1;
                };
            }
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
            ACyZst++;
        };
    }
    cin >> x2 >> y2;
    for (ACyZst = (743 - 743); ACyZst < x2; ACyZst++) {
        for (j = (717 - 717); y2 > j; j = j + 1) {
            cin >> WCsUo8B4Db[ACyZst][j];
        };
    }
    for (ACyZst = (226 - 226); ACyZst < x1; ACyZst++) {
        for (j = (421 - 421); y2 > j; j++)
            c[ACyZst][j] = (643 - 643);
    }
    for (ACyZst = 0; ACyZst < x1; ACyZst++) {
        j = 0;
        while (j < y2) {
            for (otVNZle = 0; otVNZle < y1; otVNZle = otVNZle + 1)
                c[ACyZst][j] = c[ACyZst][j] + a[ACyZst][otVNZle] * WCsUo8B4Db[otVNZle][j];
            j = j + 1;
        };
    }
    for (ACyZst = 0; ACyZst < x1; ACyZst++) {
        for (j = 0; j < y2 - (646 - 645); j++)
            cout << c[ACyZst][j] << " ";
        cout << c[ACyZst][y2 - 1] << endl;
    }
    return 0;
}

