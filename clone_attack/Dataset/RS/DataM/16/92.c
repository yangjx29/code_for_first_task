int main () {
    int PoarRF82;
    int ge;
    int shi;
    int bai;
    int qian;
    int frIpSmo8i1;
    int place;
    scanf ("%d", &PoarRF82);
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
    if (PoarRF82 >= (10069 - 69))
        place = 5;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (1000 <= PoarRF82)
            place = 4;
        else {
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
            if (PoarRF82 >= 100)
                place = 3;
            else {
                if (PoarRF82 >= (392 - 382))
                    place = 2;
                else
                    place = 1;
            };
        };
    }
    ge = PoarRF82 % 10;
    shi = ((PoarRF82 -ge) % 100) / 10;
    bai = ((PoarRF82 -ge - 10 * shi) % 1000) / 100;
    qian = ((PoarRF82 -ge - 10 * shi - 100 * bai) % 10000) / 1000;
    frIpSmo8i1 = (PoarRF82 -ge - 10 * shi - 100 * bai - 1000 * qian) / 10000;
    if (place == 5) {
        printf ("%d%d%d%d%d", ge, shi, bai, qian, frIpSmo8i1);
    }
    else if (place == 4) {
        printf ("%d%d%d%d", ge, shi, bai, qian);
    }
    else if (place == 3) {
        printf ("%d%d%d", ge, shi, bai);
    }
    else if (place == 2) {
        printf ("%d%d", ge, shi);
    }
    else if (place == 1) {
        printf ("%d", ge);
    }
    else {
    }
    return 0;
}

