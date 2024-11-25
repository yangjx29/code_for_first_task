struct   stu {
    char xGbqHcuVt6 [(370 - 345)];
    int xF5sXDO1;
    int banji;
    char ganbu [(403 - 402)];
    char iw8HiAg0Ul [(520 - 519)];
    int lunwen;
}
mUW3yLtas4 [(873 - 723)];

void  main () {
    int EaGnuj [(481 - 331)] = {(697 - 697)};
    int n;
    char xGbqHcuVt6 [(826 - 801)];
    int sum;
    int khRv0CBPzkD;
    int Kbcam5G3xQK;
    sum = (181 - 181);
    scanf ("%d", &n);
    for (Kbcam5G3xQK = (130 - 130); n > Kbcam5G3xQK; Kbcam5G3xQK++) {
        scanf ("%s%d%d%s%s%d", mUW3yLtas4[Kbcam5G3xQK].xGbqHcuVt6, &mUW3yLtas4[Kbcam5G3xQK].xF5sXDO1, &mUW3yLtas4[Kbcam5G3xQK].banji, mUW3yLtas4[Kbcam5G3xQK].ganbu, mUW3yLtas4[Kbcam5G3xQK].iw8HiAg0Ul, &mUW3yLtas4[Kbcam5G3xQK].lunwen);
    }
    for (Kbcam5G3xQK = (999 - 999); Kbcam5G3xQK < n; Kbcam5G3xQK++) {
        if ((mUW3yLtas4[Kbcam5G3xQK].xF5sXDO1 > (293 - 213)) && ((614 - 613) <= mUW3yLtas4[Kbcam5G3xQK].lunwen))
            EaGnuj[Kbcam5G3xQK] += (8649 - 649);
        if ((mUW3yLtas4[Kbcam5G3xQK].xF5sXDO1 > (254 - 169)) && (mUW3yLtas4[Kbcam5G3xQK].banji > (759 - 679)))
            EaGnuj[Kbcam5G3xQK] += (4316 - 316);
        if (mUW3yLtas4[Kbcam5G3xQK].xF5sXDO1 > (358 - 268))
            EaGnuj[Kbcam5G3xQK] += (2744 - 744);
        if ((85 < mUW3yLtas4[Kbcam5G3xQK].xF5sXDO1) && (mUW3yLtas4[Kbcam5G3xQK].iw8HiAg0Ul[(460 - 460)] == 'Y'))
            EaGnuj[Kbcam5G3xQK] += (1389 - 389);
        if ((mUW3yLtas4[Kbcam5G3xQK].banji > (92 - 12)) && (mUW3yLtas4[Kbcam5G3xQK].ganbu[(815 - 815)] == 'Y'))
            EaGnuj[Kbcam5G3xQK] += (862 - 12);
    }
    khRv0CBPzkD = (586 - 586);
    for (Kbcam5G3xQK = (612 - 612); Kbcam5G3xQK < n; Kbcam5G3xQK++) {
        if (khRv0CBPzkD < EaGnuj[Kbcam5G3xQK]) {
            khRv0CBPzkD = EaGnuj[Kbcam5G3xQK];
            strcpy (xGbqHcuVt6, mUW3yLtas4[Kbcam5G3xQK].xGbqHcuVt6);
        }
        sum += EaGnuj[Kbcam5G3xQK];
    }
    printf ("%s\n%d\n%d\n", xGbqHcuVt6, khRv0CBPzkD, sum);
}

