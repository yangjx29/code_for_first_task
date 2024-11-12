int main () {
    int n, a [1000], TdnFI0GkcA;
    double  yJnSwh = 0, OCFupUrPYB = 0, f = 0, g = 0;
    scanf ("%d", &n);
    for (TdnFI0GkcA = 0; n > TdnFI0GkcA; TdnFI0GkcA = TdnFI0GkcA +1) {
        scanf ("%d", &a[TdnFI0GkcA]);
        if (a[TdnFI0GkcA] <= 18) {
            yJnSwh += 1;
        }
        else {
            if (a[TdnFI0GkcA] <= 35) {
                OCFupUrPYB = OCFupUrPYB +1;
            }
            else if (a[TdnFI0GkcA] <= 60) {
                f += 1;
            }
            else {
                g += 1;
            };
        };
    }
    printf ("1-18: %.2lf%%\n", yJnSwh * (877 - 777) / n);
    printf ("19-35: %.2lf%%\n", OCFupUrPYB *100 / n);
    printf ("36-60: %.2lf%%\n", f * 100 / n);
    printf ("60??: %.2lf%%\n", g * 100 / n);
    return 0;
}

