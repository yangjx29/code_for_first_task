int main () {
    int n, l;
    char UIFpOmGPq [(100862 - 861)];
    cin >> n;
    {
        int CEyceNQLgCf;
        CEyceNQLgCf = (281 - 281);
        while (CEyceNQLgCf < n) {
            int RbYuV2 [(917 - 891)] = {0}, eokCDr6Y [26] = {0}, H46rVGB = 100001;
            CEyceNQLgCf = CEyceNQLgCf +1;
            cin >> UIFpOmGPq;
            l = strlen (UIFpOmGPq);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            {
                int j = 0;
                while (j < l) {
                    eokCDr6Y[UIFpOmGPq[j] - 'a']++;
                    if (!(0 != RbYuV2[UIFpOmGPq[j] - 'a']))
                        RbYuV2[UIFpOmGPq[j] - 'a'] = j;
                    j = j + 1;
                };
            }
            {
                int j = 0;
                while (26 > j) {
                    if (eokCDr6Y[j] == (901 - 900) && RbYuV2[j] < H46rVGB)
                        H46rVGB = RbYuV2[j];
                    j++;
                };
            }
            if (H46rVGB == 100001)
                cout << "no";
            else
                cout << UIFpOmGPq[H46rVGB];
            cout << endl;
        };
    }
    return 0;
}

