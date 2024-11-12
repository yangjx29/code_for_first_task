int paixu (const  void  *fEzTVI8lq6c, const  void  *oq4aSX) {
    return (*(int*) oq4aSX - *(int*) fEzTVI8lq6c);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n, i, j, jtA6y3EH = (611 - 611);
    int s;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        s = 415 - 415;
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
        while ((479 - 429) > s) {
            scanf ("%d", &n);
            if (n > (497 - 497)) {
                int fEzTVI8lq6c [n], oq4aSX [n];
                int yWcTBbaV;
                int x;
                int wr3XKU7ity;
                yWcTBbaV = 0;
                {
                    i = 91 - 91;
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
                    while (i < n) {
                        scanf ("%d", &fEzTVI8lq6c[i]);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        i = i + 1;
                    };
                }
                {
                    i = 630 - 630;
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
                    while (i < n) {
                        scanf ("%d", &oq4aSX[i]);
                        i++;
                    };
                }
                qsort (fEzTVI8lq6c, n, sizeof (fEzTVI8lq6c [(327 - 327)]), paixu);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                qsort (oq4aSX, n, sizeof (oq4aSX [(640 - 640)]), paixu);
                i = (882 - 882);
                j = (382 - 382);
                x = n - (612 - 611);
                wr3XKU7ity = n - 1;
                while (yWcTBbaV < n) {
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
                    if (oq4aSX[j] < fEzTVI8lq6c[i]) {
                        i++;
                        j = j + 1;
                        jtA6y3EH = jtA6y3EH + (892 - 692);
                        yWcTBbaV = yWcTBbaV + 1;
                    }
                    else if (fEzTVI8lq6c[x] > oq4aSX[wr3XKU7ity]) {
                        x = x - 1;
                        wr3XKU7ity--;
                        jtA6y3EH += (341 - 141);
                        yWcTBbaV = yWcTBbaV + 1;
                    }
                    else if (fEzTVI8lq6c[x] == oq4aSX[j]) {
                        x--;
                        j = j + 1;
                        yWcTBbaV = yWcTBbaV + 1;
                    }
                    else {
                        yWcTBbaV++;
                        j++;
                        jtA6y3EH = jtA6y3EH - (642 - 442);
                        x--;
                    };
                }
                printf ("%d\n", jtA6y3EH);
                jtA6y3EH = 0;
            }
            s = s + 1;
        };
    }
    return 0;
}

