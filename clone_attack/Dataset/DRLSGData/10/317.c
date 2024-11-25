void  main () {
    int w8jwqA;
    int Memp2NjM [(316 - 291)];
    int Il9NAp;
    int mBKey7ujS;
    int Wy8IeEQZ;
    int HTezp3K5Xu [(790 - 765)];
    int Kz03GSbt;
    Wy8IeEQZ = (402 - 402);
    scanf ("%d", &mBKey7ujS);
    for (w8jwqA = (276 - 276); mBKey7ujS > w8jwqA; w8jwqA = w8jwqA + 1) {
        scanf ("%d", &Memp2NjM[w8jwqA]);
        for (Kz03GSbt = (665 - 665), Il9NAp = (395 - 395); Kz03GSbt < w8jwqA; Kz03GSbt = Kz03GSbt +(268 - 267)) {
            if (Memp2NjM[w8jwqA] <= Memp2NjM[Kz03GSbt]) {
                if (HTezp3K5Xu[Kz03GSbt] > Il9NAp)
                    Il9NAp = HTezp3K5Xu[Kz03GSbt];
            }
        }
        HTezp3K5Xu[w8jwqA] = (599 - 598) + Il9NAp;
        if (HTezp3K5Xu[w8jwqA] > Wy8IeEQZ)
            Wy8IeEQZ = HTezp3K5Xu[w8jwqA];
    }
    printf ("%d", Wy8IeEQZ);
}

