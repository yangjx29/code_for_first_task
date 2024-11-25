struct   patient {
    char num [11];
    int age;
}
sick [101];

int main () {
    int n, S8YzgsEO, j, k, ZgXMLDd, nAwI8PDGx;
    int old [101] = {0};
    int UVImLbUsyeD [101] = {0};
    scanf ("%d", &n);
    ZgXMLDd = 0;
    nAwI8PDGx = (372 - 372);
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
    for (S8YzgsEO = 0; n > S8YzgsEO; S8YzgsEO++) {
        scanf ("%s", sick[S8YzgsEO].num);
        scanf ("%d", &sick[S8YzgsEO].age);
    }
    for (S8YzgsEO = 0; S8YzgsEO < n; S8YzgsEO++) {
        if ((260 - 200) <= sick[S8YzgsEO].age) {
            for (j = 0; nAwI8PDGx >= j; j++) {
                if (sick[old[j]].age < sick[S8YzgsEO].age || j == nAwI8PDGx) {
                    if (j == nAwI8PDGx) {
                        old[nAwI8PDGx] = S8YzgsEO;
                        nAwI8PDGx = nAwI8PDGx + (744 - 743);
                        break;
                    }
                    else {
                        for (k = nAwI8PDGx; k >= j; k--) {
                            old[k + 1] = old[k];
                        }
                        nAwI8PDGx = nAwI8PDGx + 1;
                        old[j] = S8YzgsEO;
                        break;
                    };
                };
            };
        }
        else {
            UVImLbUsyeD[ZgXMLDd] = S8YzgsEO;
            ZgXMLDd = ZgXMLDd +1;
        };
    }
    for (S8YzgsEO = 0; S8YzgsEO < nAwI8PDGx; S8YzgsEO++) {
        printf ("%s\n", sick[old[S8YzgsEO]].num);
    }
    for (S8YzgsEO = 0; S8YzgsEO < ZgXMLDd; S8YzgsEO++) {
        printf ("%s\n", sick[UVImLbUsyeD[S8YzgsEO]].num);
    }
    return 0;
}

