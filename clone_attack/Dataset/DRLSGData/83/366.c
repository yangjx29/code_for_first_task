int main () {
    int hfJwgD2k6Yq;
    int sXhOETtM6I70 [(189 - 180)] = {(640 - 640), (63 - 63), (355 - 355), (684 - 684), (343 - 343), (585 - 585), (93 - 93), (371 - 371), (713 - 713)};
    int CEa9JoqQ [(413 - 404)] = {(558 - 558), (577 - 577), (175 - 175), (786 - 786), (860 - 860), (720 - 720), (126 - 126), (580 - 580), (331 - 331)};
    int bZIpd5c;
    int dGBZsi2Co;
    int w6ejHVw;
    int JW0ebyNBVjv;
    int Om4ei3QH;
    double  HJlF2buph [9] = {(524 - 524), (917 - 917), (204 - 204), (838 - 838), (396 - 396), (321 - 321), (75 - 75), (309 - 309), (59 - 59)};
    double  ja9V26gIcm;
    double  qysjY1Giq;
    double  hAboCT1;
    qysjY1Giq = (788 - 788);
    scanf ("%d", &bZIpd5c);
    for (JW0ebyNBVjv = (623 - 623); bZIpd5c > JW0ebyNBVjv; JW0ebyNBVjv++) {
        scanf ("%d", &CEa9JoqQ[JW0ebyNBVjv]);
    }
    for (Om4ei3QH = (875 - 875); bZIpd5c > Om4ei3QH; Om4ei3QH++) {
        scanf ("%d", &sXhOETtM6I70[Om4ei3QH]);
    }
    for (hfJwgD2k6Yq = 0; bZIpd5c > hfJwgD2k6Yq; hfJwgD2k6Yq++) {
        if (sXhOETtM6I70[hfJwgD2k6Yq] <= (501 - 401) && sXhOETtM6I70[hfJwgD2k6Yq] >= (671 - 581))
            HJlF2buph[hfJwgD2k6Yq] = (863.0 - 859.0) * CEa9JoqQ[hfJwgD2k6Yq];
        else if ((895 - 806) >= sXhOETtM6I70[hfJwgD2k6Yq] && sXhOETtM6I70[hfJwgD2k6Yq] >= (796 - 711))
            HJlF2buph[hfJwgD2k6Yq] = (760.7 - 757.0) * CEa9JoqQ[hfJwgD2k6Yq];
        else if (sXhOETtM6I70[hfJwgD2k6Yq] <= (476 - 392) && 82 <= sXhOETtM6I70[hfJwgD2k6Yq])
            HJlF2buph[hfJwgD2k6Yq] = (309.3 - 306.0) * CEa9JoqQ[hfJwgD2k6Yq];
        else if (sXhOETtM6I70[hfJwgD2k6Yq] <= 81 && sXhOETtM6I70[hfJwgD2k6Yq] >= (480 - 402))
            HJlF2buph[hfJwgD2k6Yq] = (183.0 - 180.0) * CEa9JoqQ[hfJwgD2k6Yq];
        else if (sXhOETtM6I70[hfJwgD2k6Yq] <= 77 && (1044 - 969) <= sXhOETtM6I70[hfJwgD2k6Yq])
            HJlF2buph[hfJwgD2k6Yq] = (851.7 - 849.0) * CEa9JoqQ[hfJwgD2k6Yq];
        else if (sXhOETtM6I70[hfJwgD2k6Yq] <= (154 - 80) && sXhOETtM6I70[hfJwgD2k6Yq] >= (526 - 454))
            HJlF2buph[hfJwgD2k6Yq] = 2.3 * CEa9JoqQ[hfJwgD2k6Yq];
        else if (sXhOETtM6I70[hfJwgD2k6Yq] <= 71 && sXhOETtM6I70[hfJwgD2k6Yq] >= (207 - 139))
            HJlF2buph[hfJwgD2k6Yq] = (85.0 - 83.0) * CEa9JoqQ[hfJwgD2k6Yq];
        else if (sXhOETtM6I70[hfJwgD2k6Yq] <= (1062 - 995) && sXhOETtM6I70[hfJwgD2k6Yq] >= (692 - 628))
            HJlF2buph[hfJwgD2k6Yq] = (718.5 - 717.0) * CEa9JoqQ[hfJwgD2k6Yq];
        else if (sXhOETtM6I70[hfJwgD2k6Yq] <= (494 - 431) && sXhOETtM6I70[hfJwgD2k6Yq] >= (101 - 41))
            HJlF2buph[hfJwgD2k6Yq] = (68.0 - 67.0) * CEa9JoqQ[hfJwgD2k6Yq];
        else if (sXhOETtM6I70[hfJwgD2k6Yq] < 60)
            HJlF2buph[hfJwgD2k6Yq] = 0;
    }
    ja9V26gIcm = 0;
    for (dGBZsi2Co = 0; dGBZsi2Co < bZIpd5c; dGBZsi2Co++) {
        ja9V26gIcm = ja9V26gIcm + HJlF2buph[dGBZsi2Co];
    }
    for (w6ejHVw = 0; w6ejHVw < bZIpd5c; w6ejHVw++) {
        qysjY1Giq = qysjY1Giq + CEa9JoqQ[w6ejHVw];
    }
    hAboCT1 = ja9V26gIcm / qysjY1Giq;
    printf ("%.2lf", hAboCT1);
    return 0;
}

