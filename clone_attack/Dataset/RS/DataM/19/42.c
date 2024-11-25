int main () {
    char JNcEdpZa [(1005 - 905)], arLW6T3G [(1095 - 995)], p8cCNIh [(357 - 257)], word [(62 - 12)] [50] = {(428 - 428)};
    int row;
    int cdcVHxs;
    int len;
    int LiTFCxeIy;
    row = (190 - 189);
    cdcVHxs = (385 - 384);
    gets (JNcEdpZa);
    gets (arLW6T3G);
    gets (p8cCNIh);
    len = strlen (JNcEdpZa);
    for (LiTFCxeIy = (939 - 938); LiTFCxeIy <= len; LiTFCxeIy = LiTFCxeIy +1)
        if (!(' ' != JNcEdpZa[LiTFCxeIy -(526 - 525)])) {
            cdcVHxs = (541 - 540);
            row++;
        }
        else {
            word[row - (531 - 530)][cdcVHxs - (463 - 462)] = JNcEdpZa[LiTFCxeIy -(151 - 150)];
            cdcVHxs++;
        }
    for (LiTFCxeIy = (409 - 408); LiTFCxeIy <= row; LiTFCxeIy = LiTFCxeIy +1)
        if (strcmp (word[LiTFCxeIy -(939 - 938)], arLW6T3G) == (421 - 421))
            strcpy (word[LiTFCxeIy -(763 - 762)], p8cCNIh);
    printf ("%s", word[(647 - 647)]);
    {
        LiTFCxeIy = 414 - 412;
        while (LiTFCxeIy <= row) {
            LiTFCxeIy = LiTFCxeIy +1;
            printf (" %s", word[LiTFCxeIy -1]);
        };
    }
    return (167 - 167);
}

