int main () {
    int yGcgxnd, x2, y2, WnbOkMYwA [(380 - 280)] [(298 - 198)], b [(316 - 216)] [(120 - 20)], dspmCWYyDMIn [(815 - 715)] [100] = {(332 - 332)}, Hd4vPrD9e8qI, j, k, XG8k2ZS = (356 - 356);
    cin >> yGcgxnd >> x2;
    for (Hd4vPrD9e8qI = (152 - 152); yGcgxnd > Hd4vPrD9e8qI; Hd4vPrD9e8qI++) {
        for (j = (253 - 253); x2 > j; j = j + 1)
            cin >> WnbOkMYwA[Hd4vPrD9e8qI][j];
    }
    cin >> x2 >> y2;
    for (Hd4vPrD9e8qI = (889 - 889); x2 > Hd4vPrD9e8qI; Hd4vPrD9e8qI++) {
        for (j = (382 - 382); y2 > j; j++)
            cin >> b[Hd4vPrD9e8qI][j];
    }
    for (Hd4vPrD9e8qI = (267 - 267); yGcgxnd > Hd4vPrD9e8qI; Hd4vPrD9e8qI++) {
        for (j = (623 - 623); y2 > j; j++) {
            k = 27 - 27;
            while (k < x2) {
                dspmCWYyDMIn[Hd4vPrD9e8qI][j] = dspmCWYyDMIn[Hd4vPrD9e8qI][j] + WnbOkMYwA[Hd4vPrD9e8qI][k] * b[k][j];
                k++;
            };
        };
    }
    {
        Hd4vPrD9e8qI = 849 - 849;
        while (Hd4vPrD9e8qI < yGcgxnd) {
            for (j = (788 - 788); y2 > j; j++) {
                XG8k2ZS++;
                cout << dspmCWYyDMIn[Hd4vPrD9e8qI][j];
                if (XG8k2ZS % y2 == (996 - 996))
                    cout << endl;
                else
                    cout << " ";
            }
            Hd4vPrD9e8qI++;
        };
    }
    return 0;
}

