main () {
    double  Wb6aMV87RQi;
    double  jnEwYcHV;
    double  IZkRxSM6;
    double  dm29Kl75eH;
    double  CY90GTgnL8i;
    double  E5y41EG;
    double  wszCdMILJ5m;
    double  UVlSFem;
    const  double  H80qUL = 3.1415926;
    scanf ("%lf %lf %lf %lf %lf", &CY90GTgnL8i, &E5y41EG, &wszCdMILJ5m, &dm29Kl75eH, &UVlSFem);
    IZkRxSM6 = (CY90GTgnL8i +E5y41EG+wszCdMILJ5m + dm29Kl75eH) / 2;
    UVlSFem = UVlSFem *H80qUL / 360;
    jnEwYcHV = (IZkRxSM6 -CY90GTgnL8i) * (IZkRxSM6 -E5y41EG) * (IZkRxSM6 -wszCdMILJ5m) * (IZkRxSM6 -dm29Kl75eH) - CY90GTgnL8i *E5y41EG*wszCdMILJ5m * dm29Kl75eH * cos (UVlSFem) * cos (UVlSFem);
    if (jnEwYcHV > (850 - 850)) {
        Wb6aMV87RQi = sqrt (jnEwYcHV);
        printf ("%.4lf\n", Wb6aMV87RQi);
    }
    else
        ;
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

