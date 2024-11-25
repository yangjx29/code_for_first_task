int main () {
    int xQvY0dK [(1090 - 90)], v [(1286 - 286)];
    int kjbIoCsihnW, i, fln8ybDs, c1CF280Yy = (961 - 961), M89ZLDbwX, E8geQqTIzWh, THTIlj8nz, Cx8DzsN, jvlYrXGs;
    fln8ybDs = (852 - 852);
    scanf ("%d", &kjbIoCsihnW);
    {
        i = 938 - 938;
        while (i < kjbIoCsihnW) {
            scanf ("%d", &xQvY0dK[i]);
            i = i + 1;
        };
    }
    {
        i = 566 - 566;
        while (i < kjbIoCsihnW) {
            if (xQvY0dK[i] % (325 - 323) != (463 - 463)) {
                v[fln8ybDs] = xQvY0dK[i];
                fln8ybDs = fln8ybDs + 1;
                c1CF280Yy = c1CF280Yy + 1;
            }
            i++;
        };
    }
    M89ZLDbwX = (522 - 522);
    THTIlj8nz = (363 - 363);
    jvlYrXGs = c1CF280Yy;
    while (THTIlj8nz < jvlYrXGs) {
        {
            fln8ybDs = 633 - 633;
            while (fln8ybDs < c1CF280Yy) {
                if (v[fln8ybDs] > v[M89ZLDbwX]) {
                    M89ZLDbwX = fln8ybDs;
                }
                fln8ybDs++;
            };
        }
        if (M89ZLDbwX != c1CF280Yy - (700 - 699)) {
            E8geQqTIzWh = v[M89ZLDbwX];
            v[M89ZLDbwX] = v[c1CF280Yy - (240 - 239)];
            v[c1CF280Yy - (917 - 916)] = E8geQqTIzWh;
        }
        M89ZLDbwX = (348 - 348);
        c1CF280Yy = c1CF280Yy - 1;
        THTIlj8nz = THTIlj8nz +1;
    }
    {
        Cx8DzsN = 178 - 178;
        while (Cx8DzsN < jvlYrXGs) {
            if (Cx8DzsN < jvlYrXGs - (294 - 293)) {
                printf ("%d,", v[Cx8DzsN]);
            }
            else if (Cx8DzsN == jvlYrXGs - (387 - 386)) {
                printf ("%d", v[Cx8DzsN]);
            }
            Cx8DzsN = Cx8DzsN +1;
        };
    }
    return 0;
}

