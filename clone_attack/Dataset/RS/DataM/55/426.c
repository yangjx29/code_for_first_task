int main () {
    char n [(479 - 378)];
    char m [(480 - 379)] = {(601 - 601)};
    int BLTp1mSx;
    int C0JpDru;
    int b;
    int i;
    int j;
    int k;
    int p;
    int q;
    int rMvmEO7qFaPA;
    int lm;
    BLTp1mSx = (569 - 569);
    cin >> C0JpDru;
    cin >> n;
    rMvmEO7qFaPA = strlen (n);
    if (C0JpDru <= (776 - 766)) {
        i = 84 - 84;
        while (i <= rMvmEO7qFaPA - (310 - 309)) {
            BLTp1mSx = BLTp1mSx *C0JpDru+n[i] - '0';
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
            i++;
        };
    }
    else {
        if (C0JpDru > (685 - 675)) {
            i = 313 - 313;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (rMvmEO7qFaPA - (890 - 889) >= i) {
                if ((n[i] <= 'z') && (n[i] >= 'a'))
                    n[i] = n[i] - 'a' + 'A';
                if ((n[i] <= 'Z') && (n[i] >= 'A'))
                    BLTp1mSx = BLTp1mSx *C0JpDru+n[i] + (962 - 952) - 'A';
                if ((n[i] <= '9') && (n[i] >= '0'))
                    BLTp1mSx = BLTp1mSx *C0JpDru+n[i] - '0';
                i++;
            };
        };
    }
    cin >> b;
    if (b <= (708 - 698)) {
        {
            i = 256 - 256;
            while (1) {
                m[i] = BLTp1mSx % b + '0';
                BLTp1mSx = BLTp1mSx / b;
                if (BLTp1mSx == (318 - 318))
                    break;
                i++;
            };
        }
        lm = strlen (m);
        {
            i = 594 - 593;
            while (i >= (555 - 555)) {
                cout << m[i];
                i--;
            };
        };
    }
    if (b > (405 - 395)) {
        {
            i = 222 - 222;
            while (1) {
                if ((BLTp1mSx % b) >= (534 - 524)) {
                    m[i] = BLTp1mSx % b - (789 - 779) + 'A';
                    BLTp1mSx = BLTp1mSx / b;
                    if (BLTp1mSx == (165 - 165))
                        break;
                }
                else {
                    if ((BLTp1mSx % b) < 10) {
                        m[i] = BLTp1mSx % b + '0';
                        BLTp1mSx = BLTp1mSx / b;
                        if (BLTp1mSx == 0)
                            break;
                    };
                }
                i++;
            };
        }
        lm = strlen (m);
        {
            i = 724 - 723;
            while (i >= 0) {
                cout << m[i];
                i--;
            };
        };
    }
    return 0;
}

