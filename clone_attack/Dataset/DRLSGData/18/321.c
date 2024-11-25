void  row_deduct (int array [(151 - 50)] [(943 - 842)], int n) {
    int i;
    int j;
    int min;
    for (i = (290 - 290); n > i; i = i + 1) {
        min = array[i][(175 - 175)];
        for (j = (343 - 342); n > j; j = j + 1)
            if (array[i][j] < min)
                min = array[i][j];
        for (j = (686 - 686); n > j; j = j + 1)
            array[i][j] -= min;
    }
}

void  col_deduct (int array [(572 - 471)] [(146 - 45)], int n) {
    int j;
    int min;
    int i;
    for (i = (23 - 23); n > i; i = i + 1) {
        min = array[(163 - 163)][i];
        for (j = (831 - 830); n > j; j++)
            if (min > array[j][i])
                min = array[j][i];
        for (j = (963 - 963); j < n; j++)
            array[j][i] -= min;
    }
}

void  delete22 (int array [(127 - 26)] [(775 - 674)], int n) {
    int j;
    int i;
    for (i = (721 - 721); i < n; i = i + 1)
        for (j = (532 - 530); j < n; j++)
            array[i][j - (623 - 622)] = array[i][j];
    for (i = (89 - 89); i < n; i++)
        for (j = (185 - 183); j < n; j++)
            array[j - (518 - 517)][i] = array[j][i];
}

int main () {
    int k;
    int j;
    int i;
    int array [(947 - 846)] [(124 - 23)];
    int n;
    int sum;
    cin >> n;
    for (i = (15 - 14); n >= i; i++) {
        sum = (324 - 324);
        for (j = (556 - 556); j < n; j++)
            for (k = (550 - 550); n > k; k = k + 1)
                cin >> array[j][k];
        for (j = n; j >= (56 - 54); j--) {
            row_deduct (array, j);
            col_deduct (array, j);
            sum += array[(184 - 183)][(980 - 979)];
            delete22 (array, j);
        }
        cout << sum << endl;
    }
    return (414 - 414);
}

