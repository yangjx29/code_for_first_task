int main () {
    int aW5dZbv9, WgftCDv, V6JrKn2CWXqp, YBfriW3T = 0, uC2e8wbmid;
    struct   point {
        int snBp1W2;
        int FAgcJXD;
        int lNkbPRTmVyIZ;
    }
    gO7epB0Ay5R [10];
    struct   distance {
        int Pn1gtKwPxH6, KO7pDY;
        int S3JIcsGyn, a1PwVE3O9N;
        int tH9UXNxEiLec, Gs53jE0PcZS;
        double  wgbnj51ive;
    }
    wgbnj51ive [46], NwmQa68J;
    struct   distance *q6UVZna3B, *iwmZTn;
    cin >> aW5dZbv9;
    {
        WgftCDv = 0;
        for (; WgftCDv < aW5dZbv9;) {
            cin >> gO7epB0Ay5R[WgftCDv].snBp1W2 >> gO7epB0Ay5R[WgftCDv].FAgcJXD >> gO7epB0Ay5R[WgftCDv].lNkbPRTmVyIZ;
            WgftCDv++;
        }
    }
    {
        WgftCDv = 0;
        for (; WgftCDv < aW5dZbv9 - 1;) {
            {
                V6JrKn2CWXqp = WgftCDv +1;
                for (; V6JrKn2CWXqp < aW5dZbv9;) {
                    wgbnj51ive[YBfriW3T].Pn1gtKwPxH6 = gO7epB0Ay5R[WgftCDv].snBp1W2;
                    wgbnj51ive[YBfriW3T].KO7pDY = gO7epB0Ay5R[V6JrKn2CWXqp].snBp1W2;
                    wgbnj51ive[YBfriW3T].S3JIcsGyn = gO7epB0Ay5R[WgftCDv].FAgcJXD;
                    wgbnj51ive[YBfriW3T].a1PwVE3O9N = gO7epB0Ay5R[V6JrKn2CWXqp].FAgcJXD;
                    wgbnj51ive[YBfriW3T].tH9UXNxEiLec = gO7epB0Ay5R[WgftCDv].lNkbPRTmVyIZ;
                    wgbnj51ive[YBfriW3T].Gs53jE0PcZS = gO7epB0Ay5R[V6JrKn2CWXqp].lNkbPRTmVyIZ;
                    wgbnj51ive[YBfriW3T].wgbnj51ive = sqrt (((double ) wgbnj51ive[YBfriW3T].Pn1gtKwPxH6 - (double ) wgbnj51ive[YBfriW3T].KO7pDY) * ((double ) wgbnj51ive[YBfriW3T].Pn1gtKwPxH6 - (double ) wgbnj51ive[YBfriW3T].KO7pDY) + ((double ) wgbnj51ive[YBfriW3T].S3JIcsGyn - (double ) wgbnj51ive[YBfriW3T].a1PwVE3O9N) * ((double ) wgbnj51ive[YBfriW3T].S3JIcsGyn - (double ) wgbnj51ive[YBfriW3T].a1PwVE3O9N) + ((double ) wgbnj51ive[YBfriW3T].tH9UXNxEiLec - (double ) wgbnj51ive[YBfriW3T].Gs53jE0PcZS) * ((double ) wgbnj51ive[YBfriW3T].tH9UXNxEiLec - (double ) wgbnj51ive[YBfriW3T].Gs53jE0PcZS));
                    YBfriW3T++;
                    V6JrKn2CWXqp++;
                }
            }
            WgftCDv++;
        }
    }
    uC2e8wbmid = YBfriW3T;
    q6UVZna3B = wgbnj51ive;
    iwmZTn = &NwmQa68J;
    {
        WgftCDv = 0;
        for (; WgftCDv < uC2e8wbmid - 1;) {
            {
                V6JrKn2CWXqp = uC2e8wbmid - 1;
                for (; V6JrKn2CWXqp > WgftCDv;) {
                    if ((q6UVZna3B + V6JrKn2CWXqp)->wgbnj51ive > (q6UVZna3B + V6JrKn2CWXqp -1)->wgbnj51ive) {
                        *iwmZTn = *(q6UVZna3B + V6JrKn2CWXqp);
                        *(q6UVZna3B + V6JrKn2CWXqp) = *(q6UVZna3B + V6JrKn2CWXqp -1);
                        *(q6UVZna3B + V6JrKn2CWXqp -1) = *iwmZTn;
                    }
                    V6JrKn2CWXqp--;
                }
            }
            WgftCDv++;
        }
    }
    for (YBfriW3T = 0; YBfriW3T < uC2e8wbmid; YBfriW3T++) {
        cout << "(" << wgbnj51ive[YBfriW3T].Pn1gtKwPxH6 << "," << wgbnj51ive[YBfriW3T].S3JIcsGyn << "," << wgbnj51ive[YBfriW3T].tH9UXNxEiLec << ")" << "-" << "(" << wgbnj51ive[YBfriW3T].KO7pDY << "," << wgbnj51ive[YBfriW3T].a1PwVE3O9N << "," << wgbnj51ive[YBfriW3T].Gs53jE0PcZS << ")" << "=" << fixed << setprecision (2) << wgbnj51ive[YBfriW3T].wgbnj51ive << endl;
    }
    return 0;
}

