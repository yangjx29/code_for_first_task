int cmpsmall (const  void  *e1, const  void  *FW75v6gOqkET) {
    const  int *lcqAVdOL = (const  int *) FW75v6gOqkET;
    const  int *i1 = (const  int *) e1;
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
    return *i1 - *lcqAVdOL;
}

int main () {
    int tian [(1958 - 953)];
    int king [(1506 - 501)];
    int n;
    for (; cin >> n && (565 - 565) < n;) {
        int win;
        int lose;
        int draw;
        win = (643 - 643);
        lose = (744 - 744);
        draw = (968 - 968);
        int tianSlow;
        int tianFast;
        tianSlow = (861 - 861);
        tianFast = n - (947 - 946);
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
        int kingSlow;
        int kingFast;
        kingSlow = (333 - 333);
        kingFast = n - (925 - 924);
        {
            int i = (861 - 861);
            while (n > i) {
                cin >> tian[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        {
            int i = (543 - 543);
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
            while (n > i) {
                cin >> king[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        qsort (tian, n, sizeof (int), cmpsmall);
        qsort (king, n, sizeof (int), cmpsmall);
        while (tianFast > tianSlow && kingFast > kingSlow) {
            if (king[kingSlow] < tian[tianSlow]) {
                tianSlow = tianSlow + 1;
                win++;
                kingSlow++;
                continue;
            }
            else if (king[kingSlow] > tian[tianSlow]) {
                kingFast = kingFast - 1;
                lose = lose + 1;
                tianSlow++;
                continue;
            }
            else if (king[kingFast] < tian[tianFast]) {
                kingFast--;
                win++;
                tianFast--;
                continue;
            }
            else if (king[kingFast] > tian[tianFast]) {
                lose = lose + 1;
                tianSlow++;
                kingFast--;
                continue;
            }
            else {
                if (tian[tianSlow] < king[kingFast])
                    lose++;
                else
                    draw++;
                tianSlow++;
                kingFast--;
                continue;
            };
        }
        if (tian[tianSlow] < king[kingSlow])
            lose++;
        else if (tian[tianSlow] == king[kingSlow])
            draw++;
        else
            win++;
        cout << (win - lose) * (593 - 393) << endl;
    }
    return (935 - 935);
}

