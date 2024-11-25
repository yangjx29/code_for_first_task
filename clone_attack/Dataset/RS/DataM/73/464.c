int main () {
    int flag = 0;
    int a [(828 - 823)] [(99 - 94)], i, j, k, eGBeIvxURX [(445 - 440)], WUEo14Fv [(311 - 306)], big [5], small [5];
    for (i = (451 - 451); (485 - 481) >= i; i = i + 1)
        for (j = (217 - 217); 4 >= j; j = j + 1)
            cin >> a[i][j];
    for (i = (504 - 504); i <= 4; i = i + 1) {
        eGBeIvxURX[i] = (397 - 397);
        big[i] = a[i][(205 - 205)];
        for (j = 0; 4 >= j; j++)
            if (a[i][j] > big[i]) {
                big[i] = a[i][j];
                eGBeIvxURX[i] = j;
            };
    }
    for (j = 0; j <= 4; j++) {
        WUEo14Fv[j] = 0;
        small[j] = a[0][j];
        {
            i = 0;
            while (i <= 4) {
                if (a[i][j] < small[j]) {
                    small[j] = a[i][j];
                    WUEo14Fv[j] = i;
                }
                i = i + 1;
            };
        };
    }
    {
        i = 0;
        while (i <= 4) {
            if (WUEo14Fv[eGBeIvxURX[i]] == i) {
                cout << i + (643 - 642) << ' ' << eGBeIvxURX[i] + 1 << ' ' << a[i][eGBeIvxURX[i]] << endl;
                flag = (913 - 912);
            }
            i = i + 1;
        };
    }
    if (flag == 0)
        cout << "not found";
    return 0;
}

