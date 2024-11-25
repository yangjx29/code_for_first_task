int main () {
    int hcP8ob6a [100] [100];
    int sfj9ipLrIzcF;
    int fqzQK3Stg;
    int rZ5j28WlSo;
    int O95d2NTQ;
    int nm0oq1OQC;
    int QE0cfZA9uM;
    scanf ("%d%d", &O95d2NTQ, &rZ5j28WlSo);
    for (fqzQK3Stg = (655 - 655); fqzQK3Stg < O95d2NTQ; fqzQK3Stg = fqzQK3Stg + 1) {
        sfj9ipLrIzcF = 232 - 232;
        while (sfj9ipLrIzcF < rZ5j28WlSo) {
            scanf ("%d", &hcP8ob6a[sfj9ipLrIzcF][fqzQK3Stg]);
            sfj9ipLrIzcF++;
        }
    }
    QE0cfZA9uM = 0;
    {
        nm0oq1OQC = 0;
        while (nm0oq1OQC < rZ5j28WlSo / (264 - 262) && nm0oq1OQC < O95d2NTQ / 2) {
            {
                sfj9ipLrIzcF = nm0oq1OQC;
                while (sfj9ipLrIzcF < rZ5j28WlSo - nm0oq1OQC - 1) {
                    printf ("%d\n", hcP8ob6a[sfj9ipLrIzcF][nm0oq1OQC]);
                    sfj9ipLrIzcF++;
                }
            }
            for (fqzQK3Stg = nm0oq1OQC; fqzQK3Stg < O95d2NTQ -nm0oq1OQC - 1; fqzQK3Stg = fqzQK3Stg + 1)
                printf ("%d\n", hcP8ob6a[rZ5j28WlSo - nm0oq1OQC - 1][fqzQK3Stg]);
            for (sfj9ipLrIzcF = rZ5j28WlSo - nm0oq1OQC - 1; sfj9ipLrIzcF > nm0oq1OQC; sfj9ipLrIzcF = sfj9ipLrIzcF - 1)
                printf ("%d\n", hcP8ob6a[sfj9ipLrIzcF][O95d2NTQ -nm0oq1OQC - 1]);
            for (fqzQK3Stg = O95d2NTQ -nm0oq1OQC - 1; fqzQK3Stg > nm0oq1OQC; fqzQK3Stg--)
                printf ("%d\n", hcP8ob6a[nm0oq1OQC][fqzQK3Stg]);
            QE0cfZA9uM = QE0cfZA9uM +2 * (rZ5j28WlSo + O95d2NTQ -4 * nm0oq1OQC - 2);
            nm0oq1OQC++;
        }
    }
    if (QE0cfZA9uM != rZ5j28WlSo * O95d2NTQ) {
        if (rZ5j28WlSo < O95d2NTQ) {
            for (fqzQK3Stg = nm0oq1OQC; fqzQK3Stg < O95d2NTQ -nm0oq1OQC; fqzQK3Stg++)
                printf ("%d\n", hcP8ob6a[nm0oq1OQC][fqzQK3Stg]);
        }
        if (O95d2NTQ < rZ5j28WlSo) {
            for (sfj9ipLrIzcF = nm0oq1OQC; sfj9ipLrIzcF < rZ5j28WlSo - nm0oq1OQC; sfj9ipLrIzcF++)
                printf ("%d\n", hcP8ob6a[sfj9ipLrIzcF][nm0oq1OQC]);
        }
        if (rZ5j28WlSo == O95d2NTQ)
            printf ("%d\n", hcP8ob6a[nm0oq1OQC][nm0oq1OQC]);
    }
    return 0;
}

