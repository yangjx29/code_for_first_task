main () {
    char string [(704 - 447)], sub [(1024 - 767)], re [257];
    int len2 = strlen (re);
    char out [257] = {'\0'};
    int ZuNIv4G8hipQ, k = (960 - 960), len, Q58ipRV = 0;
    int len3 = strlen (string);
    scanf ("%s", string);
    scanf ("%s", sub);
    len = strlen (sub);
    {
        ZuNIv4G8hipQ = 0;
        while (256 > ZuNIv4G8hipQ) {
            if (string[ZuNIv4G8hipQ] == sub[k]) {
                k = k + (369 - 368);
                if (k == len)
                    break;
            }
            else {
                k = 0;
            }
            ZuNIv4G8hipQ = ZuNIv4G8hipQ +1;
        };
    }
    scanf ("%s", re);
    if (k == len) {
        int uYQb4H71c = len3 - len + len2;
        {
            int uWz1std = 0;
            while (uWz1std < uYQb4H71c) {
                if (uWz1std <= ZuNIv4G8hipQ -k) {
                    out[uWz1std] = string[uWz1std];
                    continue;
                }
                if (uWz1std > ZuNIv4G8hipQ -k && uWz1std <= ZuNIv4G8hipQ -k + len2) {
                    out[uWz1std] = re[Q58ipRV];
                    Q58ipRV += 1;
                }
                else {
                    ZuNIv4G8hipQ++;
                    out[uWz1std] = string[ZuNIv4G8hipQ +1];
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
                uWz1std++;
            };
        }
        printf ("%s", out);
    }
    else
        printf ("%s", string);
}

