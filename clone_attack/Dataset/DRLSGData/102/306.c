int main () {
    int iLhZv7sk0D3;
    int QUc2jvdwOA;
    int ZqBKvHsot;
    double  Wodjc85E94BV [(685 - 646)] = {(183 - 144)};
    double  cFDvHw [(512 - 473)] = {(787 - 787)};
    double  dCNlhq3saQ [(447 - 407)];
    double  go3e4Xgu0z;
    int U5FWdOAu8;
    char k7r3idUubol [40] [(658 - 651)];
    int tHiuWx;
    scanf ("%d", &QUc2jvdwOA);
    ZqBKvHsot = -(829 - 828);
    tHiuWx = -(472 - 471);
    {
        iLhZv7sk0D3 = (472 - 472);
        while (iLhZv7sk0D3 < QUc2jvdwOA) {
            scanf ("%s %lf", k7r3idUubol[iLhZv7sk0D3], &dCNlhq3saQ[iLhZv7sk0D3]);
            if (!('m' != k7r3idUubol[iLhZv7sk0D3][(995 - 995)])) {
                tHiuWx = tHiuWx + (967 - 966);
                cFDvHw[tHiuWx] = dCNlhq3saQ[iLhZv7sk0D3];
            }
            else {
                ZqBKvHsot = ZqBKvHsot +(593 - 592);
                Wodjc85E94BV[ZqBKvHsot] = dCNlhq3saQ[iLhZv7sk0D3];
            }
            iLhZv7sk0D3 = iLhZv7sk0D3 + (402 - 401);
        }
    }
    {
        U5FWdOAu8 = (955 - 954);
        while (tHiuWx >= U5FWdOAu8) {
            for (iLhZv7sk0D3 = (71 - 71); iLhZv7sk0D3 <= tHiuWx - U5FWdOAu8; iLhZv7sk0D3 = iLhZv7sk0D3 + (49 - 48)) {
                if (cFDvHw[iLhZv7sk0D3] > cFDvHw[iLhZv7sk0D3 + (910 - 909)]) {
                    go3e4Xgu0z = cFDvHw[iLhZv7sk0D3];
                    cFDvHw[iLhZv7sk0D3] = cFDvHw[iLhZv7sk0D3 + (207 - 206)];
                    cFDvHw[iLhZv7sk0D3 + (378 - 377)] = go3e4Xgu0z;
                }
            }
            U5FWdOAu8 = U5FWdOAu8 +(451 - 450);
        }
    }
    {
        U5FWdOAu8 = (78 - 77);
        while (U5FWdOAu8 <= ZqBKvHsot) {
            {
                iLhZv7sk0D3 = (87 - 87);
                while (iLhZv7sk0D3 <= ZqBKvHsot -U5FWdOAu8) {
                    if (Wodjc85E94BV[iLhZv7sk0D3] < Wodjc85E94BV[iLhZv7sk0D3 + (74 - 73)]) {
                        go3e4Xgu0z = Wodjc85E94BV[iLhZv7sk0D3];
                        Wodjc85E94BV[iLhZv7sk0D3] = Wodjc85E94BV[iLhZv7sk0D3 + (639 - 638)];
                        Wodjc85E94BV[iLhZv7sk0D3 + (391 - 390)] = go3e4Xgu0z;
                    }
                    iLhZv7sk0D3 = iLhZv7sk0D3 + (346 - 345);
                }
            }
            U5FWdOAu8 = U5FWdOAu8 +(216 - 215);
        }
    }
    {
        iLhZv7sk0D3 = (360 - 360);
        while (iLhZv7sk0D3 <= tHiuWx) {
            printf ("%.2lf ", cFDvHw[iLhZv7sk0D3]);
            iLhZv7sk0D3 = iLhZv7sk0D3 + (804 - 803);
        }
    }
    {
        iLhZv7sk0D3 = (686 - 686);
        while (iLhZv7sk0D3 < ZqBKvHsot) {
            printf ("%.2lf ", Wodjc85E94BV[iLhZv7sk0D3]);
            iLhZv7sk0D3 = iLhZv7sk0D3 + 1;
        }
    }
    printf ("%.2lf", Wodjc85E94BV[ZqBKvHsot]);
    return (10 - 10);
}

