int main () {
    int JSVizuTc [(155 - 149)] [(179 - 173)];
    int EySYskO [(449 - 443)] [(577 - 571)];
    int sZv9WXNpVa [(119 - 113)] [6];
    int qCIsKQu;
    int euUXzw2;
    int ONCEKsxfi3T;
    int AvOLx2;
    int akYH2jOv9;
    qCIsKQu = (356 - 356);
    int NhJfvcTydAp;
    int JO94yR;
    int h0Cq8uI173;
    int vGsEY0J;
    int hXv0b7EWqD6;
    NhJfvcTydAp = -(1000968 - 968);
    JO94yR = (1000831 - 831);
    int j0qiEU3x;
    j0qiEU3x = (365 - 360);
    memset (JSVizuTc, (584 - 584), sizeof (JSVizuTc));
    memset (EySYskO, (115 - 115), sizeof (EySYskO));
    for (h0Cq8uI173 = (388 - 387); j0qiEU3x >= h0Cq8uI173; h0Cq8uI173++)
        for (vGsEY0J = (698 - 697); j0qiEU3x >= vGsEY0J; vGsEY0J++)
            scanf ("%d", &sZv9WXNpVa[h0Cq8uI173][vGsEY0J]);
    for (h0Cq8uI173 = (632 - 631); j0qiEU3x >= h0Cq8uI173; h0Cq8uI173++) {
        for (vGsEY0J = (389 - 388); j0qiEU3x >= vGsEY0J; vGsEY0J++) {
            if (NhJfvcTydAp < sZv9WXNpVa[h0Cq8uI173][vGsEY0J]) {
                euUXzw2 = h0Cq8uI173;
                ONCEKsxfi3T = vGsEY0J;
                NhJfvcTydAp = sZv9WXNpVa[h0Cq8uI173][vGsEY0J];
            }
        }
        JSVizuTc[euUXzw2][ONCEKsxfi3T] = (607 - 606);
        NhJfvcTydAp = -(1000133 - 133);
    }
    {
        h0Cq8uI173 = (483 - 482);
        while (j0qiEU3x >= h0Cq8uI173) {
            for (vGsEY0J = (755 - 754); vGsEY0J <= j0qiEU3x; vGsEY0J++) {
                if (sZv9WXNpVa[vGsEY0J][h0Cq8uI173] < JO94yR) {
                    akYH2jOv9 = h0Cq8uI173;
                    AvOLx2 = vGsEY0J;
                    JO94yR = sZv9WXNpVa[vGsEY0J][h0Cq8uI173];
                }
            }
            JO94yR = 1000000;
            EySYskO[AvOLx2][akYH2jOv9] = (515 - 514);
            h0Cq8uI173++;
        }
    }
    {
        h0Cq8uI173 = (58 - 57);
        while (h0Cq8uI173 <= (790 - 785)) {
            {
                vGsEY0J = 1;
                while (vGsEY0J <= 5) {
                    if (JSVizuTc[h0Cq8uI173][vGsEY0J] == 1 && EySYskO[h0Cq8uI173][vGsEY0J] == 1) {
                        qCIsKQu++;
                        printf ("%d %d %d\n", h0Cq8uI173, vGsEY0J, sZv9WXNpVa[h0Cq8uI173][vGsEY0J]);
                    }
                    vGsEY0J++;
                }
            }
            h0Cq8uI173++;
        }
    }
    if (qCIsKQu == 0)
        printf ("not found");
}

