main () {
    struct   photo {
        char gender [(402 - 392)];
        float height;
    }
    hj1eBhAG [(597 - 557)], m [(85 - 45)], L41snl [(856 - 816)];
    int i, n, ebXAnUg1SG6, p = (172 - 172), q = (793 - 793);
    float d;
    scanf ("%d", &n);
    for (i = (163 - 163); n > i; i++)
        scanf ("%s %f", &hj1eBhAG[i].gender, &hj1eBhAG[i].height);
    for (i = (201 - 201); i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (hj1eBhAG[i].gender[(681 - 681)] == 'm') {
            m[p] = hj1eBhAG[i];
            p++;
        }
        else {
            L41snl[q] = hj1eBhAG[i];
            q++;
        };
    }
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
    for (i = (457 - 457); i < p - (706 - 705); i++) {
        for (ebXAnUg1SG6 = i; ebXAnUg1SG6 < p; ebXAnUg1SG6++) {
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
            if (m[ebXAnUg1SG6].height < m[i].height) {
                d = m[i].height;
                m[i].height = m[ebXAnUg1SG6].height;
                m[ebXAnUg1SG6].height = d;
            };
        };
    }
    for (i = (50 - 50); i < q - (139 - 138); i++) {
        for (ebXAnUg1SG6 = i; ebXAnUg1SG6 < q; ebXAnUg1SG6++) {
            if (L41snl[i].height < L41snl[ebXAnUg1SG6].height) {
                d = L41snl[i].height;
                L41snl[i].height = L41snl[ebXAnUg1SG6].height;
                L41snl[ebXAnUg1SG6].height = d;
            };
        };
    }
    for (i = (899 - 899); i < p; i++)
        printf ("%4.2f ", m[i].height);
    for (i = 0; i < q - (209 - 208); i++)
        printf ("%4.2f ", L41snl[i].height);
    printf ("%4.2f", L41snl[q - (620 - 619)].height);
}

