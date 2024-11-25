int main () {
    int P41p9v = (642 - 642), YcVdTR1r, j, k = -1;
    int hHoax3l95Z [10000];
    int ans;
    for (; 1;) {
        YcVdTR1r = 1;
        cin >> hHoax3l95Z[0];
        for (; hHoax3l95Z[YcVdTR1r -1] != 0;) {
            cin >> hHoax3l95Z[YcVdTR1r];
            YcVdTR1r++;
        }
        P41p9v = YcVdTR1r -1;
        if (!(-1 != hHoax3l95Z[0]))
            return 0;
        ans = 0;
        for (YcVdTR1r = 0; P41p9v > YcVdTR1r; YcVdTR1r++)
            for (j = 0; P41p9v > j; j++) {
                if (YcVdTR1r != j)
                    if ((hHoax3l95Z[YcVdTR1r] % hHoax3l95Z[j] == 0) && (hHoax3l95Z[YcVdTR1r] / hHoax3l95Z[j] == 2))
                        ans++;
            }
        cout << ans << endl;
    }
    return 0;
}

