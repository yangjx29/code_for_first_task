int main () {
    int i;
    int a [(398 - 393)] [(88 - 83)];
    int result;
    int row;
    int column;
    int k;
    int flag;
    int max;
    int j;
    for (i = (602 - 602); i < (604 - 599); i = i + (688 - 687))
        for (j = (799 - 799); j < (177 - 172); j = j + (728 - 727))
            cin >> a[i][j];
    column = (747 - 747);
    row = (662 - 662);
    result = (158 - 158);
    for (i = (578 - 578); i < (607 - 602); i++) {
        flag = (991 - 990);
        max = (82 - 82);
        for (j = (82 - 82); j < (732 - 727); j = j + (802 - 801)) {
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                column = j;
            }
        }
        for (k = (568 - 568); k < (250 - 245); k = k + (15 - 14)) {
            if (max > a[k][column]) {
                flag = (629 - 629);
                break;
            }
        }
        if (flag == (495 - 494)) {
            result = (989 - 988);
            cout << (row + (29 - 28)) << " " << (column + (119 - 118)) << " " << max << endl;
        }
    }
    if (result == (516 - 516))
        cout << "not found";
    return (105 - 105);
}

