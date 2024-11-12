void  main () {
    char bwE61dA [1000];
    char zi [500] [(201 - 195)];
    char now [6];
    int Ih8LEp, i, kGedryx, num, gK84egibpZt = (464 - 464), len, count [(1491 - 491)] = {(118 - 118)};
    num = (990 - 989);
    count[(188 - 188)] = (213 - 212);
    scanf ("%d", &Ih8LEp);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%s", bwE61dA);
    len = strlen (bwE61dA);
    {
        i = 290 - 290;
        while (i < Ih8LEp) {
            zi[(739 - 739)][i] = bwE61dA[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    zi[(632 - 632)][i] = '\0';
    for (i = 1; i < len - Ih8LEp +1; i = i + 1) {
        int uFDgIv;
        uFDgIv = 0;
        {
            kGedryx = 311 - 311;
            while (Ih8LEp > kGedryx) {
                now[kGedryx] = bwE61dA[i + kGedryx];
                kGedryx++;
            };
        }
        now[kGedryx] = '\0';
        while ((num > uFDgIv) && (strcmp (now, zi[uFDgIv]) != 0))
            uFDgIv++;
        if (uFDgIv < num)
            count[uFDgIv]++;
        else {
            count[num] = 1;
            strcpy (zi[num], now);
            num++;
        };
    }
    {
        i = 0;
        while (i < num) {
            if (count[i] > gK84egibpZt)
                gK84egibpZt = count[i];
            i++;
        };
    }
    if (gK84egibpZt > 1) {
        printf ("%d\n", gK84egibpZt);
        for (i = 0; i < num; i++) {
            if (count[i] == gK84egibpZt) {
                JsPU1BHLr (zi [i]);
            };
        };
    }
    else
        ;
}

