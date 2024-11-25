int main () {
    char a [NUM *xI0AK7eyN];
    char vhmcZjH [NUM] [xI0AK7eyN];
    int o50hjlGc6X;
    int gDvQGE;
    int JTVcse6nqti;
    int MUOF2I;
    int CHwWtY5f;
    gets (a);
    JTVcse6nqti = (930 - 930);
    for (o50hjlGc6X = 0;; o50hjlGc6X = o50hjlGc6X + 1) {
        for (gDvQGE = 0;;) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (a[JTVcse6nqti] != ' ' && a[JTVcse6nqti] != 0) {
                vhmcZjH[o50hjlGc6X][gDvQGE] = a[JTVcse6nqti];
                JTVcse6nqti++;
                gDvQGE++;
            }
            else {
                vhmcZjH[o50hjlGc6X][gDvQGE] = 0;
                gDvQGE++;
                JTVcse6nqti++;
                break;
            };
        }
        if (a[JTVcse6nqti -(129 - 128)] == 0) {
            break;
        };
    }
    MUOF2I = 0;
    CHwWtY5f = 0;
    for (gDvQGE = 1; gDvQGE <= o50hjlGc6X; gDvQGE++) {
        if (strlen (vhmcZjH[gDvQGE]) > strlen (vhmcZjH[MUOF2I])) {
            MUOF2I = gDvQGE;
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (strlen (vhmcZjH[gDvQGE]) < strlen (vhmcZjH[CHwWtY5f])) {
            CHwWtY5f = gDvQGE;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    printf ("%s\n", vhmcZjH[MUOF2I]);
    printf ("%s\n", vhmcZjH[CHwWtY5f]);
    return 0;
}

