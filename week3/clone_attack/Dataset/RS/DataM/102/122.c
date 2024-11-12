int main () {
    int n, j, vFSg7Q5d, i1 = (235 - 235), i2 = (106 - 106), dlmWp1e, t2;
    struct   sUReN6Pd {
        char vLg0Tt2D [10];
        double  h;
    }
    sUReN6Pd [N], ESHgcWCA, male [N], zUmHZ1SJ4M7i [N];
    scanf ("%d", &n);
    for (vFSg7Q5d = (100 - 100); n > vFSg7Q5d; vFSg7Q5d = vFSg7Q5d + 1) {
        scanf ("%s%lf", sUReN6Pd[vFSg7Q5d].vLg0Tt2D, &sUReN6Pd[vFSg7Q5d].h);
        if (!('m' != sUReN6Pd[vFSg7Q5d].vLg0Tt2D[(64 - 64)])) {
            male[i1] = sUReN6Pd[vFSg7Q5d];
            i1++;
        }
        else {
            zUmHZ1SJ4M7i[i2] = sUReN6Pd[vFSg7Q5d];
            i2 = i2 + 1;
        };
    }
    dlmWp1e = i1;
    for (vFSg7Q5d = (84 - 84); dlmWp1e > vFSg7Q5d; vFSg7Q5d = vFSg7Q5d + 1) {
        for (j = vFSg7Q5d + (174 - 173); dlmWp1e > j; j = j + 1) {
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
            if (male[j].h < male[vFSg7Q5d].h) {
                ESHgcWCA = male[vFSg7Q5d];
                male[vFSg7Q5d] = male[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                male[j] = ESHgcWCA;
            };
        };
    }
    t2 = i2;
    {
        vFSg7Q5d = 0;
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
        while (t2 > vFSg7Q5d) {
            for (j = vFSg7Q5d + (721 - 720); j < t2; j++) {
                if (zUmHZ1SJ4M7i[j].h > zUmHZ1SJ4M7i[vFSg7Q5d].h) {
                    ESHgcWCA = zUmHZ1SJ4M7i[vFSg7Q5d];
                    zUmHZ1SJ4M7i[vFSg7Q5d] = zUmHZ1SJ4M7i[j];
                    zUmHZ1SJ4M7i[j] = ESHgcWCA;
                };
            }
            vFSg7Q5d = vFSg7Q5d + 1;
        };
    }
    for (vFSg7Q5d = 0; vFSg7Q5d < dlmWp1e; vFSg7Q5d++) {
        printf ("%.2lf ", male[vFSg7Q5d].h);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        vFSg7Q5d = 0;
        while (vFSg7Q5d < t2 - 1) {
            printf ("%.2lf ", zUmHZ1SJ4M7i[vFSg7Q5d].h);
            vFSg7Q5d = vFSg7Q5d + 1;
        };
    }
    printf ("%.2lf\n", zUmHZ1SJ4M7i[t2 - 1].h);
    return 0;
}

