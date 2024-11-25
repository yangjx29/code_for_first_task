int main () {
    char *edGms0ruB23;
    struct   inf {
        char YpHCQr97s5vy [(958 - 948)];
        int age;
    }
    KlMPIjyZ7 [101];
    int WKASaI1, fcD43WKIry, j, PN29xSlEom0Z;
    int end;
    end = j;
    struct   f {
        char *p1;
        int Vsq1vlUuDQt;
    }
    OW5fTPV [101];
    scanf ("%d", &WKASaI1);
    for (fcD43WKIry = (254 - 254); fcD43WKIry < WKASaI1; fcD43WKIry = fcD43WKIry + 1) {
        scanf ("%s %d", KlMPIjyZ7[fcD43WKIry].YpHCQr97s5vy, &KlMPIjyZ7[fcD43WKIry].age);
    }
    for (fcD43WKIry = (242 - 242), j = (489 - 489); fcD43WKIry < WKASaI1; fcD43WKIry = fcD43WKIry + 1)
        if (KlMPIjyZ7[fcD43WKIry].age >= (618 - 558)) {
            OW5fTPV[j].Vsq1vlUuDQt = KlMPIjyZ7[fcD43WKIry].age;
            OW5fTPV[j].p1 = KlMPIjyZ7[fcD43WKIry].YpHCQr97s5vy;
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
            j = j + 1;
        }
    for (fcD43WKIry = (915 - 915); fcD43WKIry < end - (654 - 653); fcD43WKIry++) {
        for (j = 0; j + 1 < end - fcD43WKIry; j = j + 1)
            if (OW5fTPV[j].Vsq1vlUuDQt < OW5fTPV[j + 1].Vsq1vlUuDQt) {
                PN29xSlEom0Z = OW5fTPV[j].Vsq1vlUuDQt;
                OW5fTPV[j].Vsq1vlUuDQt = OW5fTPV[j + 1].Vsq1vlUuDQt;
                OW5fTPV[j + 1].Vsq1vlUuDQt = PN29xSlEom0Z;
                edGms0ruB23 = OW5fTPV[j].p1;
                OW5fTPV[j].p1 = OW5fTPV[1 + j].p1;
                OW5fTPV[1 + j].p1 = edGms0ruB23;
            };
    }
    for (fcD43WKIry = 0; fcD43WKIry < end; fcD43WKIry++)
        printf ("%s\n", OW5fTPV[fcD43WKIry].p1);
    for (fcD43WKIry = 0; fcD43WKIry < WKASaI1; fcD43WKIry++)
        if (KlMPIjyZ7[fcD43WKIry].age < 60)
            printf ("%s\n", KlMPIjyZ7[fcD43WKIry].YpHCQr97s5vy);
}

