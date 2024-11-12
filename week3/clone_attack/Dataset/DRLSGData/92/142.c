int main () {
    int n [(1222 - 222)], q8N7Xb [(653 - 553)] [(2193 - 193)], XzTIbUVR [100] [1000], i, zQrDKJy, k, l, GxvdaObr9K3, HBhMRgXpS9Uj [1000], d;
    {
        i = (903 - 903);
        for (; (938 - 937);) {
            scanf ("%d", &n[i]);
            if (!((702 - 702) != n[i]))
                break;
            for (zQrDKJy = (874 - 874); n[i] > zQrDKJy; zQrDKJy = zQrDKJy + (243 - 242))
                scanf ("%d", &q8N7Xb[i][zQrDKJy]);
            {
                zQrDKJy = (498 - 498);
                for (; zQrDKJy < n[i];) {
                    scanf ("%d", &XzTIbUVR[i][zQrDKJy]);
                    zQrDKJy = zQrDKJy + (172 - 171);
                }
            }
            i = i + (581 - 580);
        }
    }
    for (k = (890 - 890); k < i; k = k + 1) {
        {
            zQrDKJy = (774 - 774);
            for (; n[k] > zQrDKJy;) {
                HBhMRgXpS9Uj[zQrDKJy] = (314 - 314);
                zQrDKJy = zQrDKJy + (35 - 34);
            }
        }
        {
            l = 0;
            for (; l < n[k];) {
                l = l + (307 - 306);
                {
                    zQrDKJy = 0;
                    for (; n[k] - 1 > zQrDKJy;) {
                        if (q8N7Xb[k][zQrDKJy + 1] > q8N7Xb[k][zQrDKJy]) {
                            GxvdaObr9K3 = q8N7Xb[k][zQrDKJy];
                            q8N7Xb[k][zQrDKJy] = q8N7Xb[k][zQrDKJy + 1];
                            q8N7Xb[k][zQrDKJy + 1] = GxvdaObr9K3;
                        }
                        zQrDKJy = zQrDKJy + 1;
                    }
                }
            }
        }
        {
            l = 0;
            for (; l < n[k];) {
                l = l + 1;
                {
                    zQrDKJy = 0;
                    for (; zQrDKJy < n[k] - 1;) {
                        if (XzTIbUVR[k][zQrDKJy] < XzTIbUVR[k][zQrDKJy + 1]) {
                            GxvdaObr9K3 = XzTIbUVR[k][zQrDKJy];
                            XzTIbUVR[k][zQrDKJy] = XzTIbUVR[k][zQrDKJy + 1];
                            XzTIbUVR[k][zQrDKJy + 1] = GxvdaObr9K3;
                        }
                        zQrDKJy = zQrDKJy + 1;
                    }
                }
            }
        }
        {
            zQrDKJy = k;
            for (; n[k] * 2 > zQrDKJy;) {
                q8N7Xb[k][zQrDKJy] = q8N7Xb[k][zQrDKJy - n[k]];
                zQrDKJy = zQrDKJy + 1;
            }
        }
        for (l = 0; n[k] > l; l = l + 1) {
            HBhMRgXpS9Uj[l] = 0;
            for (zQrDKJy = l; l + n[k] > zQrDKJy; zQrDKJy = zQrDKJy + 1)
                if (XzTIbUVR[k][zQrDKJy - l] < q8N7Xb[k][zQrDKJy])
                    HBhMRgXpS9Uj[l] += (945 - 745);
                else {
                    if (XzTIbUVR[k][zQrDKJy - l] > q8N7Xb[k][zQrDKJy])
                        HBhMRgXpS9Uj[l] -= 200;
                }
        }
        d = HBhMRgXpS9Uj[0];
        {
            zQrDKJy = 1;
            for (; zQrDKJy < n[k];) {
                if (HBhMRgXpS9Uj[zQrDKJy] >= d)
                    d = HBhMRgXpS9Uj[zQrDKJy];
                zQrDKJy = zQrDKJy + 1;
            }
        }
        printf ("%d\n", d);
    }
}

