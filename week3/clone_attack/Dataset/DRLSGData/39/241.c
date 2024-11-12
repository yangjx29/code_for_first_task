struct   {
    char k62e1UsY [20];
    int hVlWGm;
    int banji;
    char UqXrJCKPz;
    char QTHr6qyOai;
    int J4r05Qt;
}
OhgQrJ1 [101];

void  main () {
    int Eg3FhVrWcbo;
    int WbpBsuVIkZ;
    int R0bZyI8;
    int uQk6edsJ0wX;
    int gB25fE8IO;
    int bO5uoia8J [101] = {0};
    Eg3FhVrWcbo = 0;
    WbpBsuVIkZ = 0;
    R0bZyI8 = 0;
    Eg3FhVrWcbo = 0;
    scanf ("%d", &uQk6edsJ0wX);
    {
        gB25fE8IO = 0;
        while (gB25fE8IO < uQk6edsJ0wX) {
            scanf ("%s %d %d %c %c %d", OhgQrJ1[gB25fE8IO].k62e1UsY, &OhgQrJ1[gB25fE8IO].hVlWGm, &OhgQrJ1[gB25fE8IO].banji, &OhgQrJ1[gB25fE8IO].UqXrJCKPz, &OhgQrJ1[gB25fE8IO].QTHr6qyOai, &OhgQrJ1[gB25fE8IO].J4r05Qt);
            gB25fE8IO++;
        }
    }
    {
        gB25fE8IO = 0;
        while (gB25fE8IO < uQk6edsJ0wX) {
            if (OhgQrJ1[gB25fE8IO].hVlWGm > 80 && OhgQrJ1[gB25fE8IO].J4r05Qt > 0)
                bO5uoia8J[gB25fE8IO] += 8000;
            if (85 < OhgQrJ1[gB25fE8IO].hVlWGm && OhgQrJ1[gB25fE8IO].banji > 80)
                bO5uoia8J[gB25fE8IO] += 4000;
            if (90 < OhgQrJ1[gB25fE8IO].hVlWGm)
                bO5uoia8J[gB25fE8IO] += 2000;
            if (OhgQrJ1[gB25fE8IO].hVlWGm > 85 && OhgQrJ1[gB25fE8IO].QTHr6qyOai == 'Y')
                bO5uoia8J[gB25fE8IO] += 1000;
            if (OhgQrJ1[gB25fE8IO].banji > 80 && OhgQrJ1[gB25fE8IO].UqXrJCKPz == 'Y')
                bO5uoia8J[gB25fE8IO] += 850;
            gB25fE8IO++;
        }
    }
    for (gB25fE8IO = 0; gB25fE8IO < uQk6edsJ0wX; gB25fE8IO++) {
        if (bO5uoia8J[gB25fE8IO] > Eg3FhVrWcbo) {
            Eg3FhVrWcbo = bO5uoia8J[gB25fE8IO];
            WbpBsuVIkZ = gB25fE8IO;
        }
        R0bZyI8 = R0bZyI8 +bO5uoia8J[gB25fE8IO];
    }
    printf ("%s\n%d\n%d\n", OhgQrJ1[WbpBsuVIkZ].k62e1UsY, bO5uoia8J[WbpBsuVIkZ], R0bZyI8);
}

