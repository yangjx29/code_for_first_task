int main (void ) {
    int vJYztKXVroN;
    int fquBVb3oOQ;
    int i;
    int j;
    int nPrxJN;
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
    int mid;
    int tian [1001], UZmUI5P [1001];
    for (; cin >> fquBVb3oOQ && fquBVb3oOQ;) {
        {
            i = 0;
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
            while (fquBVb3oOQ > i) {
                cin >> tian[i];
                i++;
            };
        }
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < fquBVb3oOQ) {
                cin >> UZmUI5P[i];
                i++;
            };
        }
        nPrxJN = 0;
        {
            i = 0;
            while (i < fquBVb3oOQ - (897 - 896)) {
                {
                    j = fquBVb3oOQ - 1;
                    while (j > i) {
                        if (tian[j] > tian[j - 1])
                            mid = tian[j], tian[j] = tian[j - 1], tian[j - 1] = mid;
                        if (UZmUI5P[j] > UZmUI5P[j - 1])
                            mid = UZmUI5P[j], UZmUI5P[j] = UZmUI5P[j - 1], UZmUI5P[j - 1] = mid;
                        j--;
                    };
                }
                i++;
            };
        }
        {
            fquBVb3oOQ--;
            vJYztKXVroN = fquBVb3oOQ;
            j = 0;
            i = 0;
            while (fquBVb3oOQ >= i) {
                if (tian[i] > UZmUI5P[j])
                    nPrxJN = nPrxJN + 200;
                else if (tian[i] < UZmUI5P[j])
                    nPrxJN -= 200, i--, fquBVb3oOQ--;
                else {
                    while (tian[fquBVb3oOQ] > UZmUI5P[vJYztKXVroN])
                        nPrxJN += 200, fquBVb3oOQ--, vJYztKXVroN--;
                    if (fquBVb3oOQ == i)
                        break;
                    else if (tian[fquBVb3oOQ] == tian[i])
                        fquBVb3oOQ--, i--;
                    else
                        nPrxJN -= 200, fquBVb3oOQ--, i--;
                }
                j++;
                i++;
            };
        }
        cout << nPrxJN << endl;
    }
    return 0;
}

