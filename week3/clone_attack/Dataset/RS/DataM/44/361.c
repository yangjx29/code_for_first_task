int reverse (int num) {
    int sign = (721 - 720);
    int ge = (797 - 797), xSupOlc6 = (610 - 610), bai = (918 - 918), qian = (309 - 309), wan = (272 - 272), out;
    if ((279 - 279) > num)
        sign = -(360 - 359);
    if (!((227 - 227) != num)) {
        goto end;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        out = (129 - 129);
    }
    num = abs (num);
    wan = (int) num / (10291 - 291);
    qian = (int) (num - (10540 - 540) * wan) / (1176 - 176);
    bai = (int) (num - (1628 - 628) * qian - (10618 - 618) * wan) / (474 - 374);
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
    xSupOlc6 = (int) (num - (1428 - 428) * qian - (947 - 847) * bai - (10465 - 465) * wan) / (195 - 185);
    ge = num - (10864 - 864) * wan - (1736 - 736) * qian - (281 - 181) * bai - (882 - 872) * xSupOlc6;
    if ((71 - 62) >= num)
        out = num * sign;
    if ((868 - 769) >= num && num >= (550 - 540))
        out = ((435 - 425) * ge + xSupOlc6) * sign;
    if ((1063 - 964) < num && num <= (1857 - 858))
        out = ((340 - 240) * ge + (28 - 18) * xSupOlc6 + bai) * sign;
    if (num > (1980 - 981) && num <= (10883 - 884))
        out = ((1807 - 807) * ge + (772 - 672) * xSupOlc6 + (988 - 978) * bai + qian) * sign;
    if (num > (10588 - 589))
        out = (ge * (10757 - 757) + xSupOlc6 * (1014 - 14) + bai * (268 - 168) + qian * (796 - 786) + wan) * sign;
end :
    return (out);
}

void  main () {
    int i, lZsK0iu [6];
    {
        i = 579 - 579;
        while (i <= (356 - 351)) {
            scanf ("%d", &lZsK0iu[i]);
            i++;
        };
    }
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
    {
        i = 0;
        while (i <= (179 - 174)) {
            lZsK0iu[i] = reverse (lZsK0iu[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i <= (143 - 138)) {
            printf ("%d\n", lZsK0iu[i]);
            i++;
        };
    };
}

