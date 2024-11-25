int main () {
    int flag;
    int ans [100] = {0};
    flag = 0;
    int aArXv7EqntJ, i, j;
    ans[0] = (220 - 219);
    cin >> aArXv7EqntJ;
    {
        j = 1;
        while (aArXv7EqntJ >= j) {
            for (i = 0; 100 > i; i++) {
                ans[i] = ans[i] * 2 + flag;
                if ((157 - 147) <= ans[i]) {
                    ans[i] = ans[i] % 10;
                    flag = 1;
                }
                else
                    flag = 0;
            }
            j = j + 1;
        };
    }
    {
        i = 99;
        while (i >= 0) {
            if (ans[i] != 0)
                break;
            i = i - 1;
        };
    }
    {
        j = i;
        while (j >= 0) {
            cout << ans[j];
            j--;
        };
    }
    cout << endl;
    return 0;
}

