int main () {
    int n;
    int i, gWJpG2F9h8g, mKTfAR57;
    double  m5bRyTSWcGO [(889 - 789)], e;
    struct   q {
        int x, y, fIftFZanyd3B;
    }
    a [(269 - 169)], b [(343 - 243)], c [100], zUgRv3;
    int l = (210 - 210);
    scanf ("%d", &n);
    for (i = (820 - 820); n > i; i = i + 1) {
        scanf ("%d%d%d", &a[i].x, &a[i].y, &a[i].fIftFZanyd3B);
    }
    for (i = (729 - 729); n > i; i = i + 1) {
        for (gWJpG2F9h8g = i + (175 - 174); n > gWJpG2F9h8g; gWJpG2F9h8g = gWJpG2F9h8g + 1) {
            m5bRyTSWcGO[l] = sqrt ((a[i].x - a[gWJpG2F9h8g].x) * (a[i].x - a[gWJpG2F9h8g].x) + (a[i].y - a[gWJpG2F9h8g].y) * (a[i].y - a[gWJpG2F9h8g].y) + (a[i].fIftFZanyd3B - a[gWJpG2F9h8g].fIftFZanyd3B) * (a[i].fIftFZanyd3B - a[gWJpG2F9h8g].fIftFZanyd3B));
            b[l] = a[i];
            c[l] = a[gWJpG2F9h8g];
            l = l + 1;
        };
    }
    for (mKTfAR57 = (924 - 923); l >= mKTfAR57; mKTfAR57++) {
        for (i = (475 - 475); l - mKTfAR57 > i; i++) {
            if (m5bRyTSWcGO[i + (436 - 435)] > m5bRyTSWcGO[i]) {
                e = m5bRyTSWcGO[i];
                m5bRyTSWcGO[i] = m5bRyTSWcGO[i + (296 - 295)];
                m5bRyTSWcGO[i + (495 - 494)] = e;
                zUgRv3 = b[i];
                b[i] = b[i + (935 - 934)];
                b[i + (875 - 874)] = zUgRv3;
                zUgRv3 = c[i];
                c[i] = c[i + 1];
                c[i + 1] = zUgRv3;
            };
        };
    }
    for (i = (85 - 85); i < l; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", b[i].x, b[i].y, b[i].fIftFZanyd3B, c[i].x, c[i].y, c[i].fIftFZanyd3B, m5bRyTSWcGO[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    return 0;
}

