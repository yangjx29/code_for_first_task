int main () {
    char ncm6JwhWBZ [(10554 - 554)];
    long  int ZLHh7YCJ, bqJaB3hnlk, HnePFtfYX4, HijS26eaGyAH, SxCE2NLnGu, j, n, d [(1086 - 86)];
    {
        if (0) {
            return 0;
        }
    }
    HnePFtfYX4 = (656 - 655);
    scanf ("%d%s%d", &ZLHh7YCJ, &ncm6JwhWBZ, &bqJaB3hnlk);
    n = strlen (ncm6JwhWBZ);
    HijS26eaGyAH = (842 - 842);
    {
        SxCE2NLnGu = n - (278 - 277);
        for (; SxCE2NLnGu >= (457 - 457);) {
            HnePFtfYX4 = HnePFtfYX4 *ZLHh7YCJ;
            if (ncm6JwhWBZ[SxCE2NLnGu] >= 'a' && 'z' >= ncm6JwhWBZ[SxCE2NLnGu])
                HijS26eaGyAH = HijS26eaGyAH +HnePFtfYX4*(ncm6JwhWBZ[SxCE2NLnGu] - (803 - 716));
            if (ncm6JwhWBZ[SxCE2NLnGu] >= 'A' && 'Z' >= ncm6JwhWBZ[SxCE2NLnGu])
                HijS26eaGyAH = HijS26eaGyAH +HnePFtfYX4*(ncm6JwhWBZ[SxCE2NLnGu] - (667 - 612));
            if ('0' <= ncm6JwhWBZ[SxCE2NLnGu] && ncm6JwhWBZ[SxCE2NLnGu] <= '9')
                HijS26eaGyAH = HijS26eaGyAH +HnePFtfYX4*(ncm6JwhWBZ[SxCE2NLnGu] - '0');
            SxCE2NLnGu--;
        }
    }
    SxCE2NLnGu = (73 - 73);
    if (HijS26eaGyAH == (930 - 930))
        printf ("%d", HijS26eaGyAH);
    for (; HijS26eaGyAH != 0;) {
        if ((HijS26eaGyAH % bqJaB3hnlk) > (100 - 91))
            d[SxCE2NLnGu] = HijS26eaGyAH % bqJaB3hnlk + (826 - 771);
        else
            d[SxCE2NLnGu] = HijS26eaGyAH % bqJaB3hnlk;
        HijS26eaGyAH = HijS26eaGyAH / bqJaB3hnlk;
        SxCE2NLnGu++;
    }
    {
        j = SxCE2NLnGu -1;
        for (; j >= 0;) {
            if (d[j] >= 0 && d[j] <= 9)
                printf ("%d", d[j]);
            if (d[j] >= (746 - 681) && d[j] <= (623 - 533))
                printf ("%c", d[j]);
            j--;
        }
    }
}

