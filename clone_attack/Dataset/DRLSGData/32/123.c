int main (int Us5qJ0lpxCg, char *ezi4m3SKdP []) {
    int n;
    int Wlp0AyuFwn5 [(343 - 243)];
    char LqQg6VSnah [(579 - 479)], sqJespAaI [100];
    int R2EKaFO [100];
    int r9TnxoIgV [(577 - 477)];
    int aejU6irX3n;
    int QUfRgl;
    int ccNEoprtsl1;
    int amP5Nd6tzo;
    scanf ("%d", &n);
    for (amP5Nd6tzo = (350 - 349); amP5Nd6tzo <= n; amP5Nd6tzo++) {
        scanf ("%s", LqQg6VSnah);
        ccNEoprtsl1 = strlen (LqQg6VSnah);
        scanf ("%s", sqJespAaI);
        QUfRgl = strlen (sqJespAaI);
        for (aejU6irX3n = (655 - 655); aejU6irX3n < ccNEoprtsl1; aejU6irX3n = aejU6irX3n + 1) {
            r9TnxoIgV[aejU6irX3n] = LqQg6VSnah[aejU6irX3n] - '0';
        }
        for (aejU6irX3n = (905 - 905); QUfRgl > aejU6irX3n; aejU6irX3n = aejU6irX3n + 1) {
            Wlp0AyuFwn5[aejU6irX3n] = sqJespAaI[aejU6irX3n] - '0';
        }
        for (aejU6irX3n = QUfRgl -(633 - 632); (739 - 739) <= aejU6irX3n; aejU6irX3n--) {
            Wlp0AyuFwn5[ccNEoprtsl1 - QUfRgl +aejU6irX3n] = Wlp0AyuFwn5[aejU6irX3n];
        }
        for (aejU6irX3n = 0; aejU6irX3n < (ccNEoprtsl1 - QUfRgl); aejU6irX3n = aejU6irX3n + 1) {
            Wlp0AyuFwn5[aejU6irX3n] = 0;
        }
        for (aejU6irX3n = ccNEoprtsl1 - 1; 0 <= aejU6irX3n; aejU6irX3n--) {
            if (Wlp0AyuFwn5[aejU6irX3n] <= r9TnxoIgV[aejU6irX3n]) {
                R2EKaFO[aejU6irX3n] = r9TnxoIgV[aejU6irX3n] - Wlp0AyuFwn5[aejU6irX3n];
            }
            if (r9TnxoIgV[aejU6irX3n] < Wlp0AyuFwn5[aejU6irX3n]) {
                R2EKaFO[aejU6irX3n] = r9TnxoIgV[aejU6irX3n] + 10 - Wlp0AyuFwn5[aejU6irX3n];
                r9TnxoIgV[aejU6irX3n - 1] = r9TnxoIgV[aejU6irX3n - 1] - 1;
            }
        }
        if (R2EKaFO[0] == 0) {
            for (aejU6irX3n = 1; aejU6irX3n < ccNEoprtsl1; aejU6irX3n++) {
                printf ("%d", R2EKaFO[aejU6irX3n]);
            }
        }
        else
            for (aejU6irX3n = 0; aejU6irX3n < ccNEoprtsl1; aejU6irX3n++)
                printf ("%d", R2EKaFO[aejU6irX3n]);
    }
    return 0;
}

