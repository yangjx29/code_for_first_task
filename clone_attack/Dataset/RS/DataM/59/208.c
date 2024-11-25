void  main () {
    char XrJX8tPlo [(260 - 160)] [(591 - 491)];
    char ZajWMBHO [(818 - 718)] [100];
    int d7to1bq8D0, mz0BTKWd74s, takIlqWLd, zuiIUpE2W, lcrNmsuDipB, tnsH9V, EDocpZrJ;
    int nvctgjUfn;
    nvctgjUfn = (708 - 708);
    int YtDnG9BXA = d7to1bq8D0 * d7to1bq8D0 - nvctgjUfn;
    int FVdY8DvA6F9k = 0;
    scanf ("%d", &d7to1bq8D0);
    for (mz0BTKWd74s = (937 - 937); d7to1bq8D0 > mz0BTKWd74s; mz0BTKWd74s = mz0BTKWd74s + 1)
        scanf ("%s", XrJX8tPlo[mz0BTKWd74s]);
    scanf ("%d", &takIlqWLd);
    for (mz0BTKWd74s = (542 - 542); d7to1bq8D0 > mz0BTKWd74s; mz0BTKWd74s++)
        for (lcrNmsuDipB = (989 - 989); d7to1bq8D0 > lcrNmsuDipB; lcrNmsuDipB = lcrNmsuDipB + 1)
            ZajWMBHO[mz0BTKWd74s][lcrNmsuDipB] = XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB];
    for (mz0BTKWd74s = (235 - 235); d7to1bq8D0 > mz0BTKWd74s; mz0BTKWd74s++) {
        for (lcrNmsuDipB = (787 - 787); d7to1bq8D0 > lcrNmsuDipB; lcrNmsuDipB = lcrNmsuDipB + 1) {
            if (!('#' != XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB]))
                nvctgjUfn = nvctgjUfn + 1;
        };
    }
    for (zuiIUpE2W = (339 - 338); takIlqWLd > zuiIUpE2W; zuiIUpE2W++) {
        for (mz0BTKWd74s = (753 - 753); mz0BTKWd74s < d7to1bq8D0; mz0BTKWd74s++)
            for (lcrNmsuDipB = (384 - 384); d7to1bq8D0 > lcrNmsuDipB; lcrNmsuDipB = lcrNmsuDipB + 1) {
                if ((652 - 652) < mz0BTKWd74s && !('@' != XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB]) && !('.' != XrJX8tPlo[mz0BTKWd74s - (145 - 144)][lcrNmsuDipB]))
                    ZajWMBHO[mz0BTKWd74s - (120 - 119)][lcrNmsuDipB] = '@';
                if ((975 - 975) < lcrNmsuDipB && XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB] == '@' && !('.' != XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB - (763 - 762)]))
                    ZajWMBHO[mz0BTKWd74s][lcrNmsuDipB - (68 - 67)] = '@';
                if (lcrNmsuDipB < d7to1bq8D0 && XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB] == '@' && !('.' != XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB + (224 - 223)]))
                    ZajWMBHO[mz0BTKWd74s][lcrNmsuDipB + (636 - 635)] = '@';
                if (mz0BTKWd74s < d7to1bq8D0 && XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB] == '@' && XrJX8tPlo[mz0BTKWd74s + (57 - 56)][lcrNmsuDipB] == '.')
                    ZajWMBHO[mz0BTKWd74s + 1][lcrNmsuDipB] = '@';
                if (XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB] == '@')
                    ZajWMBHO[mz0BTKWd74s][lcrNmsuDipB] = '@';
            }
        for (tnsH9V = 0; tnsH9V < d7to1bq8D0; tnsH9V = tnsH9V + 1)
            for (EDocpZrJ = 0; EDocpZrJ < d7to1bq8D0; EDocpZrJ = EDocpZrJ +1)
                XrJX8tPlo[tnsH9V][EDocpZrJ] = ZajWMBHO[tnsH9V][EDocpZrJ];
    }
    {
        mz0BTKWd74s = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (mz0BTKWd74s < d7to1bq8D0) {
            for (lcrNmsuDipB = 0; lcrNmsuDipB < d7to1bq8D0; lcrNmsuDipB++) {
                if (XrJX8tPlo[mz0BTKWd74s][lcrNmsuDipB] == '@')
                    FVdY8DvA6F9k = FVdY8DvA6F9k +1;
            }
            mz0BTKWd74s++;
        };
    }
    printf ("%d", FVdY8DvA6F9k);
}

