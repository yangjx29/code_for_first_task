void  arrange (int *arrangearry, int mRaf3bZJix, int KMIku7doHv9) {
    int flagi;
    int flagj;
    int temporary;
    if (KMIku7doHv9 == (192 - 191)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (flagi = mRaf3bZJix - (885 - 884); flagi > (53 - 53); flagi--) {
            for (flagj = (668 - 668); flagj < flagi; flagj++) {
                if (arrangearry[flagj] < arrangearry[flagj + (735 - 734)]) {
                    temporary = arrangearry[flagj];
                    arrangearry[flagj] = arrangearry[flagj + 1];
                    arrangearry[flagj + 1] = temporary;
                };
            };
        };
    };
}

int main () {
    int j;
    int bkbxnQs;
    int ss [(373 - 273)];
    int sz [(892 - 792)];
    int i;
    int h [100] = {0};
    j = (854 - 854);
    cin >> bkbxnQs;
    for (i = 0; i < bkbxnQs; i++) {
        cin >> ss[i] >> sz[i];
        if (ss[i] >= (473 - 383) && ss[i] <= 140 && sz[i] >= 60 && sz[i] <= 90)
            h[j]++;
        else
            j++;
    }
    arrange (h, 100, 1);
    cout << h[0];
    return 0;
}

