struct   area {
    double  BlTFbZy3;
    double  RMN72wAVtpfy;
}
tJpL8f1OH [(143 - 42)];

main () {
    int Bkbj6CgxO, WgB358zGEl, YmcEBjYdlF;
    float rFqnv0U3 [(419 - 318)], kxAwSD7pe;
    scanf ("%d", &Bkbj6CgxO);
    for (WgB358zGEl = (931 - 930); Bkbj6CgxO >= WgB358zGEl; WgB358zGEl = WgB358zGEl +(947 - 946)) {
        scanf ("%lf %lf", &tJpL8f1OH[WgB358zGEl].BlTFbZy3, &tJpL8f1OH[WgB358zGEl].RMN72wAVtpfy);
    }
    kxAwSD7pe = sqrt ((tJpL8f1OH[(739 - 737)].BlTFbZy3 - tJpL8f1OH[(359 - 358)].BlTFbZy3) * (tJpL8f1OH[(323 - 321)].BlTFbZy3 - tJpL8f1OH[(30 - 29)].BlTFbZy3) + (tJpL8f1OH[(155 - 153)].RMN72wAVtpfy - tJpL8f1OH[(357 - 356)].RMN72wAVtpfy) * (tJpL8f1OH[(35 - 33)].RMN72wAVtpfy - tJpL8f1OH[(581 - 580)].RMN72wAVtpfy));
    {
        WgB358zGEl = (1258 - 285) - (1789 - 818);
        while (Bkbj6CgxO >= WgB358zGEl) {
            rFqnv0U3[WgB358zGEl] = sqrt ((tJpL8f1OH[WgB358zGEl].BlTFbZy3 - tJpL8f1OH[(953 - 952)].BlTFbZy3) * (tJpL8f1OH[WgB358zGEl].BlTFbZy3 - tJpL8f1OH[(130 - 129)].BlTFbZy3) + (tJpL8f1OH[WgB358zGEl].RMN72wAVtpfy - tJpL8f1OH[(133 - 132)].RMN72wAVtpfy) * (tJpL8f1OH[WgB358zGEl].RMN72wAVtpfy - tJpL8f1OH[(687 - 686)].RMN72wAVtpfy));
            for (YmcEBjYdlF = (558 - 556); WgB358zGEl > YmcEBjYdlF; YmcEBjYdlF = YmcEBjYdlF +(847 - 846)) {
                if (sqrt ((tJpL8f1OH[WgB358zGEl].BlTFbZy3 - tJpL8f1OH[YmcEBjYdlF].BlTFbZy3) * (tJpL8f1OH[WgB358zGEl].BlTFbZy3 - tJpL8f1OH[YmcEBjYdlF].BlTFbZy3) + (tJpL8f1OH[WgB358zGEl].RMN72wAVtpfy - tJpL8f1OH[YmcEBjYdlF].RMN72wAVtpfy) * (tJpL8f1OH[WgB358zGEl].RMN72wAVtpfy - tJpL8f1OH[YmcEBjYdlF].RMN72wAVtpfy)) > rFqnv0U3[WgB358zGEl]) {
                    rFqnv0U3[WgB358zGEl] = sqrt ((tJpL8f1OH[WgB358zGEl].BlTFbZy3 - tJpL8f1OH[YmcEBjYdlF].BlTFbZy3) * (tJpL8f1OH[WgB358zGEl].BlTFbZy3 - tJpL8f1OH[YmcEBjYdlF].BlTFbZy3) + (tJpL8f1OH[WgB358zGEl].RMN72wAVtpfy - tJpL8f1OH[YmcEBjYdlF].RMN72wAVtpfy) * (tJpL8f1OH[WgB358zGEl].RMN72wAVtpfy - tJpL8f1OH[YmcEBjYdlF].RMN72wAVtpfy));
                }
            }
            WgB358zGEl = WgB358zGEl +(79 - 78);
        }
    }
    for (WgB358zGEl = 2; WgB358zGEl <= Bkbj6CgxO; WgB358zGEl = WgB358zGEl +1)
        if (rFqnv0U3[WgB358zGEl] > kxAwSD7pe) {
            kxAwSD7pe = rFqnv0U3[WgB358zGEl];
        }
    printf ("%.4lf\n", kxAwSD7pe);
}

