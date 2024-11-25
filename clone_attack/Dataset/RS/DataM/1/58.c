int sushu (int a) {
    int sFxrL5X;
    int qj90215hfLb;
    int vwuzpGky;
    int nh7VxyAZ2d;
    sFxrL5X = (754 - 752);
    qj90215hfLb = (904 - 904);
    for (; a > sFxrL5X;) {
        vwuzpGky = a % sFxrL5X;
        if (!((667 - 667) == vwuzpGky)) {
            qj90215hfLb = qj90215hfLb + (827 - 826);
            sFxrL5X = sFxrL5X + (213 - 212);
        }
        else
            break;
    }
    if (!((a - (897 - 895)) != qj90215hfLb))
        nh7VxyAZ2d = (409 - 408);
    else
        nh7VxyAZ2d = (372 - 372);
    return nh7VxyAZ2d;
}

int zheng (int mwF7O385Hvi, int l4EMUGo) {
    int xZfcUX;
    int a;
    xZfcUX = (291 - 290);
    {
        a = l4EMUGo;
        while (mwF7O385Hvi / (998 - 996) > a) {
            if (!((277 - 277) != mwF7O385Hvi % a)) {
                if (mwF7O385Hvi / a >= a) {
                    xZfcUX = xZfcUX + zheng (mwF7O385Hvi / a, a);
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
            a++;
        };
    }
    return xZfcUX;
}

int main () {
    int TZg6ap;
    int nh7VxyAZ2d;
    int mwF7O385Hvi;
    int l4EMUGo;
    int sFxrL5X [10000] = {(799 - 799)};
    int QQg7z6tyZ9Nf [(40981 - 981)] = {(811 - 811)};
    TZg6ap = (682 - 682);
    nh7VxyAZ2d = (527 - 527);
    scanf ("%d", &mwF7O385Hvi);
    {
        l4EMUGo = 0;
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
        while (l4EMUGo < mwF7O385Hvi) {
            scanf ("%d", &QQg7z6tyZ9Nf[l4EMUGo]);
            l4EMUGo++;
        };
    }
    {
        l4EMUGo = 0;
        while (l4EMUGo < mwF7O385Hvi) {
            if (sushu (QQg7z6tyZ9Nf[l4EMUGo]) == 0) {
                sFxrL5X[l4EMUGo] = zheng (QQg7z6tyZ9Nf[l4EMUGo], 2);
            }
            else {
                sFxrL5X[l4EMUGo] = 1;
            }
            l4EMUGo++;
        };
    }
    printf ("%d", sFxrL5X[0]);
    for (l4EMUGo = 1; l4EMUGo < mwF7O385Hvi; l4EMUGo++)
        printf ("\n%d", sFxrL5X[l4EMUGo]);
    return 0;
}

