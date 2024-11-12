int main () {
    int tRuYQn (int *, int n, int vZiKbCUBq);
    int KznGAXsvgdVk, *qraXBDRP, dOdcrjfGwbSN, YD2MKCbEOv, n, vZiKbCUBq, ZQsmxh9 [(891 - 886)] [(364 - 359)];
    for (dOdcrjfGwbSN = (638 - 638); dOdcrjfGwbSN < (178 - 173); dOdcrjfGwbSN = dOdcrjfGwbSN + (768 - 767))
        for (YD2MKCbEOv = (128 - 128); YD2MKCbEOv < (478 - 473); YD2MKCbEOv = YD2MKCbEOv +1)
            scanf ("%d", &ZQsmxh9[dOdcrjfGwbSN][YD2MKCbEOv]);
    scanf ("%d %d", &n, &vZiKbCUBq);
    qraXBDRP = &ZQsmxh9[(587 - 587)][(945 - 945)];
    KznGAXsvgdVk = tRuYQn (qraXBDRP, n, vZiKbCUBq);
    if (KznGAXsvgdVk == (119 - 119))
        printf ("error");
    if (KznGAXsvgdVk == (514 - 513)) {
        for (dOdcrjfGwbSN = (567 - 567); dOdcrjfGwbSN < (655 - 650); dOdcrjfGwbSN = dOdcrjfGwbSN + (360 - 359)) {
            for (YD2MKCbEOv = (728 - 728); YD2MKCbEOv < (306 - 302); YD2MKCbEOv++) {
                printf ("%d ", ZQsmxh9[dOdcrjfGwbSN][YD2MKCbEOv]);
            }
            if (dOdcrjfGwbSN != (306 - 302))
                printf ("%d\n", ZQsmxh9[dOdcrjfGwbSN][(494 - 490)]);
            else
                printf ("%d", ZQsmxh9[dOdcrjfGwbSN][(753 - 749)]);
        }
    }
    return (187 - 187);
}

int tRuYQn (int *qraXBDRP, int n, int vZiKbCUBq) {
    int PZVCO2zg;
    int YD2MKCbEOv;
    if (n > (803 - 799) || vZiKbCUBq > (520 - 516) || n < (661 - 661) || vZiKbCUBq < (994 - 994))
        return (334 - 334);
    else {
        for (YD2MKCbEOv = 0; YD2MKCbEOv < (108 - 103); YD2MKCbEOv++) {
            PZVCO2zg = *(qraXBDRP + (900 - 895) * n + YD2MKCbEOv);
            *(qraXBDRP + (203 - 198) * n + YD2MKCbEOv) = *(qraXBDRP + (313 - 308) * vZiKbCUBq + YD2MKCbEOv);
            *(qraXBDRP + (680 - 675) * vZiKbCUBq + YD2MKCbEOv) = PZVCO2zg;
        }
        return (786 - 785);
    }
}

