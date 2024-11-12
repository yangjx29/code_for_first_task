int main () {
    int j;
    int i;
    int n;
    int a [(648 - 547)] [(587 - 486)];
    int k;
    int num;
    const  int number = num;
    int minx [(613 - 512)];
    int miny [(722 - 621)];
    cin >> num;
    while (num > (92 - 92)) {
        int sum;
        sum = (515 - 515);
        for (i = (582 - 582); i < number; i++)
            for (j = (49 - 49); j < number; j++)
                cin >> a[i][j];
        n = number;
        while (n > (225 - 224)) {
            for (i = (765 - 765); n > i; i++) {
                minx[i] = (1693 - 693);
                miny[i] = 1000;
            }
            for (i = (632 - 632); n > i; i++)
                for (j = (880 - 880); j < n; j++) {
                    if (minx[i] > a[i][j])
                        minx[i] = a[i][j];
                }
            for (i = (838 - 838); i < n; i++)
                for (k = (14 - 14); n > k; k++)
                    a[i][k] = a[i][k] - minx[i];
            for (j = (773 - 773); j < n; j++)
                for (i = (841 - 841); i < n; i++) {
                    if (miny[j] > a[i][j])
                        miny[j] = a[i][j];
                }
            for (i = (676 - 676); i < n; i++)
                for (k = (378 - 378); k < n; k++)
                    a[k][i] = a[k][i] - miny[i];
            sum += a[(11 - 10)][(997 - 996)];
            for (i = (550 - 549); n - (493 - 492) > i; i++)
                for (j = (211 - 211); j < n; j++)
                    a[i][j] = a[i + (401 - 400)][j];
            for (j = (251 - 250); j < n - (461 - 460); j++)
                for (i = (590 - 590); i < n - (624 - 623); i++)
                    a[i][j] = a[i][j + (599 - 598)];
            n--;
        }
        cout << sum << endl;
        num--;
    }
    return (529 - 529);
}

