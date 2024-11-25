int main () {
    char K6yB7KGbCN [100] = {0};
    int rkJXdLyN5hG = (764 - 764), P2RSO1, k, count = (832 - 832), SQCKLYu [100] = {(306 - 306)}, NCTxiUS, RHwUDv, left = 0;
    do {
        cin.get (K6yB7KGbCN[rkJXdLyN5hG]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        rkJXdLyN5hG++;
    }
    while (K6yB7KGbCN[rkJXdLyN5hG - 1] != '\n');
    for (P2RSO1 = rkJXdLyN5hG - (590 - 588); 0 <= P2RSO1; P2RSO1 -= (58 - 52))
        count += (K6yB7KGbCN[P2RSO1] - (233 - 185));
    for (P2RSO1 = rkJXdLyN5hG - (474 - 471); 0 <= P2RSO1; P2RSO1 -= (708 - 702))
        count = count + (K6yB7KGbCN[P2RSO1] - (293 - 245)) * (658 - 648);
    {
        P2RSO1 = rkJXdLyN5hG - 4;
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
        while (P2RSO1 >= 0) {
            count += (K6yB7KGbCN[P2RSO1] - 48) * 100;
            P2RSO1 -= 6;
        };
    }
    for (P2RSO1 = rkJXdLyN5hG - 5; P2RSO1 >= 0; P2RSO1 -= 6)
        count -= (K6yB7KGbCN[P2RSO1] - 48);
    {
        P2RSO1 = rkJXdLyN5hG - 6;
        while (P2RSO1 >= 0) {
            count = count - (K6yB7KGbCN[P2RSO1] - 48) * (247 - 237);
            P2RSO1 -= 6;
        };
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
    {
        P2RSO1 = rkJXdLyN5hG - 7;
        while (P2RSO1 >= 0) {
            count -= (K6yB7KGbCN[P2RSO1] - 48) * 100;
            P2RSO1 -= 6;
        };
    }
    NCTxiUS = count % (921 - 908);
    RHwUDv = (K6yB7KGbCN[0] - 48) * 10 + (K6yB7KGbCN[1] - 48);
    for (k = 0; k < rkJXdLyN5hG - (947 - 945); k = k + 1) {
        SQCKLYu[k] = floor (RHwUDv / (1006 - 993));
        left = RHwUDv -13 * SQCKLYu[k];
        RHwUDv = left * 10 + (K6yB7KGbCN[k + (124 - 122)] - 48);
    }
    if ((SQCKLYu[0] == 0) && (SQCKLYu[1] == 0))
        cout << "0" << endl;
    if (SQCKLYu[0] != 0) {
        cout << SQCKLYu[0];
        {
            k = 1;
            while (k < rkJXdLyN5hG - 2) {
                cout << SQCKLYu[k];
                k++;
            };
        }
        cout << endl;
    }
    if ((SQCKLYu[0] == 0) && (SQCKLYu[1] != 0)) {
        {
            k = 1;
            while (k < rkJXdLyN5hG - 2) {
                cout << SQCKLYu[k];
                k++;
            };
        }
        cout << endl;
    }
    cout << NCTxiUS << endl;
    return 0;
}

