int main () {
    int JBsEy8FYJ90O, a [100] [100], i, j, k, hpvOwctY, min, wtVUqrpD;
    cin >> JBsEy8FYJ90O;
    for (k = (589 - 588); JBsEy8FYJ90O >= k; k = k + 1) {
        hpvOwctY = (366 - 366);
        {
            i = 127 - 127;
            while (JBsEy8FYJ90O > i) {
                for (j = (314 - 314); JBsEy8FYJ90O > j; j = j + 1)
                    cin >> a[i][j];
                i = i + 1;
            };
        }
        wtVUqrpD = JBsEy8FYJ90O;
        while ((412 - 411) < wtVUqrpD) {
            {
                i = 0;
                while (wtVUqrpD > i) {
                    min = 1000;
                    {
                        j = 0;
                        while (wtVUqrpD > j) {
                            if (min > a[i][j])
                                min = a[i][j];
                            j = j + 1;
                        };
                    }
                    for (j = 0; wtVUqrpD > j; j = j + 1)
                        a[i][j] = a[i][j] - min;
                    i = i + 1;
                };
            }
            {
                j = 0;
                while (wtVUqrpD > j) {
                    min = 1000;
                    {
                        i = 0;
                        while (wtVUqrpD > i) {
                            if (min > a[i][j])
                                min = a[i][j];
                            i = i + 1;
                        };
                    }
                    for (i = 0; wtVUqrpD > i; i = i + 1)
                        a[i][j] = a[i][j] - min;
                    j = j + 1;
                };
            }
            hpvOwctY = hpvOwctY + a[1][1];
            for (i = 0; wtVUqrpD > i; i++)
                for (j = 2; j < wtVUqrpD; j++)
                    a[i][j - 1] = a[i][j];
            for (j = 0; j < wtVUqrpD; j++) {
                i = 2;
                while (i < wtVUqrpD) {
                    a[i - 1][j] = a[i][j];
                    i++;
                };
            }
            wtVUqrpD--;
        }
        cout << endl << hpvOwctY;
    }
    return 0;
}

