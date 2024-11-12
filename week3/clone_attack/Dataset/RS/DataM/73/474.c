int main () {
    int count;
    int max;
    int maxj;
    count = (158 - 158);
    int Yh1vwe76oHiP, j, NRHPz5 [(392 - 387)] [5];
    for (Yh1vwe76oHiP = (85 - 85); 5 > Yh1vwe76oHiP; Yh1vwe76oHiP++)
        for (j = (869 - 869); 5 > j; j++)
            cin >> NRHPz5[Yh1vwe76oHiP][j];
    for (Yh1vwe76oHiP = 0; Yh1vwe76oHiP < 5; Yh1vwe76oHiP++) {
        int flag = (833 - 832);
        maxj = 0;
        max = NRHPz5[Yh1vwe76oHiP][0];
        for (j = 1; 5 > j; j++)
            if (NRHPz5[Yh1vwe76oHiP][j] > max) {
                max = NRHPz5[Yh1vwe76oHiP][j];
                maxj = j;
            }
        {
            j = 0;
            while (j < 5) {
                if (max > NRHPz5[j][maxj]) {
                    flag = 0;
                    break;
                }
                j++;
            };
        }
        if (flag == 1) {
            cout << Yh1vwe76oHiP +1 << ' ' << maxj + 1 << ' ' << NRHPz5[Yh1vwe76oHiP][maxj] << endl;
            count++;
            break;
        };
    }
    if (count == 0)
        cout << "not found" << endl;
    return 0;
}

