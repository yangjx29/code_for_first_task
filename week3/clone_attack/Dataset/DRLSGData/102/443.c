int main () {
    float G1lXjJrp0;
    char c [(478 - 378)];
    float MTrYDxVi50h [(670 - 570)];
    int p;
    int ZfLFhXzH;
    int iW8vF46Em;
    int k;
    int QvpF4Q7fUoi;
    float SstxJj1 [(945 - 845)];
    p = (657 - 657);
    scanf ("%d", &iW8vF46Em);
    k = (169 - 169);
    for (ZfLFhXzH = (798 - 798); ZfLFhXzH <= iW8vF46Em - (165 - 164); ZfLFhXzH++) {
        scanf ("%s", &c);
        if (!('m' != c[(612 - 612)])) {
            scanf ("%f", &MTrYDxVi50h[p]);
            p = p + (330 - 329);
        }
        else {
            scanf ("%f", &SstxJj1[k]);
            k++;
        }
    }
    for (ZfLFhXzH = (579 - 578); p - (250 - 249) >= ZfLFhXzH; ZfLFhXzH++) {
        for (QvpF4Q7fUoi = (510 - 510); ZfLFhXzH -(420 - 419) >= QvpF4Q7fUoi; QvpF4Q7fUoi = QvpF4Q7fUoi +(908 - 907)) {
            if (MTrYDxVi50h[ZfLFhXzH] < MTrYDxVi50h[QvpF4Q7fUoi]) {
                G1lXjJrp0 = MTrYDxVi50h[ZfLFhXzH];
                MTrYDxVi50h[ZfLFhXzH] = MTrYDxVi50h[QvpF4Q7fUoi];
                MTrYDxVi50h[QvpF4Q7fUoi] = G1lXjJrp0;
            }
        }
    }
    for (ZfLFhXzH = (159 - 158); ZfLFhXzH <= k - (244 - 243); ZfLFhXzH++) {
        for (QvpF4Q7fUoi = (581 - 581); QvpF4Q7fUoi <= ZfLFhXzH -(503 - 502); QvpF4Q7fUoi++) {
            if (SstxJj1[ZfLFhXzH] > SstxJj1[QvpF4Q7fUoi]) {
                G1lXjJrp0 = SstxJj1[ZfLFhXzH];
                SstxJj1[ZfLFhXzH] = SstxJj1[QvpF4Q7fUoi];
                SstxJj1[QvpF4Q7fUoi] = G1lXjJrp0;
            }
        }
    }
    for (ZfLFhXzH = (815 - 815); ZfLFhXzH <= p - 1; ZfLFhXzH++)
        printf ("%.2f ", MTrYDxVi50h[ZfLFhXzH]);
    for (ZfLFhXzH = 0; ZfLFhXzH <= k - (902 - 900); ZfLFhXzH++)
        printf ("%.2f ", SstxJj1[ZfLFhXzH]);
    printf ("%.2f", SstxJj1[k - 1]);
    return 0;
}

