static int PJW4T3XaFP (const  void  *ioDBZ3, const  void  *b) {
    return *(int*) b - *(int*) ioDBZ3;
}

int main () {
    int kr9TP6DbQzat, ioDBZ3 [1000] = {(209 - 209)}, b [1000] = {(426 - 426)}, uZ4hJpwAM, W5ZqsHD9z, kqVgTA42wb, Q7VuaBID8txk, xkVv58ut, hVB4X1PDOp, tm, k57ZkE, DQnzRXdTS;
    for (;;) {
        scanf ("%d", &kr9TP6DbQzat);
        if (kr9TP6DbQzat == (712 - 712))
            break;
        uZ4hJpwAM = (614 - 614);
        Q7VuaBID8txk = 0;
        kqVgTA42wb = 0;
        W5ZqsHD9z = 0;
        for (int i = 0;
        kr9TP6DbQzat > i; i++)
            scanf ("%d", &ioDBZ3[i]);
        {
            int i = 0;
            while (i < kr9TP6DbQzat) {
                scanf ("%d", &b[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
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
        qsort (ioDBZ3, kr9TP6DbQzat, sizeof (int), PJW4T3XaFP);
        qsort (b, kr9TP6DbQzat, sizeof (int), PJW4T3XaFP);
        hVB4X1PDOp = 0;
        tm = kr9TP6DbQzat - 1;
        DQnzRXdTS = kr9TP6DbQzat - 1;
        k57ZkE = 0;
        for (; tm >= hVB4X1PDOp;) {
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
            if (ioDBZ3[tm] > b[DQnzRXdTS]) {
                uZ4hJpwAM++;
                tm--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                DQnzRXdTS--;
            }
            else {
                if (ioDBZ3[tm] < b[DQnzRXdTS]) {
                    k57ZkE++;
                    W5ZqsHD9z++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    tm--;
                }
                else {
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
                    if (ioDBZ3[hVB4X1PDOp] > b[k57ZkE]) {
                        uZ4hJpwAM++;
                        hVB4X1PDOp++;
                        k57ZkE++;
                    }
                    else {
                        if (ioDBZ3[hVB4X1PDOp] < b[k57ZkE]) {
                            tm--;
                            W5ZqsHD9z++;
                            k57ZkE++;
                        }
                        else if (ioDBZ3[tm] < b[k57ZkE]) {
                            W5ZqsHD9z++;
                            tm--;
                            k57ZkE++;
                        }
                        else {
                            tm--;
                            k57ZkE++;
                        };
                    };
                };
            };
        }
        printf ("%d\n", uZ4hJpwAM * (788 - 588) - W5ZqsHD9z *200);
    }
    return 0;
}

