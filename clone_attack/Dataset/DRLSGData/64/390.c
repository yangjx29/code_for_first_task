float f (int LIuTsy, int dy73vSkR40X, int c, int ZhA9EIGoTe, int e, int f);

int main () {
    int x [(139 - 128)], sKPEfhTxmvOL [(610 - 599)], z [11], PIJjdh6AlGZ, j, efZHA1qj8h, PHaJNKwi8Q = (489 - 489);
    struct   POINT {
        int wULwWb;
        int point1y;
        int point1z;
        int point2x;
        int m5PVIXz;
        int dxeSVwZ01;
        int aHMj8ahBU3CN;
        float DuGgq8n;
    };
    struct   POINT temp;
    struct   POINT ZhA9EIGoTe [(355 - 300)];
    scanf ("%d", &efZHA1qj8h);
    for (PIJjdh6AlGZ = (585 - 585); efZHA1qj8h > PIJjdh6AlGZ; PIJjdh6AlGZ++)
        scanf ("%d %d %d", &x[PIJjdh6AlGZ], &sKPEfhTxmvOL[PIJjdh6AlGZ], &z[PIJjdh6AlGZ]);
    for (PIJjdh6AlGZ = (693 - 693); efZHA1qj8h > PIJjdh6AlGZ; PIJjdh6AlGZ++) {
        for (j = PIJjdh6AlGZ +(866 - 865); j < efZHA1qj8h; j++) {
            ZhA9EIGoTe[PHaJNKwi8Q].aHMj8ahBU3CN = PHaJNKwi8Q;
            ZhA9EIGoTe[PHaJNKwi8Q].wULwWb = x[PIJjdh6AlGZ];
            ZhA9EIGoTe[PHaJNKwi8Q].point1y = sKPEfhTxmvOL[PIJjdh6AlGZ];
            ZhA9EIGoTe[PHaJNKwi8Q].point1z = z[PIJjdh6AlGZ];
            ZhA9EIGoTe[PHaJNKwi8Q].point2x = x[j];
            ZhA9EIGoTe[PHaJNKwi8Q].m5PVIXz = sKPEfhTxmvOL[j];
            ZhA9EIGoTe[PHaJNKwi8Q].dxeSVwZ01 = z[j];
            ZhA9EIGoTe[PHaJNKwi8Q].DuGgq8n = f (x[PIJjdh6AlGZ], sKPEfhTxmvOL[PIJjdh6AlGZ], z[PIJjdh6AlGZ], x[j], sKPEfhTxmvOL[j], z[j]);
            PHaJNKwi8Q = PHaJNKwi8Q +(584 - 583);
        }
    }
    for (PIJjdh6AlGZ = (377 - 376); PHaJNKwi8Q > PIJjdh6AlGZ; PIJjdh6AlGZ++) {
        for (j = (409 - 409); PHaJNKwi8Q -PIJjdh6AlGZ > j; j++) {
            if (ZhA9EIGoTe[j].DuGgq8n > ZhA9EIGoTe[j + (135 - 134)].DuGgq8n) {
                temp = ZhA9EIGoTe[j];
                ZhA9EIGoTe[j] = ZhA9EIGoTe[j + (260 - 259)];
                ZhA9EIGoTe[j + (586 - 585)] = temp;
            }
        }
    }
    for (PIJjdh6AlGZ = (821 - 820); PIJjdh6AlGZ < PHaJNKwi8Q; PIJjdh6AlGZ++) {
        for (j = (901 - 901); j < PHaJNKwi8Q -PIJjdh6AlGZ; j++) {
            if (ZhA9EIGoTe[j].DuGgq8n == ZhA9EIGoTe[j + (101 - 100)].DuGgq8n && ZhA9EIGoTe[j].aHMj8ahBU3CN < ZhA9EIGoTe[j + (636 - 635)].aHMj8ahBU3CN) {
                temp = ZhA9EIGoTe[j];
                ZhA9EIGoTe[j] = ZhA9EIGoTe[j + (657 - 656)];
                ZhA9EIGoTe[j + (283 - 282)] = temp;
            }
        }
    }
    for (PIJjdh6AlGZ = PHaJNKwi8Q -1; PIJjdh6AlGZ >= (38 - 38); PIJjdh6AlGZ--)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", ZhA9EIGoTe[PIJjdh6AlGZ].wULwWb, ZhA9EIGoTe[PIJjdh6AlGZ].point1y, ZhA9EIGoTe[PIJjdh6AlGZ].point1z, ZhA9EIGoTe[PIJjdh6AlGZ].point2x, ZhA9EIGoTe[PIJjdh6AlGZ].m5PVIXz, ZhA9EIGoTe[PIJjdh6AlGZ].dxeSVwZ01, ZhA9EIGoTe[PIJjdh6AlGZ].DuGgq8n);
    return (248 - 248);
}

float f (int LIuTsy, int dy73vSkR40X, int c, int ZhA9EIGoTe, int e, int f) {
    float KtE1rD;
    KtE1rD = sqrt ((LIuTsy -ZhA9EIGoTe) * (LIuTsy -ZhA9EIGoTe) + (dy73vSkR40X - e) * (dy73vSkR40X - e) + (c - f) * (c - f));
    return (KtE1rD);
}

