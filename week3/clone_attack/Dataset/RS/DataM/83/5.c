float c8QwvGY (int HqnjIhgf) {
    float PAvG1rcX7tf = 0;
    int az9majxUlV1R;
    float yxH0orNIKC;
    float Z7lbyDdJoqRB [(178 - 168)];
    float ZOGAiqH [(763 - 753)];
    float xsteTXr = 0;
    int XMtZyOSmF1Ll [10], NfS6tH2j [10];
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
    for (az9majxUlV1R = 0; HqnjIhgf > az9majxUlV1R; az9majxUlV1R++)
        scanf ("%d", &NfS6tH2j[az9majxUlV1R]);
    for (az9majxUlV1R = 0; HqnjIhgf > az9majxUlV1R; az9majxUlV1R++)
        scanf ("%d", &XMtZyOSmF1Ll[az9majxUlV1R]);
    for (az9majxUlV1R = 0; HqnjIhgf > az9majxUlV1R; az9majxUlV1R++) {
        if (XMtZyOSmF1Ll[az9majxUlV1R] >= 90 && 100 >= XMtZyOSmF1Ll[az9majxUlV1R])
            Z7lbyDdJoqRB[az9majxUlV1R] = 4.0;
        else if (XMtZyOSmF1Ll[az9majxUlV1R] >= 85 && 89 >= XMtZyOSmF1Ll[az9majxUlV1R])
            Z7lbyDdJoqRB[az9majxUlV1R] = 3.7;
        else if (XMtZyOSmF1Ll[az9majxUlV1R] >= 82 && 84 >= XMtZyOSmF1Ll[az9majxUlV1R])
            Z7lbyDdJoqRB[az9majxUlV1R] = 3.3;
        else if (XMtZyOSmF1Ll[az9majxUlV1R] >= 78 && 81 >= XMtZyOSmF1Ll[az9majxUlV1R])
            Z7lbyDdJoqRB[az9majxUlV1R] = 3.0;
        else if (XMtZyOSmF1Ll[az9majxUlV1R] >= 75 && XMtZyOSmF1Ll[az9majxUlV1R] <= 77)
            Z7lbyDdJoqRB[az9majxUlV1R] = 2.7;
        else if ((312 - 240) <= XMtZyOSmF1Ll[az9majxUlV1R] && XMtZyOSmF1Ll[az9majxUlV1R] <= 74)
            Z7lbyDdJoqRB[az9majxUlV1R] = 2.3;
        else if ((194 - 126) <= XMtZyOSmF1Ll[az9majxUlV1R] && XMtZyOSmF1Ll[az9majxUlV1R] <= 71)
            Z7lbyDdJoqRB[az9majxUlV1R] = 2.0;
        else if (64 <= XMtZyOSmF1Ll[az9majxUlV1R] && XMtZyOSmF1Ll[az9majxUlV1R] <= 67)
            Z7lbyDdJoqRB[az9majxUlV1R] = 1.5;
        else if (60 <= XMtZyOSmF1Ll[az9majxUlV1R] && XMtZyOSmF1Ll[az9majxUlV1R] <= 63)
            Z7lbyDdJoqRB[az9majxUlV1R] = 1.0;
        else
            Z7lbyDdJoqRB[az9majxUlV1R] = 0;
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
    {
        az9majxUlV1R = 0;
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
        while (az9majxUlV1R < HqnjIhgf) {
            ZOGAiqH[az9majxUlV1R] = Z7lbyDdJoqRB[az9majxUlV1R] * NfS6tH2j[az9majxUlV1R];
            xsteTXr = xsteTXr + ZOGAiqH[az9majxUlV1R];
            PAvG1rcX7tf = PAvG1rcX7tf +NfS6tH2j[az9majxUlV1R];
            az9majxUlV1R++;
        };
    }
    yxH0orNIKC = xsteTXr / PAvG1rcX7tf;
    return yxH0orNIKC;
}

void  main () {
    int HqnjIhgf;
    float Z7lbyDdJoqRB;
    scanf ("%d", &HqnjIhgf);
    Z7lbyDdJoqRB = c8QwvGY (HqnjIhgf);
    printf ("%.2f", Z7lbyDdJoqRB);
}

