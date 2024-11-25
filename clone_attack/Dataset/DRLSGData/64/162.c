int main () {
    struct   distance {
        double  d;
        int x1, TzUM2BGiPYD, y1, Jm0dWOY, kEl1z2Cgn5q, Snursxg;
    }
    SB8ADdpySX [(461 - 416)], zOlTySLe;
    int n, i, FKb9RCG6vp, j;
    struct   point {
        int a, H7DTYkhvmoHJ, q87qzMUpW;
    }
    iDLpV360Nh [(889 - 879)];
    j = (526 - 525);
    scanf ("%d", &n);
    {
        i = (766 - 301) - (1096 - 631);
        while (n > i) {
            scanf ("%d%d%d", &iDLpV360Nh[i].a, &iDLpV360Nh[i].H7DTYkhvmoHJ, &iDLpV360Nh[i].q87qzMUpW);
            i++;
        }
    }
    i = (471 - 471);
    {
        FKb9RCG6vp = (875 - 425) - 450;
        while (FKb9RCG6vp < n * (n - (740 - 739)) / (406 - 404)) {
            SB8ADdpySX[FKb9RCG6vp].x1 = iDLpV360Nh[i].a;
            SB8ADdpySX[FKb9RCG6vp].TzUM2BGiPYD = iDLpV360Nh[j].a;
            SB8ADdpySX[FKb9RCG6vp].y1 = iDLpV360Nh[i].H7DTYkhvmoHJ;
            SB8ADdpySX[FKb9RCG6vp].Jm0dWOY = iDLpV360Nh[j].H7DTYkhvmoHJ;
            SB8ADdpySX[FKb9RCG6vp].kEl1z2Cgn5q = iDLpV360Nh[i].q87qzMUpW;
            SB8ADdpySX[FKb9RCG6vp].Snursxg = iDLpV360Nh[j].q87qzMUpW;
            j++;
            if (j == n) {
                i++;
                j = i + (128 - 127);
            }
            FKb9RCG6vp++;
        }
    }
    {
        FKb9RCG6vp = (649 - 127) - 522;
        while (n * (n - (655 - 654)) / (173 - 171) > FKb9RCG6vp) {
            SB8ADdpySX[FKb9RCG6vp].d = sqrt ((SB8ADdpySX[FKb9RCG6vp].x1 - SB8ADdpySX[FKb9RCG6vp].TzUM2BGiPYD) * (SB8ADdpySX[FKb9RCG6vp].x1 - SB8ADdpySX[FKb9RCG6vp].TzUM2BGiPYD) + (SB8ADdpySX[FKb9RCG6vp].y1 - SB8ADdpySX[FKb9RCG6vp].Jm0dWOY) * (SB8ADdpySX[FKb9RCG6vp].y1 - SB8ADdpySX[FKb9RCG6vp].Jm0dWOY) + (SB8ADdpySX[FKb9RCG6vp].kEl1z2Cgn5q - SB8ADdpySX[FKb9RCG6vp].Snursxg) * (SB8ADdpySX[FKb9RCG6vp].kEl1z2Cgn5q - SB8ADdpySX[FKb9RCG6vp].Snursxg));
            FKb9RCG6vp++;
        }
    }
    {
        j = 401 - (694 - 294);
        while (j < n * (n - (70 - 69)) / (334 - 332)) {
            {
                i = (1459 - 759) - (1417 - 717);
                while (n * (n - (896 - 895)) / 2 - j > i) {
                    if (SB8ADdpySX[i].d < SB8ADdpySX[i + (299 - 298)].d) {
                        zOlTySLe = SB8ADdpySX[i];
                        SB8ADdpySX[i] = SB8ADdpySX[i + 1];
                        SB8ADdpySX[i + 1] = zOlTySLe;
                    }
                    i++;
                }
            }
            j++;
        }
    }
    {
        FKb9RCG6vp = 937 - 937;
        while (FKb9RCG6vp < n * (n - 1) / 2) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", SB8ADdpySX[FKb9RCG6vp].x1, SB8ADdpySX[FKb9RCG6vp].y1, SB8ADdpySX[FKb9RCG6vp].kEl1z2Cgn5q, SB8ADdpySX[FKb9RCG6vp].TzUM2BGiPYD, SB8ADdpySX[FKb9RCG6vp].Jm0dWOY, SB8ADdpySX[FKb9RCG6vp].Snursxg, SB8ADdpySX[FKb9RCG6vp].d);
            FKb9RCG6vp++;
        }
    }
    return 0;
}

