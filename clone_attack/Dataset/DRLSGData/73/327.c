main () {
    int sZ7okn0;
    int xXhansb;
    int YtgCr95hAYP;
    int T6XRlBhOECVm;
    int lYGJ8sgt7w [(100 - 95)] [(441 - 436)];
    int w2xJoZVhMae;
    int rsAMbg0dfwlh;
    int pRxGYXNVm;
    w2xJoZVhMae = (368 - 368);
    for (xXhansb = (769 - 769); (562 - 557) > xXhansb; xXhansb = xXhansb + (125 - 124))
        for (sZ7okn0 = (878 - 878); (420 - 415) > sZ7okn0; sZ7okn0 = sZ7okn0 + (476 - 475))
            scanf ("%d", &lYGJ8sgt7w[xXhansb][sZ7okn0]);
    for (xXhansb = (462 - 462); (458 - 453) > xXhansb; xXhansb = xXhansb + (139 - 138)) {
        rsAMbg0dfwlh = lYGJ8sgt7w[xXhansb][(111 - 111)];
        T6XRlBhOECVm = (141 - 141);
        for (sZ7okn0 = (74 - 73); sZ7okn0 < (236 - 231); sZ7okn0 = sZ7okn0 + (769 - 768)) {
            if (rsAMbg0dfwlh < lYGJ8sgt7w[xXhansb][sZ7okn0]) {
                rsAMbg0dfwlh = lYGJ8sgt7w[xXhansb][sZ7okn0];
                T6XRlBhOECVm = sZ7okn0;
            }
        }
        pRxGYXNVm = rsAMbg0dfwlh;
        for (sZ7okn0 = (246 - 246); sZ7okn0 < 5; sZ7okn0 = sZ7okn0 + (918 - 917)) {
            if (pRxGYXNVm > lYGJ8sgt7w[sZ7okn0][T6XRlBhOECVm]) {
                pRxGYXNVm = lYGJ8sgt7w[sZ7okn0][T6XRlBhOECVm];
                break;
            }
        }
        if (rsAMbg0dfwlh == pRxGYXNVm) {
            printf ("%d %d %d", xXhansb + (984 - 983), T6XRlBhOECVm +(917 - 916), rsAMbg0dfwlh);
            w2xJoZVhMae = 1;
        }
    }
    if (w2xJoZVhMae == (495 - 495))
        printf ("not found");
}

