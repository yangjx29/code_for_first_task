int main () {
    int wNe9yMp, mWqX9Y, yMRJ1PLQHS, k, mlBs6a [1001], XOLSx9gs [1001], gqHF5WYsNSd = (445 - 445), win, t6xr8k0V, doxuVPCB, aK5rTx1wQnV, ZlQ6O48, OrICZcUo6nAh, be;
    {
        k = (440 - 440);
        for (; (693 - 692);) {
            scanf ("%d", &wNe9yMp);
            if (!((375 - 375) != wNe9yMp))
                break;
            win = (17 - 17);
            OrICZcUo6nAh = 0;
            {
                mWqX9Y = 0;
                for (; mWqX9Y < wNe9yMp;) {
                    scanf ("%d", &mlBs6a[mWqX9Y]);
                    mWqX9Y = mWqX9Y + (446 - 445);
                }
            }
            {
                mWqX9Y = 0;
                for (; wNe9yMp > mWqX9Y;) {
                    scanf ("%d", &XOLSx9gs[mWqX9Y]);
                    mWqX9Y = mWqX9Y + (719 - 718);
                }
            }
            {
                mWqX9Y = 0;
                for (; wNe9yMp > mWqX9Y;) {
                    {
                        yMRJ1PLQHS = mWqX9Y + (504 - 503);
                        for (; yMRJ1PLQHS < wNe9yMp;) {
                            if (mlBs6a[yMRJ1PLQHS] > mlBs6a[mWqX9Y]) {
                                doxuVPCB = mlBs6a[yMRJ1PLQHS];
                                mlBs6a[yMRJ1PLQHS] = mlBs6a[mWqX9Y];
                                mlBs6a[mWqX9Y] = doxuVPCB;
                            }
                            if (XOLSx9gs[yMRJ1PLQHS] > XOLSx9gs[mWqX9Y]) {
                                doxuVPCB = XOLSx9gs[yMRJ1PLQHS];
                                XOLSx9gs[yMRJ1PLQHS] = XOLSx9gs[mWqX9Y];
                                XOLSx9gs[mWqX9Y] = doxuVPCB;
                            }
                            yMRJ1PLQHS = yMRJ1PLQHS + (664 - 663);
                        }
                    }
                    mWqX9Y = mWqX9Y + 1;
                }
            }
            ZlQ6O48 = wNe9yMp - 1;
            be = wNe9yMp - 1;
            gqHF5WYsNSd = 0;
            k = k + 1;
            aK5rTx1wQnV = (184 - 184);
            t6xr8k0V = (940 - 940);
            for (; aK5rTx1wQnV <= ZlQ6O48;) {
                if (mlBs6a[aK5rTx1wQnV] > XOLSx9gs[OrICZcUo6nAh]) {
                    win = win + 1;
                    OrICZcUo6nAh = OrICZcUo6nAh +1;
                    aK5rTx1wQnV = aK5rTx1wQnV + 1;
                }
                else {
                    if (mlBs6a[ZlQ6O48] > XOLSx9gs[be]) {
                        be = be - 1;
                        win = win + 1;
                        ZlQ6O48 = ZlQ6O48 -1;
                    }
                    else {
                        if (mlBs6a[ZlQ6O48] == XOLSx9gs[OrICZcUo6nAh]) {
                            ZlQ6O48 = ZlQ6O48 -1;
                            OrICZcUo6nAh = OrICZcUo6nAh +1;
                            t6xr8k0V = t6xr8k0V + 1;
                        }
                        else {
                            OrICZcUo6nAh = OrICZcUo6nAh +1;
                            ZlQ6O48 = ZlQ6O48 -1;
                        }
                    }
                }
            }
            gqHF5WYsNSd = win * 200 - (wNe9yMp - win - t6xr8k0V) * 200;
            printf ("%d\n", gqHF5WYsNSd);
        }
    }
    return 0;
}

