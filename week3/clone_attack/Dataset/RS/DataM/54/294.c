void  main () {
    int Cc0uvy;
    int qs6SzLD;
    int Kk3ZoAd8E5J;
    int RUmLlCIF;
    int QQW1Ft;
    Cc0uvy = 1;
    scanf ("%d %d", &qs6SzLD, &Kk3ZoAd8E5J);
    for (QQW1Ft = 1;; QQW1Ft = QQW1Ft +1) {
        Cc0uvy = QQW1Ft;
        for (RUmLlCIF = 1; RUmLlCIF <= qs6SzLD; RUmLlCIF = RUmLlCIF +1)
            if (Cc0uvy % (qs6SzLD - 1) == 0)
                Cc0uvy = Cc0uvy *qs6SzLD / (qs6SzLD - 1) + Kk3ZoAd8E5J;
            else
                break;
        if (RUmLlCIF > qs6SzLD)
            break;
    }
    printf ("%d\n", Cc0uvy);
}

