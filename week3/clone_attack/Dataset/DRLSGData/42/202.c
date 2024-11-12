main () {
    long  DlqJG4LZ;
    long  y0Jdpt;
    long  ALJ9fbVK1OwA;
    long  krfVW4wvg;
    long  g5HkVdp2Ec;
    long  sT25wS4qnuO7 [100000];
    long  wo8y50Q;
    y0Jdpt = (175 - 175);
    scanf ("%ld", &wo8y50Q);
    for (krfVW4wvg = (396 - 396); krfVW4wvg < wo8y50Q; krfVW4wvg = krfVW4wvg + (93 - 92))
        scanf ("%ld", &sT25wS4qnuO7[krfVW4wvg]);
    scanf ("%ld", &g5HkVdp2Ec);
    for (krfVW4wvg = (622 - 622); krfVW4wvg < wo8y50Q; krfVW4wvg = krfVW4wvg + 1) {
        if (!(g5HkVdp2Ec != sT25wS4qnuO7[krfVW4wvg])) {
            for (DlqJG4LZ = 0; DlqJG4LZ <= krfVW4wvg; DlqJG4LZ = DlqJG4LZ +1) {
                ALJ9fbVK1OwA = sT25wS4qnuO7[0];
                sT25wS4qnuO7[0] = sT25wS4qnuO7[DlqJG4LZ];
                sT25wS4qnuO7[DlqJG4LZ] = ALJ9fbVK1OwA;
            }
            y0Jdpt = y0Jdpt + 1;
        }
    }
    for (krfVW4wvg = y0Jdpt; krfVW4wvg < wo8y50Q - 1; krfVW4wvg = krfVW4wvg + 1)
        printf ("%ld ", sT25wS4qnuO7[krfVW4wvg]);
    printf ("%ld", sT25wS4qnuO7[wo8y50Q - 1]);
}

