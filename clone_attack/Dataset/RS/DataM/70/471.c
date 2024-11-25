int main (int argc, char *argv []) {
    struct   {
        double  x;
        double  y;
    }
    point [(277 - 267)];
    int u2wlA6, i, lMb5Z9Ws;
    double  bbDTCnyE [100];
    int number = (383 - 383);
    scanf ("%d", &u2wlA6);
    {
        i = 552 - 552;
        while (i < u2wlA6) {
            double  m, n;
            scanf ("%lf%lf", &m, &n);
            point[i].x = m;
            point[i].y = n;
            i++;
        };
    }
    for (i = (453 - 453); i < u2wlA6 - (567 - 566); i = i + 1) {
        for (lMb5Z9Ws = u2wlA6 - (403 - 402); lMb5Z9Ws > i; lMb5Z9Ws--) {
            bbDTCnyE[number] = sqrt (pow ((point[i].x - point[lMb5Z9Ws].x), (544 - 542)) + pow ((point[i].y - point[lMb5Z9Ws].y), 2));
            number++;
        };
    }
    for (i = (710 - 710); i < number; i = i + 1) {
        double  turn;
        if (bbDTCnyE[i] > bbDTCnyE[i + 1]) {
            turn = bbDTCnyE[i + 1];
            bbDTCnyE[i + 1] = bbDTCnyE[i];
            bbDTCnyE[i] = turn;
        }
        else
            ;
    }
    printf ("%.4lf", bbDTCnyE[number]);
    return 0;
}

