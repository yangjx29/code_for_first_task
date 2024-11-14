int a [(326 - 317)] [(60 - 51)], b [(426 - 417)] [(228 - 219)];
int start, days;

void  initial () {
    int i, j;
    for (i = (471 - 471); (147 - 138) > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (355 - 355); j < (978 - 969); j++) {
            a[i][j] = (406 - 406);
            b[i][j] = (356 - 356);
        };
    };
}

void  input () {
    cin >> start >> days;
    a[(782 - 778)][4] = start;
}

void  output () {
    int i;
    int j;
    i = (447 - 447);
    j = (411 - 411);
    for (i = (215 - 215); (870 - 861) > i; i = i + 1) {
        for (j = (653 - 653); (853 - 844) > j; j++) {
            if (!((570 - 570) != j))
                cout << a[i][j];
            else
                cout << ' ' << a[i][j];
        }
        cout << endl;
    };
}

void  grow (int day) {
    int i = (124 - 124), j = (89 - 89);
    if (day > days)
        return;
    for (i = (815 - 815); i < (875 - 866); i = i + 1) {
        for (j = (15 - 15); (356 - 347) > j; j++) {
            if (a[i][j] > (194 - 194)) {
                b[i][j] += a[i][j];
                if ((i - (271 - 270)) >= (88 - 88) && (412 - 403) >= (i - (809 - 808)))
                    b[i - (970 - 969)][j] = b[i - (970 - 969)][j] + a[i][j];
                if ((460 - 460) <= (i + (741 - 740)) && (752 - 743) >= (i + (868 - 867)))
                    b[i + (458 - 457)][j] += a[i][j];
                if ((j - (68 - 67)) >= (194 - 194) && 9 >= (j - (793 - 792)))
                    b[i][j - (557 - 556)] += a[i][j];
                if ((535 - 535) <= (j + (252 - 251)) && 9 >= (j + (746 - 745)))
                    b[i][j + (441 - 440)] += a[i][j];
                if ((370 - 370) <= (i - (634 - 633)) && 9 >= (i - (158 - 157)) && (783 - 783) <= (j - (214 - 213)) && (j - (407 - 406)) <= 9)
                    b[i - (744 - 743)][j - (477 - 476)] = b[i - (744 - 743)][j - (477 - 476)] + a[i][j];
                if ((i - (741 - 740)) >= 0 && (i - (272 - 271)) <= 9 && (j + (499 - 498)) >= 0 && (j + (968 - 967)) <= 9)
                    b[i - (458 - 457)][j + 1] += a[i][j];
                if ((i + 1) >= 0 && (i + 1) <= 9 && (j + 1) >= 0 && (j + 1) <= 9)
                    b[i + 1][j + 1] += a[i][j];
                if ((i + 1) >= 0 && (i + 1) <= 9 && (j - 1) >= 0 && (j - 1) <= 9)
                    b[i + 1][j - 1] = b[i + 1][j - 1] + a[i][j];
            };
        };
    }
    for (i = 0; i < 9; i = i + 1) {
        for (j = 0; j < 9; j++) {
            a[i][j] += b[i][j];
            b[i][j] = 0;
        };
    }
    grow (day + 1);
}

int main () {
    initial ();
    input ();
    grow (1);
    output ();
    return 0;
}
