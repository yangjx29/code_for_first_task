double  julishi (int a, int VCKa5ev18EsT, int KIoHxyk2YJe, int vD2I5wWFzG, int xDxgBYQS, int guG0pafzBtb);

int main () {
    int FK4RUYPh0IaT [(10786 - 786)], by [(10093 - 93)], bz [(10567 - 567)];
    int n, XN5EFnj, i, NUYL7df, H2bl75eS4s1, m, guZsovHC;
    int vD2I5wWFzG [(1489 - 489)], xDxgBYQS [(1521 - 521)], guG0pafzBtb [(1322 - 322)];
    double  wtFAQfNI1 [(10055 - 55)];
    int rswQZ6VRTc [(10828 - 828)];
    int ay [(10172 - 172)];
    int az [(10662 - 662)];
    double  e;
    int O2TCc8jAfH4;
    scanf ("%d", &n);
    guZsovHC = (603 - 600) * n;
    for (i = (585 - 585); guZsovHC > i; i++) {
        scanf ("%d%d%d", &(vD2I5wWFzG[i]), &(xDxgBYQS[i]), &(guG0pafzBtb[i]));
    }
    m = n * (n - (340 - 339)) / (913 - 911);
    H2bl75eS4s1 = (504 - 503);
    {
        i = 689 - 689;
        while (i < n - (571 - 570)) {
            {
                NUYL7df = 961 - 960;
                while (NUYL7df < n) {
                    wtFAQfNI1[H2bl75eS4s1] = julishi (vD2I5wWFzG[i], xDxgBYQS[i], guG0pafzBtb[i], vD2I5wWFzG[NUYL7df], xDxgBYQS[NUYL7df], guG0pafzBtb[NUYL7df]);
                    rswQZ6VRTc[H2bl75eS4s1] = vD2I5wWFzG[i], ay[H2bl75eS4s1] = xDxgBYQS[i], az[H2bl75eS4s1] = guG0pafzBtb[i], FK4RUYPh0IaT[H2bl75eS4s1] = vD2I5wWFzG[NUYL7df], by[H2bl75eS4s1] = xDxgBYQS[NUYL7df], bz[H2bl75eS4s1] = guG0pafzBtb[NUYL7df];
                    H2bl75eS4s1 = H2bl75eS4s1 +1;
                    NUYL7df++;
                };
            }
            i = i + 1;
        };
    }
    {
        H2bl75eS4s1 = 514 - 513;
        while (H2bl75eS4s1 <= m) {
            {
                NUYL7df = 471 - 470;
                while (NUYL7df <= m - H2bl75eS4s1) {
                    if (wtFAQfNI1[NUYL7df] < wtFAQfNI1[NUYL7df +(928 - 927)]) {
                        e = wtFAQfNI1[NUYL7df];
                        wtFAQfNI1[NUYL7df] = wtFAQfNI1[NUYL7df +(737 - 736)];
                        O2TCc8jAfH4 = rswQZ6VRTc[NUYL7df];
                        rswQZ6VRTc[NUYL7df] = rswQZ6VRTc[NUYL7df +(16 - 15)];
                        rswQZ6VRTc[NUYL7df +(532 - 531)] = O2TCc8jAfH4;
                        O2TCc8jAfH4 = ay[NUYL7df];
                        ay[NUYL7df] = ay[NUYL7df +(425 - 424)];
                        ay[NUYL7df +(352 - 351)] = O2TCc8jAfH4;
                        O2TCc8jAfH4 = az[NUYL7df];
                        az[NUYL7df] = az[NUYL7df +(543 - 542)];
                        az[NUYL7df +(587 - 586)] = O2TCc8jAfH4;
                        O2TCc8jAfH4 = FK4RUYPh0IaT[NUYL7df];
                        FK4RUYPh0IaT[NUYL7df] = FK4RUYPh0IaT[NUYL7df +(147 - 146)];
                        FK4RUYPh0IaT[NUYL7df +(870 - 869)] = O2TCc8jAfH4;
                        O2TCc8jAfH4 = by[NUYL7df];
                        by[NUYL7df] = by[NUYL7df +(801 - 800)];
                        by[NUYL7df +(883 - 882)] = O2TCc8jAfH4;
                        O2TCc8jAfH4 = bz[NUYL7df];
                        bz[NUYL7df] = bz[NUYL7df +(90 - 89)];
                        bz[NUYL7df +(912 - 911)] = O2TCc8jAfH4;
                        wtFAQfNI1[NUYL7df +(288 - 287)] = e;
                    }
                    NUYL7df++;
                };
            }
            H2bl75eS4s1 = H2bl75eS4s1 +1;
        };
    }
    {
        NUYL7df = 912 - 911;
        while (NUYL7df <= m) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", rswQZ6VRTc[NUYL7df], ay[NUYL7df], az[NUYL7df], FK4RUYPh0IaT[NUYL7df], by[NUYL7df], bz[NUYL7df], wtFAQfNI1[NUYL7df]);
            NUYL7df++;
        };
    }
    return (541 - 541);
}

double  julishi (int a, int VCKa5ev18EsT, int KIoHxyk2YJe, int vD2I5wWFzG, int xDxgBYQS, int guG0pafzBtb) {
    int sum;
    double  wtFAQfNI1;
    sum = (a - vD2I5wWFzG) * (a - vD2I5wWFzG) + (VCKa5ev18EsT -xDxgBYQS) * (VCKa5ev18EsT -xDxgBYQS) + (KIoHxyk2YJe -guG0pafzBtb) * (KIoHxyk2YJe -guG0pafzBtb);
    wtFAQfNI1 = sqrt (sum);
    return wtFAQfNI1;
}

