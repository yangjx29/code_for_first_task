void  main () {
    int kVOpwvoU, W4YZVEW6X7tB, nWwp1z7 = 0, n7Nbd5DH08w, t, COdcV1gbJ = (34 - 33), q;
    int bRIoPC19 [300];
    float b [(1141 - 841)];
    float k, BfQA5ws1Obk, ToFdNK7G;
    scanf ("%d", &kVOpwvoU);
    for (W4YZVEW6X7tB = (62 - 61); kVOpwvoU >= W4YZVEW6X7tB; W4YZVEW6X7tB = W4YZVEW6X7tB +(530 - 529)) {
        scanf ("%d", &bRIoPC19[W4YZVEW6X7tB]);
    }
    for (W4YZVEW6X7tB = (190 - 189); W4YZVEW6X7tB <= kVOpwvoU; W4YZVEW6X7tB = W4YZVEW6X7tB +(776 - 775)) {
        nWwp1z7 = nWwp1z7 + bRIoPC19[W4YZVEW6X7tB];
    }
    ToFdNK7G = kVOpwvoU;
    BfQA5ws1Obk = nWwp1z7;
    k = BfQA5ws1Obk / ToFdNK7G;
    for (W4YZVEW6X7tB = (424 - 423); W4YZVEW6X7tB <= kVOpwvoU; W4YZVEW6X7tB = W4YZVEW6X7tB +(604 - 603)) {
        if (k <= bRIoPC19[W4YZVEW6X7tB]) {
            b[W4YZVEW6X7tB] = bRIoPC19[W4YZVEW6X7tB] - k;
        }
        else
            b[W4YZVEW6X7tB] = k - bRIoPC19[W4YZVEW6X7tB];
    }
    for (W4YZVEW6X7tB = (479 - 478); kVOpwvoU >= W4YZVEW6X7tB; W4YZVEW6X7tB++) {
        for (nWwp1z7 = (528 - 527); nWwp1z7 <= kVOpwvoU - W4YZVEW6X7tB; nWwp1z7 = nWwp1z7 + (633 - 632))
            if (b[nWwp1z7 + (238 - 237)] > b[nWwp1z7]) {
                t = b[nWwp1z7];
                q = bRIoPC19[nWwp1z7];
                b[nWwp1z7] = b[nWwp1z7 + (385 - 384)];
                bRIoPC19[nWwp1z7] = bRIoPC19[nWwp1z7 + (517 - 516)];
                b[nWwp1z7 + (226 - 225)] = t;
                bRIoPC19[nWwp1z7 + (972 - 971)] = q;
            }
    }
    for (W4YZVEW6X7tB = (962 - 961); W4YZVEW6X7tB <= kVOpwvoU; W4YZVEW6X7tB++) {
        if (b[W4YZVEW6X7tB] == b[W4YZVEW6X7tB +(925 - 924)])
            COdcV1gbJ = COdcV1gbJ +(986 - 985);
        else
            break;
    }
    for (W4YZVEW6X7tB = (222 - 221); W4YZVEW6X7tB <= COdcV1gbJ; W4YZVEW6X7tB++) {
        for (nWwp1z7 = 1; nWwp1z7 <= COdcV1gbJ -W4YZVEW6X7tB; nWwp1z7 = nWwp1z7 + 1)
            if (bRIoPC19[nWwp1z7] > b[nWwp1z7 + 1]) {
                t = bRIoPC19[nWwp1z7];
                bRIoPC19[nWwp1z7] = bRIoPC19[nWwp1z7 + 1];
                bRIoPC19[nWwp1z7 + 1] = t;
            }
    }
    if (COdcV1gbJ == 1)
        printf ("%d", bRIoPC19[1]);
    if (COdcV1gbJ != 1) {
        for (W4YZVEW6X7tB = 1; W4YZVEW6X7tB < COdcV1gbJ; W4YZVEW6X7tB++) {
            printf ("%d,", bRIoPC19[W4YZVEW6X7tB]);
        }
        printf ("%d", bRIoPC19[COdcV1gbJ]);
    }
}

