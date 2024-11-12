int main () {
    int RedmbMCv2JPE [20000], sz2 [20000], i, AL3vDQphnY, o9r0ZjtX3bsS, oJAYjnLxOa;
    scanf ("%d", &o9r0ZjtX3bsS);
    {
        i = 0;
        while (o9r0ZjtX3bsS - 1 >= i) {
            scanf ("%d", &RedmbMCv2JPE[i]);
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
    }
    sz2[0] = RedmbMCv2JPE[0];
    AL3vDQphnY = 1;
    for (i = 1; i <= o9r0ZjtX3bsS - 1; i++) {
        oJAYjnLxOa = i - 1;
        while (oJAYjnLxOa >= 0) {
            if (RedmbMCv2JPE[i] == sz2[oJAYjnLxOa]) {
                break;
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
            if (oJAYjnLxOa == 0) {
                sz2[AL3vDQphnY] = RedmbMCv2JPE[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                AL3vDQphnY = AL3vDQphnY +1;
            }
            oJAYjnLxOa--;
        };
    }
    {
        i = 0;
        while (i <= AL3vDQphnY -1) {
            if (i == AL3vDQphnY -1) {
                printf ("%d", sz2[i]);
            }
            else {
                printf ("%d ", sz2[i]);
            }
            i = i + 1;
        };
    }
    return 0;
}

