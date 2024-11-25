int main () {
    int sum;
    int BTWCs8;
    int ZwXTiSn;
    int jQSBioX1 [201];
    int n6SYrVhG7, ug2HvuaFj5t;
    int GSZHEl71V, m;
    int a [201];
    scanf ("%d", &GSZHEl71V);
    a[0] = 0;
    {
        n6SYrVhG7 = 0;
        while (GSZHEl71V > n6SYrVhG7) {
            sum = 0;
            scanf ("%d", &m);
            if (!(0 != m)) {
                jQSBioX1[n6SYrVhG7] = 60;
            }
            if (!(0 == m)) {
                for (ug2HvuaFj5t = 1; m >= ug2HvuaFj5t; ug2HvuaFj5t = ug2HvuaFj5t + 1) {
                    scanf ("%d", &a[ug2HvuaFj5t]);
                }
                for (ug2HvuaFj5t = 1; m >= ug2HvuaFj5t; ug2HvuaFj5t = ug2HvuaFj5t + 1) {
                    BTWCs8 = a[ug2HvuaFj5t];
                    ZwXTiSn = a[ug2HvuaFj5t - 1];
                    sum = a[ug2HvuaFj5t] + 3 * ug2HvuaFj5t - 3;
                    if (60 > sum)
                        continue;
                    else
                        break;
                }
                if (60 >= sum && 57 <= sum)
                    jQSBioX1[n6SYrVhG7] = BTWCs8;
                else if (57 > sum)
                    jQSBioX1[n6SYrVhG7] = 57 - sum + BTWCs8;
                else if (sum > 60 && sum - (BTWCs8 -ZwXTiSn) <= 63 && sum - (BTWCs8 -ZwXTiSn) >= 60)
                    jQSBioX1[n6SYrVhG7] = ZwXTiSn;
                else if (sum > 60 && (sum - (BTWCs8 -ZwXTiSn)) < 60)
                    jQSBioX1[n6SYrVhG7] = BTWCs8 -sum + 60;
            }
            n6SYrVhG7 = n6SYrVhG7 + 1;
        };
    }
    for (n6SYrVhG7 = 0; n6SYrVhG7 < GSZHEl71V; n6SYrVhG7 = n6SYrVhG7 + 1) {
        printf ("%d\n", jQSBioX1[n6SYrVhG7]);
    }
    return 0;
}

