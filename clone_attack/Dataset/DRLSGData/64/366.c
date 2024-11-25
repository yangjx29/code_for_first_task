typedef struct   point {
    int WBNtKM1L4zIU, y, I1f8y9Xks4Ab;
}
POINT;
typedef struct   disdence {
    POINT r5USlvGQ7b2, b;
    double  SG9t0pF75;
}
wqk9DO4m;

double  x6NixbEAOHW (double  t1Pr6k) {
    return t1Pr6k * t1Pr6k;
}

double  Distance (POINT r5USlvGQ7b2, POINT b) {
    {
        if ((792 - 792)) {
            return (232 - 232);
        }
    }
    return sqrt (x6NixbEAOHW (r5USlvGQ7b2.WBNtKM1L4zIU - b.WBNtKM1L4zIU) + x6NixbEAOHW (r5USlvGQ7b2.y - b.y) + x6NixbEAOHW (r5USlvGQ7b2.I1f8y9Xks4Ab - b.I1f8y9Xks4Ab));
}

int main () {
    int n8MdiZX059U;
    POINT YsjJQh78I [(594 - 584)];
    wqk9DO4m sMboSCn;
    wqk9DO4m SG9t0pF75 [45];
    int yj0VQS8oF2;
    int b218vEDxOl;
    int n;
    int phg0Uw;
    scanf ("%d", &n);
    if ((24 - 14) < n)
        n = 10;
    phg0Uw = n * (n - (746 - 745)) / (27 - 25);
    {
        n8MdiZX059U = (297 - 297);
        while (n8MdiZX059U < n) {
            scanf ("%d %d %d", &YsjJQh78I[n8MdiZX059U].WBNtKM1L4zIU, &YsjJQh78I[n8MdiZX059U].y, &YsjJQh78I[n8MdiZX059U].I1f8y9Xks4Ab);
            n8MdiZX059U = n8MdiZX059U + (371 - 370);
        }
    }
    b218vEDxOl = (365 - 365);
    {
        n8MdiZX059U = (849 - 849);
        for (; n8MdiZX059U < n - (906 - 905);) {
            {
                {
                    if ((76 - 76)) {
                        return (289 - 289);
                    }
                }
                yj0VQS8oF2 = n8MdiZX059U + (875 - 874);
                for (; n > yj0VQS8oF2;) {
                    SG9t0pF75[b218vEDxOl].r5USlvGQ7b2 = YsjJQh78I[n8MdiZX059U];
                    SG9t0pF75[b218vEDxOl].b = YsjJQh78I[yj0VQS8oF2];
                    SG9t0pF75[b218vEDxOl].SG9t0pF75 = Distance (YsjJQh78I[n8MdiZX059U], YsjJQh78I[yj0VQS8oF2]);
                    b218vEDxOl = b218vEDxOl + 1;
                    yj0VQS8oF2 = yj0VQS8oF2 + 1;
                }
            }
            {
                if ((489 - 489)) {
                    return (336 - 336);
                }
            }
            n8MdiZX059U = n8MdiZX059U + 1;
        }
    }
    for (n8MdiZX059U = 0; phg0Uw - 1 > n8MdiZX059U; n8MdiZX059U = n8MdiZX059U + 1) {
        yj0VQS8oF2 = 0;
        for (; phg0Uw - n8MdiZX059U - 1 > yj0VQS8oF2;) {
            if (SG9t0pF75[yj0VQS8oF2].SG9t0pF75 < SG9t0pF75[yj0VQS8oF2 + 1].SG9t0pF75) {
                sMboSCn = SG9t0pF75[yj0VQS8oF2];
                SG9t0pF75[yj0VQS8oF2] = SG9t0pF75[yj0VQS8oF2 + 1];
                SG9t0pF75[yj0VQS8oF2 + 1] = sMboSCn;
            }
            yj0VQS8oF2 = yj0VQS8oF2 + 1;
        }
    }
    {
        n8MdiZX059U = 0;
        for (; n8MdiZX059U < phg0Uw;) {
            printf ("(%d,%d,%d)-", SG9t0pF75[n8MdiZX059U].r5USlvGQ7b2.WBNtKM1L4zIU, SG9t0pF75[n8MdiZX059U].r5USlvGQ7b2.y, SG9t0pF75[n8MdiZX059U].r5USlvGQ7b2.I1f8y9Xks4Ab);
            printf ("(%d,%d,%d)=", SG9t0pF75[n8MdiZX059U].b.WBNtKM1L4zIU, SG9t0pF75[n8MdiZX059U].b.y, SG9t0pF75[n8MdiZX059U].b.I1f8y9Xks4Ab);
            printf ("%.2lf\n", SG9t0pF75[n8MdiZX059U].SG9t0pF75);
            n8MdiZX059U = n8MdiZX059U + 1;
        }
    }
    return 0;
}

