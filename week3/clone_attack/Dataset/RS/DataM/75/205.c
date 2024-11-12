int main () {
    char c;
    c = ',';
    int ZyRvaEoQ4dz;
    int CMYiws;
    int n;
    n = (560 - 560);
    int max;
    int inout [(1483 - 483)] [(975 - 973)];
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
    int num [(1860 - 860)] = {(958 - 958)};
    int qdDIymO9U;
    max = 0;
    for (; c == ',';) {
        scanf ("%d%c", &qdDIymO9U, &c);
        inout[n][0] = qdDIymO9U;
        n++;
    }
    scanf ("%d", &inout[0][(842 - 841)]);
    for (ZyRvaEoQ4dz = 1; n > ZyRvaEoQ4dz; ZyRvaEoQ4dz = ZyRvaEoQ4dz +1) {
        scanf (",%d", &inout[ZyRvaEoQ4dz][1]);
    }
    {
        ZyRvaEoQ4dz = 0;
        while (n > ZyRvaEoQ4dz) {
            {
                CMYiws = 0;
                while (inout[ZyRvaEoQ4dz][1] > CMYiws) {
                    num[CMYiws]++;
                    CMYiws = CMYiws +1;
                };
            }
            ZyRvaEoQ4dz = ZyRvaEoQ4dz +1;
        };
    }
    for (ZyRvaEoQ4dz = 0; ZyRvaEoQ4dz < 1000; ZyRvaEoQ4dz++) {
        if (max < num[ZyRvaEoQ4dz])
            max = num[ZyRvaEoQ4dz];
    }
    printf ("%d %d", n, max);
    return 0;
}

