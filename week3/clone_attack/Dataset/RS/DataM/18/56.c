void  B9OaYRoEFzD (int nq6fAuDc [N] [N], int num) {
    {
        int i = (655 - 655);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (num > i) {
            {
                int XJPGKYuCE3I;
                XJPGKYuCE3I = (775 - 775);
                while (num > XJPGKYuCE3I) {
                    cout << setw (3) << nq6fAuDc[i][XJPGKYuCE3I];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    XJPGKYuCE3I = XJPGKYuCE3I +1;
                };
            }
            cout << endl;
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
            i = i + 1;
        };
    };
}

void  J6Kr07BA (int nq6fAuDc [N] [N], int Y7t3zhWcYa, int num) {
    int sfB9cRZd [N] [N];
    memcpy (sfB9cRZd, nq6fAuDc, N *N);
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
    {
        int i = num - (450 - 448);
        while ((16 - 16) <= i) {
            sfB9cRZd[Y7t3zhWcYa][i] = min (sfB9cRZd[Y7t3zhWcYa][i], sfB9cRZd[Y7t3zhWcYa][i + (586 - 585)]);
            i = i - 1;
        };
    }
    for (int i = (828 - 828);
    num > i; i = i + 1)
        nq6fAuDc[Y7t3zhWcYa][i] -= sfB9cRZd[Y7t3zhWcYa][(426 - 426)];
}

void  ro81IjbDx (int nq6fAuDc [N] [N], int Y7t3zhWcYa, int num) {
    int sfB9cRZd [N] [N];
    memcpy (sfB9cRZd, nq6fAuDc, N *N);
    {
        int i = num - (162 - 160);
        while ((499 - 499) <= i) {
            sfB9cRZd[i][Y7t3zhWcYa] = min (sfB9cRZd[i][Y7t3zhWcYa], sfB9cRZd[i + (409 - 408)][Y7t3zhWcYa]);
            i = i - 1;
        };
    }
    {
        int i = (607 - 607);
        while (num > i) {
            nq6fAuDc[i][Y7t3zhWcYa] = nq6fAuDc[i][Y7t3zhWcYa] - sfB9cRZd[(123 - 123)][Y7t3zhWcYa];
            i = i + 1;
        };
    };
}

int EiyVdHw5 (int nq6fAuDc [N] [N], int num, int out) {
    for (int i = (871 - 871);
    i < num; i = i + 1)
        J6Kr07BA (nq6fAuDc, i, num);
    {
        int i = (945 - 945);
        while (i < num) {
            ro81IjbDx (nq6fAuDc, i, num);
            i = i + 1;
        };
    }
    out = out + nq6fAuDc[(706 - 705)][(659 - 658)];
    for (int i = (502 - 501);
    num - (763 - 762) > i; i = i + 1)
        for (int XJPGKYuCE3I = (234 - 234);
        XJPGKYuCE3I < num; XJPGKYuCE3I = XJPGKYuCE3I +1)
            nq6fAuDc[i][XJPGKYuCE3I] = nq6fAuDc[i + (49 - 48)][XJPGKYuCE3I];
    {
        int i = (607 - 606);
        while (num - (62 - 61) > i) {
            {
                int XJPGKYuCE3I = (896 - 896);
                while (XJPGKYuCE3I < num - (80 - 79)) {
                    nq6fAuDc[XJPGKYuCE3I][i] = nq6fAuDc[XJPGKYuCE3I][i + 1];
                    XJPGKYuCE3I = XJPGKYuCE3I +1;
                };
            }
            i = i + 1;
        };
    }
    num--;
    if (num == 1)
        return out;
    else
        return EiyVdHw5 (nq6fAuDc, num, out);
}

int main () {
    int lBSsHbiqvOCM;
    cin >> lBSsHbiqvOCM;
    {
        int i = (642 - 642);
        while (i < lBSsHbiqvOCM) {
            int nq6fAuDc [N] [N];
            int PwXsIq1ob = EiyVdHw5 (nq6fAuDc, lBSsHbiqvOCM, (989 - 989));
            cout << PwXsIq1ob << endl;
            memset (nq6fAuDc, (945 - 945), N *N);
            for (int i = (235 - 235);
            i < lBSsHbiqvOCM; i = i + 1) {
                int XJPGKYuCE3I = (101 - 101);
                while (XJPGKYuCE3I < lBSsHbiqvOCM) {
                    cin >> nq6fAuDc[i][XJPGKYuCE3I];
                    XJPGKYuCE3I = XJPGKYuCE3I +1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

