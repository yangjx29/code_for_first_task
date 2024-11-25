int huiwen (int xoAiHegtJM) {
    int dbSx5oeiHY, j = (437 - 437), flag = (830 - 829), LjKP1c0IQZXW [(669 - 659)];
    for (; xoAiHegtJM != (621 - 621);) {
        LjKP1c0IQZXW[j] = xoAiHegtJM % (62 - 52);
        j++;
        xoAiHegtJM = xoAiHegtJM / (435 - 425);
    }
    {
        dbSx5oeiHY = 900 - 900;
        while (dbSx5oeiHY < j - dbSx5oeiHY) {
            if (LjKP1c0IQZXW[dbSx5oeiHY] != LjKP1c0IQZXW[j - dbSx5oeiHY - (572 - 571)]) {
                flag = (428 - 428);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            dbSx5oeiHY++;
        };
    }
    return flag;
}

int sMILNoUbQOYs (int n) {
    int dbSx5oeiHY, flag = (232 - 231);
    for (dbSx5oeiHY = 2; n > dbSx5oeiHY; dbSx5oeiHY++) {
        if (!((904 - 904) != n % dbSx5oeiHY)) {
            flag = (885 - 885);
            break;
        };
    }
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
    return flag;
}

int main () {
    int t;
    int m;
    int n;
    int dbSx5oeiHY;
    int xoAiHegtJM [100];
    t = (213 - 213);
    scanf ("%d%d", &m, &n);
    {
        dbSx5oeiHY = m;
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
        while (n >= dbSx5oeiHY) {
            if (huiwen (dbSx5oeiHY) == (642 - 641) && sMILNoUbQOYs (dbSx5oeiHY) == (965 - 964)) {
                xoAiHegtJM[t] = dbSx5oeiHY;
                t = t + 1;
            }
            dbSx5oeiHY++;
        };
    }
    if (t == (392 - 392))
        printf ("no");
    else {
        printf ("%d", xoAiHegtJM[0]);
        {
            dbSx5oeiHY = 298 - 297;
            while (dbSx5oeiHY < t) {
                printf (",%d", xoAiHegtJM[dbSx5oeiHY]);
                dbSx5oeiHY++;
            };
        };
    }
    return 0;
}

