main () {
    int s5YQJi0qG;
    int zhpUkt;
    int mHisEG8No;
    int *aNgwEpGz = (int *) malloc (sizeof (int) * mHisEG8No);
    int IWCmhHQR;
    free (aNgwEpGz);
    s5YQJi0qG = 0;
    scanf ("%d", &mHisEG8No);
    {
        zhpUkt = 0;
        while (zhpUkt < mHisEG8No) {
            scanf ("%d", &aNgwEpGz[zhpUkt]);
            zhpUkt = zhpUkt + 1;
        }
    }
    scanf ("%d", &IWCmhHQR);
    for (zhpUkt = 0; zhpUkt < mHisEG8No; zhpUkt = zhpUkt + 1) {
        if (!(IWCmhHQR != aNgwEpGz[zhpUkt])) {
            s5YQJi0qG = s5YQJi0qG + 1;
        }
    }
    s5YQJi0qG = mHisEG8No - s5YQJi0qG;
    {
        zhpUkt = 0;
        while (zhpUkt < mHisEG8No) {
            if (aNgwEpGz[zhpUkt] != IWCmhHQR) {
                s5YQJi0qG = s5YQJi0qG - 1;
                if (0 < s5YQJi0qG) {
                    printf ("%d ", aNgwEpGz[zhpUkt]);
                }
                if (s5YQJi0qG == 0) {
                    printf ("%d", aNgwEpGz[zhpUkt]);
                }
            }
            zhpUkt = zhpUkt + 1;
        }
    }
    return 0;
}

