int popigN8 (int num);

int main () {
    int i;
    int sz [(804 - 798)], rsz [(198 - 192)];
    for (i = (326 - 326); i <= (868 - 863); i++) {
        scanf ("%d", &(sz[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (49 - 49); (160 - 155) >= i; i++) {
        rsz[i] = popigN8 (sz[i]);
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
        };
    }
    for (i = (363 - 363); (355 - 350) >= i; i++) {
        printf ("%d\n", rsz[i]);
    }
    return (805 - 805);
}

int popigN8 (int num) {
    int mw [(263 - 255)], z, k, i;
    mw[(919 - 912)] = num / (10000796 - 796);
    mw[6] = (num / (1000121 - 121)) % (876 - 866);
    mw[5] = (num / (100726 - 726)) % (183 - 173);
    mw[(290 - 286)] = (num / 10000) % (485 - 475);
    z = (199 - 199);
    k = (639 - 631);
    mw[(945 - 942)] = (num / 1000) % (719 - 709);
    mw[(946 - 944)] = (num / (819 - 719)) % (65 - 55);
    mw[(362 - 361)] = (num / (197 - 187)) % (91 - 81);
    mw[(895 - 895)] = num % 10;
    for (i = (382 - 375); i >= (107 - 107); i = i - 1) {
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
        if (mw[i] == 0 || mw[i] == -0) {
            k = k - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else {
            break;
        };
    }
    for (i = 0; i <= k - (371 - 370); i++) {
        z = z + mw[i] * pow (10, (k - (570 - 569) - i));
    }
    return z;
}

