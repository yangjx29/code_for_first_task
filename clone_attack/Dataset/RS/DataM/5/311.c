int main () {
    char dIj8PotRF [(1108 - 607)];
    char uBqhJD07C [(1266 - 765)];
    double  UCeLG76s, iF5YXj6q, f;
    int HsXTui56rZY;
    int Hu71tX3yOG;
    int wsOVM6ph;
    int qAXx9kNY;
    scanf ("%lf", &UCeLG76s);
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
    scanf ("%s", dIj8PotRF);
    HsXTui56rZY = strlen (dIj8PotRF);
    scanf ("%s", uBqhJD07C);
    Hu71tX3yOG = strlen (uBqhJD07C);
    wsOVM6ph = (92 - 92);
    if (!(Hu71tX3yOG == HsXTui56rZY)) {
        wsOVM6ph = wsOVM6ph + 1;
    }
    for (qAXx9kNY = 0; HsXTui56rZY > qAXx9kNY; qAXx9kNY = qAXx9kNY + 1) {
        if ((dIj8PotRF[qAXx9kNY] != 'A') && (!('T' == dIj8PotRF[qAXx9kNY])) && (!('C' == dIj8PotRF[qAXx9kNY])) && (!('G' == dIj8PotRF[qAXx9kNY])) || (!('A' == uBqhJD07C[qAXx9kNY])) && (uBqhJD07C[qAXx9kNY] != 'T') && (uBqhJD07C[qAXx9kNY] != 'C') && (uBqhJD07C[qAXx9kNY] != 'G')) {
            wsOVM6ph++;
        };
    }
    if (wsOVM6ph != 0) {
        printf ("error");
    }
    else {
        iF5YXj6q = 0;
        for (qAXx9kNY = 0; qAXx9kNY < HsXTui56rZY; qAXx9kNY++) {
            if (dIj8PotRF[qAXx9kNY] == uBqhJD07C[qAXx9kNY]) {
                iF5YXj6q = iF5YXj6q + 1;
            };
        }
        f = iF5YXj6q / HsXTui56rZY;
        if (f > UCeLG76s) {
            printf ("yes");
        }
        else {
        };
    }
    return 0;
}

