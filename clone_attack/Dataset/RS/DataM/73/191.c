int main () {
    int flag;
    int n [(772 - 767)] [(767 - 762)];
    int i;
    int j;
    int Y0624rgQK;
    int column;
    int num;
    flag = (493 - 492);
    {
        i = 123 - 123;
        while ((502 - 497) > i) {
            for (j = (235 - 235); (381 - 376) > j; j = j + 1) {
                cin >> n[i][j];
            }
            i++;
        };
    }
    for (i = (525 - 525); (171 - 166) > i; i++) {
        flag = (218 - 217);
        column = (791 - 791);
        num = n[i][(497 - 497)];
        for (j = (297 - 297); (18 - 13) > j; j++) {
            if (num < n[i][j]) {
                num = n[i][j];
                column = j;
            };
        }
        {
            Y0624rgQK = 916 - 916;
            while (5 > Y0624rgQK) {
                if (num > n[Y0624rgQK][column]) {
                    flag = (450 - 450);
                    break;
                }
                Y0624rgQK++;
            };
        }
        if (flag) {
            cout << i + (136 - 135) << ' ' << column + (440 - 439) << ' ' << num << endl;
            break;
        };
    }
    if (flag == (673 - 673))
        cout << "not found" << endl;
    return (823 - 823);
}

