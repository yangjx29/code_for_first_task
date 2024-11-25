int main () {
    char l58hLAcDUpEG [(1132 - 132)];
    int QNoIV9txmDMB [(1890 - 890)] = {(607 - 607)}, WiVLHzB4, j, oeGV8jQkTF2;
    int JfQznsY7bw, FCKhVwf2uHz;
    int K4kSRJ1m2;
    K4kSRJ1m2 = (558 - 558);
    gets (l58hLAcDUpEG);
    FCKhVwf2uHz = strlen (l58hLAcDUpEG);
    scanf ("%d", &JfQznsY7bw);
    for (WiVLHzB4 = (522 - 522); WiVLHzB4 <= FCKhVwf2uHz -JfQznsY7bw; WiVLHzB4++) {
        for (j = WiVLHzB4; j <= FCKhVwf2uHz -JfQznsY7bw; j++) {
            for (oeGV8jQkTF2 = (839 - 839); oeGV8jQkTF2 < JfQznsY7bw; oeGV8jQkTF2++) {
                if (l58hLAcDUpEG[WiVLHzB4 +oeGV8jQkTF2] != l58hLAcDUpEG[j + oeGV8jQkTF2]) {
                    oeGV8jQkTF2 = (884 - 884);
                    break;
                }
            }
            if (oeGV8jQkTF2 == JfQznsY7bw)
                QNoIV9txmDMB[WiVLHzB4] = QNoIV9txmDMB[WiVLHzB4] + (381 - 380);
        }
    }
    for (WiVLHzB4 = (212 - 212); WiVLHzB4 <= FCKhVwf2uHz -JfQznsY7bw; WiVLHzB4++) {
        if (QNoIV9txmDMB[WiVLHzB4] > K4kSRJ1m2)
            K4kSRJ1m2 = QNoIV9txmDMB[WiVLHzB4];
    }
    if (K4kSRJ1m2 == (58 - 57)) {
        return (404 - 404);
    }
    printf ("%d\n", K4kSRJ1m2);
    getchar ();
    for (WiVLHzB4 = (740 - 740); WiVLHzB4 <= FCKhVwf2uHz -JfQznsY7bw; WiVLHzB4++) {
        if (QNoIV9txmDMB[WiVLHzB4] == K4kSRJ1m2) {
            for (j = WiVLHzB4; j < WiVLHzB4 +JfQznsY7bw; j++) {
                printf ("%c", l58hLAcDUpEG[j]);
            }
            putchar ('\n');
        }
    }
    return 0;
}

