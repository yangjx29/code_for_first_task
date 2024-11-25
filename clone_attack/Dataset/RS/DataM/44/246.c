int reverse (int vDnX5M3CQuIr);

int main () {
    int p;
    int B5dGDE0H;
    int k;
    {
        k = 1;
        while (k < 7) {
            scanf ("%d", &B5dGDE0H);
            p = reverse (B5dGDE0H);
            printf ("%d\n", p);
            k = k + 1;
        };
    }
    return 0;
}

int reverse (int vDnX5M3CQuIr) {
    int i;
    int s;
    int JAy9Ua;
    int sz [20];
    int a;
    JAy9Ua = 0;
    a = 1;
    if (vDnX5M3CQuIr < 0) {
        a = -1;
        vDnX5M3CQuIr = -vDnX5M3CQuIr;
    }
    if (vDnX5M3CQuIr == 0) {
        s = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
        {
            i = 1;
            while (1) {
                if (vDnX5M3CQuIr % 10 == 0) {
                    vDnX5M3CQuIr = vDnX5M3CQuIr / (10);
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
                else {
                    break;
                }
                i++;
            };
        }
        for (i = 0;; i++) {
            sz[i] = vDnX5M3CQuIr % 10;
            vDnX5M3CQuIr = vDnX5M3CQuIr / 10;
            if (vDnX5M3CQuIr == 0) {
                break;
            }
            JAy9Ua = JAy9Ua +1;
        }
        s = sz[0];
        {
            i = 1;
            while (i < JAy9Ua) {
                s = 10 * s;
                s = s + sz[i];
                i++;
            };
        }
        s = a * s;
    }
    return s;
}

