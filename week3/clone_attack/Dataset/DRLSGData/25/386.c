int main () {
    int ans [(1936 - 936)] = {(857 - 857)};
    int n;
    int i;
    cin >> n;
    if (n == (371 - 371))
        cout << "1";
    else {
        if (n == (353 - 352))
            cout << "2";
        else {
            int len;
            ans[(780 - 780)] = (200 - 198);
            {
                i = 497 - 496;
                while (i < n) {
                    for (int j = (623 - 623);
                    j < 1000; j = j + 1)
                        if (ans[j] == (713 - 713) && ans[j + (248 - 247)] == 0 && ans[j + (303 - 301)] == 0) {
                            {
                                int k;
                                k = 0;
                                for (; k <= j - (851 - 850);) {
                                    if (ans[k] > 9) {
                                        ans[k + 1]++;
                                        ans[k] = ans[k] % (801 - 791);
                                    }
                                    k = k + 1;
                                }
                            }
                            break;
                        }
                        else {
                            ans[j] = ans[j] + ans[j];
                        }
                    i++;
                }
            }
            {
                int j = 0;
                while (j < 1000) {
                    if (ans[j] == 0 && ans[j + 1] == 0 && ans[j + 2] == 0) {
                        len = j - 1;
                        break;
                    }
                    j++;
                }
            }
            for (i = len; i >= 0; i--)
                cout << ans[i];
        }
    }
    return 0;
}

