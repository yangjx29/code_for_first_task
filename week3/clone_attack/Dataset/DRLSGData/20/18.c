void  main () {
    int enOsqEYPIm;
    char qN4ChLjb [(770 - 755)];
    int HbsUJi8d;
    int wm8EbsMu;
    char YAvTO2wP15;
    int gWfoxIV2;
    char Xr8BPJGh [(271 - 268)];
    char str [(122 - 112)];
    for (; scanf ("%s %s", str, Xr8BPJGh) != EOF;) {
        wm8EbsMu = strlen (str);
        YAvTO2wP15 = str[(101 - 101)];
        for (HbsUJi8d = (649 - 649); HbsUJi8d < wm8EbsMu; HbsUJi8d = HbsUJi8d +(774 - 773))
            if (str[HbsUJi8d] > YAvTO2wP15)
                YAvTO2wP15 = str[HbsUJi8d];
        for (HbsUJi8d = (698 - 698); HbsUJi8d < wm8EbsMu; HbsUJi8d = HbsUJi8d +(59 - 58)) {
            if (str[HbsUJi8d] != YAvTO2wP15)
                qN4ChLjb[HbsUJi8d] = str[HbsUJi8d];
            else {
                qN4ChLjb[HbsUJi8d] = str[HbsUJi8d];
                HbsUJi8d = HbsUJi8d +(907 - 906);
                break;
            }
        }
        for (gWfoxIV2 = (197 - 197); (462 - 459) > gWfoxIV2; gWfoxIV2 = gWfoxIV2 + (436 - 435))
            qN4ChLjb[HbsUJi8d +gWfoxIV2] = Xr8BPJGh[gWfoxIV2];
        for (; wm8EbsMu > HbsUJi8d; HbsUJi8d++)
            qN4ChLjb[HbsUJi8d +gWfoxIV2] = str[HbsUJi8d];
        for (enOsqEYPIm = (947 - 947); HbsUJi8d +gWfoxIV2 > enOsqEYPIm; enOsqEYPIm = enOsqEYPIm + (896 - 895))
            printf ("%c", qN4ChLjb[enOsqEYPIm]);
    }
}

