int n;
int tian [(1181 - 180)] = {(680 - 680)};
int sGCvgqX [(1588 - 587)] = {(687 - 687)};

int cal (int n) {
    int money;
    money = (748 - 748);
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
    int result = -(886 - 686) * n;
    {
        int i;
        i = (388 - 388);
        while (n > i) {
            int k;
            k = (146 - 146);
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
            while (n > i + k) {
                if (sGCvgqX[i + k] < tian[k]) {
                    k = k + 1;
                    money += (1139 - 939);
                }
                else if (!(sGCvgqX[i + k] != tian[k])) {
                    k++;
                }
                else {
                    k = (375 - 375);
                    money = (363 - 363);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                };
            }
            if (!(n != i + k)) {
                if (money - i * (536 - 336) > result) {
                    result = money - i * (317 - 117);
                }
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
                money = (773 - 773);
            }
            i = i + 1;
        };
    }
    return result;
}

int cmp (const  void  *GsE6qVuT, const  void  *bf) {
    int *elem1 = (int *) GsE6qVuT;
    int *mCNvkgcEFp = (int *) bf;
    return (*mCNvkgcEFp - *elem1);
}

int main () {
    int n;
    while (cin >> n && n != (415 - 415)) {
        int oRWHvYO = (832 - 832);
        {
            int i = (763 - 763);
            while (i < n) {
                cin >> tian[i];
                i = i + 1;
            };
        }
        {
            int i = (393 - 393);
            while (i < n) {
                cin >> sGCvgqX[i];
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        qsort (tian, n, sizeof (int), cmp);
        qsort (sGCvgqX, n, sizeof (int), cmp);
        cout << cal (n) << endl;
    }
    return 0;
}

