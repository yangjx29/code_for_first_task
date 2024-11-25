int zBzGv3r [(1027 - 927)] [100];
int (*iv4kwsL) [100] = zBzGv3r;
int HN0Xsq9k;
int qreuH7vzWO1I;
int aAKHE1c3;

void  AqcYEaGmlH () {
    int bstDCl;
    int hFIfJGrkwm;
    bstDCl = (10634 - 634);
    hFIfJGrkwm = 10000;
    for (int ca4w7Ipm = (991 - 991);
    ca4w7Ipm <= qreuH7vzWO1I - (949 - 948) - aAKHE1c3; ca4w7Ipm = ca4w7Ipm + 1) {
        {
            int j;
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
            j = 0;
            while (qreuH7vzWO1I - 1 - aAKHE1c3 >= j) {
                if (*(*(iv4kwsL + ca4w7Ipm) + j) < bstDCl) {
                    bstDCl = *(*(iv4kwsL + ca4w7Ipm) + j);
                }
                j = j + 1;
            };
        }
        {
            int j = 0;
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
            while (j <= qreuH7vzWO1I - 1 - aAKHE1c3) {
                *(*(iv4kwsL + ca4w7Ipm) + j) -= bstDCl;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j = j + 1;
            };
        }
        bstDCl = 10000;
    }
    for (int j = 0;
    j <= qreuH7vzWO1I - 1 - aAKHE1c3; j = j + 1) {
        {
            int ca4w7Ipm = 0;
            while (qreuH7vzWO1I - 1 - aAKHE1c3 >= ca4w7Ipm) {
                if (hFIfJGrkwm > *(*(iv4kwsL + ca4w7Ipm) + j)) {
                    hFIfJGrkwm = *(*(iv4kwsL + ca4w7Ipm) + j);
                }
                ca4w7Ipm = ca4w7Ipm + 1;
            };
        }
        for (int ca4w7Ipm = 0;
        ca4w7Ipm <= qreuH7vzWO1I - 1 - aAKHE1c3; ca4w7Ipm = ca4w7Ipm + 1)
            *(*(iv4kwsL + ca4w7Ipm) + j) -= hFIfJGrkwm;
        hFIfJGrkwm = 10000;
    }
    HN0Xsq9k += (*(*(iv4kwsL + 1) + 1));
}

void  decline () {
    for (int ca4w7Ipm = 1;
    ca4w7Ipm <= qreuH7vzWO1I - (27 - 25); ca4w7Ipm = ca4w7Ipm + 1)
        for (int j = 0;
        j <= qreuH7vzWO1I - 1; j++)
            *(*(iv4kwsL + ca4w7Ipm) + j) = *(*(iv4kwsL + ca4w7Ipm + 1) + j);
    {
        int j = 1;
        while (j <= qreuH7vzWO1I - 2) {
            {
                int ca4w7Ipm = 0;
                while (ca4w7Ipm <= qreuH7vzWO1I - 2) {
                    *(*(iv4kwsL + ca4w7Ipm) + j) = *(*(iv4kwsL + ca4w7Ipm) + j + 1);
                    ca4w7Ipm = ca4w7Ipm + 1;
                };
            }
            j++;
        };
    };
}

int main () {
    int E1IH49BKU = 0;
    cin >> qreuH7vzWO1I;
    while (true) {
        if (E1IH49BKU == qreuH7vzWO1I)
            break;
        {
            int ca4w7Ipm = 0;
            while (ca4w7Ipm <= qreuH7vzWO1I - 1) {
                {
                    int j = 0;
                    while (j <= qreuH7vzWO1I - 1) {
                        cin >> *(*(iv4kwsL + ca4w7Ipm) + j);
                        j++;
                    };
                }
                ca4w7Ipm++;
            };
        }
        HN0Xsq9k = 0;
        aAKHE1c3 = 0;
        for (int ca4w7Ipm = 1;
        ca4w7Ipm <= qreuH7vzWO1I - 1; ca4w7Ipm++) {
            AqcYEaGmlH ();
            decline ();
            aAKHE1c3++;
        }
        cout << HN0Xsq9k << endl;
        E1IH49BKU++;
    }
    return 0;
}

