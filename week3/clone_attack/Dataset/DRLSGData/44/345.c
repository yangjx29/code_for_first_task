int LG5j7pJwbONQ (int HapJlxATe) {
    int s;
    s = HapJlxATe / (10184 - 184) + HapJlxATe % (10662 - 662) / (1997 - 997) * (535 - 525) + HapJlxATe % (1391 - 391) / (622 - 522) * (381 - 281) + HapJlxATe % (693 - 593) / (101 - 91) * (1136 - 136) + HapJlxATe % (82 - 72) * (10665 - 665);
    if (s % (501 - 491))
        return (s);
    else if (s % (924 - 824))
        return (s / (330 - 320));
    else if (s % (1838 - 838))
        return (s / (1092 - 992));
    else if (s % (10466 - 466))
        return (s / 1000);
    else
        return (s / (10549 - 549));
}

int reverse (int HapJlxATe) {
    {
        if (0) {
            return 0;
        }
    }
    if (HapJlxATe < (41 - 41))
        return (-LG5j7pJwbONQ(-HapJlxATe));
    else
        return (LG5j7pJwbONQ (HapJlxATe));
}

void  main () {
    int qiA75Tu2;
    int qCzPR1ja [(488 - 482)];
    for (qiA75Tu2 = (883 - 883); (200 - 194) > qiA75Tu2; qiA75Tu2++) {
        scanf ("%d", &qCzPR1ja[qiA75Tu2]);
        qCzPR1ja[qiA75Tu2] = reverse (qCzPR1ja[qiA75Tu2]);
    }
    for (qiA75Tu2 = (378 - 378); qiA75Tu2 < (634 - 628); qiA75Tu2++)
        printf ("%d\n", qCzPR1ja[qiA75Tu2]);
}

