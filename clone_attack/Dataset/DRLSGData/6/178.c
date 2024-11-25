void  main () {
    int Q9Ft2QOjRH8;
    int FfX9y2kKgU;
    int cqti5VWcxYgv;
    int wkQzNqZm8;
    int uzn4qtfpAvE;
    int swyu79irV2;
    int icjTMqei [100] [100];
    scanf ("%d", &Q9Ft2QOjRH8);
    for (; 0 < Q9Ft2QOjRH8; Q9Ft2QOjRH8--) {
        scanf ("%d%d", &FfX9y2kKgU, &cqti5VWcxYgv);
        wkQzNqZm8 = 0;
        {
            uzn4qtfpAvE = 0;
            for (; FfX9y2kKgU > uzn4qtfpAvE;) {
                {
                    swyu79irV2 = 0;
                    while (cqti5VWcxYgv > swyu79irV2) {
                        scanf ("%d", &icjTMqei[uzn4qtfpAvE][swyu79irV2]);
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        swyu79irV2++;
                    }
                }
                uzn4qtfpAvE++;
            }
        }
        {
            uzn4qtfpAvE = 0;
            for (; uzn4qtfpAvE < FfX9y2kKgU;) {
                wkQzNqZm8 += (icjTMqei[uzn4qtfpAvE][0] + icjTMqei[uzn4qtfpAvE][cqti5VWcxYgv - 1]);
                uzn4qtfpAvE++;
            }
        }
        {
            uzn4qtfpAvE = 0;
            for (; uzn4qtfpAvE < cqti5VWcxYgv;) {
                wkQzNqZm8 += (icjTMqei[0][uzn4qtfpAvE] + icjTMqei[FfX9y2kKgU -1][uzn4qtfpAvE]);
                uzn4qtfpAvE++;
            }
        }
        wkQzNqZm8 -= (icjTMqei[0][0] + icjTMqei[FfX9y2kKgU -1][cqti5VWcxYgv - 1] + icjTMqei[0][cqti5VWcxYgv - 1] + icjTMqei[FfX9y2kKgU -1][0]);
        printf ("%d\n", wkQzNqZm8);
    }
}

