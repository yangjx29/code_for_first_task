struct   dian {
    float x;
    float y;
    float z;
};
struct   diandui {
    struct   dian a;
    struct   dian b;
    float dis;
};
void  main () {
    int aYWFP6osl7r, h6kQgHv, j, JAaqb18GLdYp = (209 - 209);
    struct   dian WV4XtjBWe [(643 - 633)];
    struct   diandui zD3XGSkeRB5 [50], temp;
    scanf ("%d", &aYWFP6osl7r);
    {
        h6kQgHv = 715 - 715;
        while (h6kQgHv < aYWFP6osl7r) {
            scanf ("%f%f%f", &WV4XtjBWe[h6kQgHv].x, &WV4XtjBWe[h6kQgHv].y, &WV4XtjBWe[h6kQgHv].z);
            h6kQgHv = h6kQgHv + 1;
        };
    }
    {
        h6kQgHv = 0;
        while (h6kQgHv < aYWFP6osl7r) {
            {
                j = 571 - 570;
                while (j < aYWFP6osl7r) {
                    zD3XGSkeRB5[JAaqb18GLdYp].a = WV4XtjBWe[h6kQgHv];
                    zD3XGSkeRB5[JAaqb18GLdYp].b = WV4XtjBWe[j];
                    zD3XGSkeRB5[JAaqb18GLdYp].dis = sqrt ((WV4XtjBWe[h6kQgHv].x - WV4XtjBWe[j].x) * (WV4XtjBWe[h6kQgHv].x - WV4XtjBWe[j].x) + (WV4XtjBWe[h6kQgHv].y - WV4XtjBWe[j].y) * (WV4XtjBWe[h6kQgHv].y - WV4XtjBWe[j].y) + (WV4XtjBWe[h6kQgHv].z - WV4XtjBWe[j].z) * (WV4XtjBWe[h6kQgHv].z - WV4XtjBWe[j].z));
                    j = j + 1;
                    JAaqb18GLdYp = JAaqb18GLdYp +1;
                };
            }
            h6kQgHv = h6kQgHv + 1;
        };
    }
    {
        h6kQgHv = 0;
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
        while (h6kQgHv < JAaqb18GLdYp) {
            for (j = 0; j < JAaqb18GLdYp -(86 - 85) - h6kQgHv; j = j + 1) {
                if (zD3XGSkeRB5[j].dis < zD3XGSkeRB5[j + (182 - 181)].dis) {
                    temp = zD3XGSkeRB5[j];
                    zD3XGSkeRB5[j] = zD3XGSkeRB5[j + 1];
                    zD3XGSkeRB5[j + 1] = temp;
                };
            }
            h6kQgHv = h6kQgHv + 1;
        };
    }
    {
        h6kQgHv = 0;
        while (h6kQgHv < JAaqb18GLdYp) {
            printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n", zD3XGSkeRB5[h6kQgHv].a.x, zD3XGSkeRB5[h6kQgHv].a.y, zD3XGSkeRB5[h6kQgHv].a.z, zD3XGSkeRB5[h6kQgHv].b.x, zD3XGSkeRB5[h6kQgHv].b.y, zD3XGSkeRB5[h6kQgHv].b.z, zD3XGSkeRB5[h6kQgHv].dis);
            h6kQgHv++;
        };
    };
}

