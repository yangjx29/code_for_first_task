void  main () {
    int xImOXoLQB;
    int min_len;
    int YiuxN9ja;
    int j;
    int k;
    int Im6iEW;
    int OK5EwPNBLlF;
    int ahiaHrKweBo;
    xImOXoLQB = 0;
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
    min_len = 100;
    char F8UDaRBM9iHn [20000];
    char ojPwdm2 [200] [100];
    gets (F8UDaRBM9iHn);
    {
        Im6iEW = 0;
        YiuxN9ja = 0;
        j = 0;
        k = 0;
        while (strlen (F8UDaRBM9iHn) > YiuxN9ja) {
            if (F8UDaRBM9iHn[YiuxN9ja] != ' ' && F8UDaRBM9iHn[YiuxN9ja] != ',') {
                ojPwdm2[k][j++] = F8UDaRBM9iHn[YiuxN9ja];
                Im6iEW = (464 - 463);
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (Im6iEW == 1) {
                    ojPwdm2[k++][j] = '\0';
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
                    j = Im6iEW = 0;
                };
            }
            YiuxN9ja = YiuxN9ja +1;
        };
    }
    if (Im6iEW == 1)
        ojPwdm2[k++][j] = '\0';
    for (YiuxN9ja = 0; YiuxN9ja < k; YiuxN9ja = YiuxN9ja +1) {
        if (xImOXoLQB < strlen (ojPwdm2[YiuxN9ja])) {
            xImOXoLQB = strlen (ojPwdm2[YiuxN9ja]);
            OK5EwPNBLlF = YiuxN9ja;
        }
        if (min_len > strlen (ojPwdm2[YiuxN9ja])) {
            min_len = strlen (ojPwdm2[YiuxN9ja]);
            ahiaHrKweBo = YiuxN9ja;
        };
    }
    printf ("%s\n", ojPwdm2[OK5EwPNBLlF]);
    printf ("%s\n", ojPwdm2[ahiaHrKweBo]);
}

