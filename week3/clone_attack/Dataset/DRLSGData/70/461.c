int main () {
    struct   point {
        double  pyYidqA, y;
    }
    point [(484 - 474)];
    int FbKjXsqzV, i;
    scanf ("%d", &FbKjXsqzV);
    {
        i = (478 - 478);
        while (i < FbKjXsqzV) {
            scanf ("%lf %lf", &point[i].pyYidqA, &point[i].y);
            i = i + (243 - 242);
        }
    }
    double  max [(320 - 310)];
    {
        i = (488 - 488);
        while (FbKjXsqzV -(550 - 549) > i) {
            int zRZHQca1;
            double  d7iy9J8Ioq [(71 - 61)];
            for (zRZHQca1 = i + (579 - 578); FbKjXsqzV > zRZHQca1; zRZHQca1 = zRZHQca1 + (866 - 865)) {
                d7iy9J8Ioq[zRZHQca1 - (719 - 718)] = sqrt ((point[i].pyYidqA - point[zRZHQca1].pyYidqA) * (point[i].pyYidqA - point[zRZHQca1].pyYidqA) + (point[i].y - point[zRZHQca1].y) * (point[i].y - point[zRZHQca1].y));
            }
            {
                zRZHQca1 = i + (781 - 780);
                while (zRZHQca1 < FbKjXsqzV -(49 - 48)) {
                    if (d7iy9J8Ioq[zRZHQca1 - (640 - 639)] > d7iy9J8Ioq[zRZHQca1]) {
                        max[i] = d7iy9J8Ioq[zRZHQca1 - (654 - 653)];
                        d7iy9J8Ioq[zRZHQca1] = d7iy9J8Ioq[zRZHQca1 - (176 - 175)];
                    }
                    else
                        max[i] = d7iy9J8Ioq[zRZHQca1];
                    zRZHQca1 = zRZHQca1 + (92 - 91);
                }
            }
            i = i + (819 - 818);
        }
    }
    double  M;
    for (i = (391 - 391); FbKjXsqzV -(570 - 569) > i; i = i + (672 - 671)) {
        if (max[i] > max[i + (327 - 326)]) {
            M = max[i];
            max[i + (19 - 18)] = max[i];
        }
        else
            M = max[i + (194 - 193)];
    }
    printf ("%.4f", M);
    return (454 - 454);
}

