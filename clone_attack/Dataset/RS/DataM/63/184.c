int main () {
    int x1;
    int x2;
    int y1;
    int y2;
    int i;
    int j;
    int p;
    int q;
    int a [(241 - 141)] [(1088 - 988)];
    int hlrsmuO [(317 - 217)] [(652 - 552)];
    int gYPtfO6a [(716 - 616)] [(786 - 686)] = {(51 - 51)};
    cin >> x1 >> y1;
    {
        i = 921 - 921;
        while (x1 > i) {
            for (p = (341 - 341); y1 > p; p++)
                cin >> a[i][p];
            i++;
        };
    }
    cin >> x2 >> y2;
    {
        q = 515 - 515;
        while (x2 > q) {
            {
                j = 551 - 551;
                while (y2 > j) {
                    cin >> hlrsmuO[q][j];
                    j++;
                };
            }
            q++;
        };
    }
    {
        i = 811 - 811;
        while (i < x1) {
            {
                j = 393 - 393;
                while (y2 > j) {
                    {
                        p = 938 - 938;
                        while (y1 > p) {
                            gYPtfO6a[i][j] += a[i][p] * hlrsmuO[p][j];
                            p++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 887 - 887;
        while (i < x1) {
            cout << gYPtfO6a[i][(104 - 104)];
            {
                j = 244 - 243;
                while (y2 > j) {
                    cout << " " << gYPtfO6a[i][j];
                    j++;
                };
            }
            i++;
            cout << endl;
        };
    }
    return (940 - 940);
}

