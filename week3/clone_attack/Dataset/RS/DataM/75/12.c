int main () {
    int count;
    int n;
    int w;
    int pvCNO3AV [(10534 - 534)] = {(816 - 816)};
    int P2SbENW [(10415 - 415)] = {(467 - 467)};
    int time [(1664 - 664)] = {(406 - 406)};
    count = (426 - 426);
    n = (136 - 136);
    w = (433 - 433);
    char inputx [(10851 - 851)];
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
    char inputy [10000];
    cin >> inputx >> inputy;
    {
        int i = strlen (inputx) - (836 - 835);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i >= (410 - 410)) {
            if (inputx[i] != ',') {
                pvCNO3AV[n] += (inputx[i] - (782 - 734)) * pow ((double ) (216 - 206), w);
                w = w + 1;
            }
            else {
                w = (756 - 756);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                n++;
            }
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
            i--;
        };
    }
    w = (117 - 117);
    n = (241 - 241);
    for (int i = strlen (inputy) - (491 - 490);
    i >= (698 - 698); i = i - 1) {
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
        if (inputy[i] != ',') {
            P2SbENW[n] = P2SbENW[n] + (inputy[i] - 48) * pow ((double ) 10, w);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            w++;
        }
        else {
            n++;
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
            w = (594 - 594);
        };
    }
    for (int i = (326 - 326);
    i <= n; i = i + 1) {
        int j = pvCNO3AV[i];
        while (j < P2SbENW[i]) {
            time[j]++;
            j = j + 1;
        };
    }
    {
        int i = 0;
        while (i < 1000) {
            if (time[i] > count)
                count = time[i];
            i++;
        };
    }
    cout << n + 1 << " " << count << endl;
    return 0;
}

