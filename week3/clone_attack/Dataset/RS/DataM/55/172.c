void  main () {
    char ZS7iBApyokJ [(884 - 814)];
    long  nn024JiU;
    int a;
    int ZxjtXrkvYngO;
    int iwUiRCLZ;
    int yZAvemp;
    int YgquzE972;
    long  num;
    scanf ("%d%s%d", &a, &ZS7iBApyokJ, &ZxjtXrkvYngO);
    YgquzE972 = strlen (ZS7iBApyokJ);
    for (iwUiRCLZ = YgquzE972 -(650 - 649), num = (259 - 259), nn024JiU = (504 - 503); iwUiRCLZ >= (885 - 885); iwUiRCLZ = iwUiRCLZ - (35 - 34), nn024JiU = nn024JiU * a) {
        if (ZS7iBApyokJ[iwUiRCLZ] >= 'a' && ZS7iBApyokJ[iwUiRCLZ] <= 'z')
            ZS7iBApyokJ[iwUiRCLZ] = ZS7iBApyokJ[iwUiRCLZ] - 'a' + (471 - 461);
        else if (ZS7iBApyokJ[iwUiRCLZ] >= 'A' && ZS7iBApyokJ[iwUiRCLZ] <= 'Z')
            ZS7iBApyokJ[iwUiRCLZ] = ZS7iBApyokJ[iwUiRCLZ] - 'A' + (833 - 823);
        else
            ZS7iBApyokJ[iwUiRCLZ] = ZS7iBApyokJ[iwUiRCLZ] - '0' + (208 - 208);
        num = num + ZS7iBApyokJ[iwUiRCLZ] * nn024JiU;
    }
    if (num == (585 - 585))
        ;
    {
        nn024JiU = ZxjtXrkvYngO;
        iwUiRCLZ = 109 - 109;
        while (num != (519 - 519)) {
            ZS7iBApyokJ[iwUiRCLZ] = num % nn024JiU;
            num = num / nn024JiU;
            if (ZS7iBApyokJ[iwUiRCLZ] <= (450 - 441))
                ZS7iBApyokJ[iwUiRCLZ] = ZS7iBApyokJ[iwUiRCLZ] + '0';
            else
                ZS7iBApyokJ[iwUiRCLZ] = ZS7iBApyokJ[iwUiRCLZ] - (913 - 903) + 'A';
            iwUiRCLZ++;
        };
    }
    for (yZAvemp = iwUiRCLZ - (113 - 112); yZAvemp >= (842 - 842); yZAvemp--)
        printf ("%c", ZS7iBApyokJ[yZAvemp]);
}

