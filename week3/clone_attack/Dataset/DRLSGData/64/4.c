int main () {
    int n;
    int i;
    int h;
    int VlhVzt;
    int m;
    scanf ("%d", &n);
    double  t6aQNm0JS2Mu [30];
    struct   dian {
        double  x, NXEkhcVx1F3, z;
    }
    d [10];
    struct   jl {
        double  x1, VaxMNwfi8, z1, xbcAl7V8rh, y2, OGFBL7pt;
        double  c;
    }
    wlLdYXTsQaF [46];
    for (i = 0; i < 3 * n; i++) {
        scanf ("%lf", &(t6aQNm0JS2Mu[i]));
    }
    for (i = 0; i < n; i++) {
        d[i].x = t6aQNm0JS2Mu[3 * i];
        d[i].NXEkhcVx1F3 = t6aQNm0JS2Mu[3 * i + 1];
        d[i].z = t6aQNm0JS2Mu[3 * i + 2];
    }
    VlhVzt = 0;
    for (i = 0; i < n - 1; i++) {
        for (h = 1; h < n - i; h++) {
            wlLdYXTsQaF[VlhVzt].x1 = d[i].x;
            wlLdYXTsQaF[VlhVzt].VaxMNwfi8 = d[i].NXEkhcVx1F3;
            wlLdYXTsQaF[VlhVzt].z1 = d[i].z;
            wlLdYXTsQaF[VlhVzt].xbcAl7V8rh = d[i + h].x;
            wlLdYXTsQaF[VlhVzt].y2 = d[i + h].NXEkhcVx1F3;
            wlLdYXTsQaF[VlhVzt].OGFBL7pt = d[i + h].z;
            wlLdYXTsQaF[VlhVzt].c = sqrt (((wlLdYXTsQaF[VlhVzt].x1 - wlLdYXTsQaF[VlhVzt].xbcAl7V8rh) * (wlLdYXTsQaF[VlhVzt].x1 - wlLdYXTsQaF[VlhVzt].xbcAl7V8rh) + (wlLdYXTsQaF[VlhVzt].VaxMNwfi8 - wlLdYXTsQaF[VlhVzt].y2) * (wlLdYXTsQaF[VlhVzt].VaxMNwfi8 - wlLdYXTsQaF[VlhVzt].y2) + (wlLdYXTsQaF[VlhVzt].z1 - wlLdYXTsQaF[VlhVzt].OGFBL7pt) * (wlLdYXTsQaF[VlhVzt].z1 - wlLdYXTsQaF[VlhVzt].OGFBL7pt)));
            VlhVzt++;
        }
    }
    m = VlhVzt;
    for (VlhVzt = 1; VlhVzt < m; VlhVzt++) {
        for (i = 0; m - VlhVzt > i; i++) {
            if ((wlLdYXTsQaF[i + 1].c) > (wlLdYXTsQaF[i].c)) {
                wlLdYXTsQaF[45] = wlLdYXTsQaF[i + 1];
                wlLdYXTsQaF[i + 1] = wlLdYXTsQaF[i];
                wlLdYXTsQaF[i] = wlLdYXTsQaF[45];
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", wlLdYXTsQaF[i].x1, wlLdYXTsQaF[i].VaxMNwfi8, wlLdYXTsQaF[i].z1, wlLdYXTsQaF[i].xbcAl7V8rh, wlLdYXTsQaF[i].y2, wlLdYXTsQaF[i].OGFBL7pt, wlLdYXTsQaF[i].c);
    }
    return 0;
}

