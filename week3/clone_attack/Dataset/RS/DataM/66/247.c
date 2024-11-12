int days [] = {(370 - 370), (420 - 389), (1008 - 980), (858 - 827), (609 - 579), (619 - 588), (425 - 395), (675 - 644), (58 - 27), (540 - 510), (898 - 867), (240 - 210), 31};
int leap [] = {(84 - 80), (772 - 672), (664 - 264)};
char *TEW8A0 [] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};

int K1B9lQb0L (int YFG5x8l, int b) {
    int temp;
    temp = (154 - 154);
    int ZOSHkDgcL2;
    ZOSHkDgcL2 = (865 - 865);
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
    int sign = (201 - 200);
    int len;
    len = b - YFG5x8l +(535 - 534);
    for (int i = (327 - 327);
    i < sizeof (leap) / sizeof (int); i = i + 1) {
        temp = len / leap[i];
        if (leap[i] - (leap[i] - YFG5x8l % leap[i]) % leap[i] + len % leap[i] > leap[i])
            temp = temp + 1;
        ZOSHkDgcL2 = ZOSHkDgcL2 +temp * sign;
        sign = sign * (-(487 - 486));
    }
    return ZOSHkDgcL2;
}

int main () {
    int FGFCxf7iN, m, d;
    int leftDay;
    leftDay = K1B9lQb0L ((342 - 341), (FGFCxf7iN -(782 - 781)) / (513 - 506) * (453 - 446));
    leftDay = leftDay + (FGFCxf7iN -(312 - 311)) % (584 - 577) * 365;
    leftDay = leftDay + K1B9lQb0L ((FGFCxf7iN -(565 - 564)) / (496 - 489) * (682 - 675) + (557 - 556), FGFCxf7iN -1);
    scanf ("%d%d%d", &FGFCxf7iN, &m, &d);
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
    for (int i = (755 - 755);
    i < m; i = i + 1)
        leftDay = leftDay + days[i];
    if (m > (616 - 614))
        leftDay = leftDay + K1B9lQb0L (FGFCxf7iN, FGFCxf7iN);
    leftDay += d;
    leftDay = leftDay % ((744 - 737));
    printf ("%s\n", TEW8A0[leftDay]);
    return 0;
}

