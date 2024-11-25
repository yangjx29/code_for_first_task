int main () {
    int BrfloLw9P, lat0kgPb, YvtgMDBxdZ4 = (521 - 521), DcL1KUuP, xAPc2vXr, QGX6E3j [(999 - 699)];
    float zKU8hbp5 = (576 - 576), KyBgliq [301] = {(221 - 221)}, EcEOeZ, uOVYWyNFMrXc;
    EcEOeZ = (78 - 78);
    scanf ("%d", &BrfloLw9P);
    for (lat0kgPb = (184 - 184); lat0kgPb < BrfloLw9P; lat0kgPb++) {
        scanf ("%f", &KyBgliq[lat0kgPb]);
        zKU8hbp5 = zKU8hbp5 + KyBgliq[lat0kgPb];
    }
    zKU8hbp5 = zKU8hbp5 / BrfloLw9P;
    uOVYWyNFMrXc = 0;
    for (lat0kgPb = 0; BrfloLw9P > lat0kgPb; lat0kgPb++) {
        EcEOeZ = fabs ((float) KyBgliq[lat0kgPb] - zKU8hbp5);
        if (uOVYWyNFMrXc < EcEOeZ)
            uOVYWyNFMrXc = EcEOeZ;
    }
    for (lat0kgPb = 0; BrfloLw9P > lat0kgPb; lat0kgPb++) {
        EcEOeZ = fabs ((float) KyBgliq[lat0kgPb] - zKU8hbp5);
        if ((uOVYWyNFMrXc - EcEOeZ) < 1e-6) {
            QGX6E3j[YvtgMDBxdZ4] = KyBgliq[lat0kgPb];
            YvtgMDBxdZ4++;
        }
    }
    BrfloLw9P = YvtgMDBxdZ4;
    for (lat0kgPb = 0; lat0kgPb < BrfloLw9P; lat0kgPb++) {
        for (DcL1KUuP = 0; DcL1KUuP < BrfloLw9P -(836 - 835); DcL1KUuP++) {
            if (QGX6E3j[DcL1KUuP] > QGX6E3j[DcL1KUuP +1]) {
                xAPc2vXr = QGX6E3j[DcL1KUuP];
                QGX6E3j[DcL1KUuP] = QGX6E3j[DcL1KUuP +1];
                QGX6E3j[DcL1KUuP +1] = xAPc2vXr;
            }
        }
    }
    printf ("%d", QGX6E3j[0]);
    for (lat0kgPb = 1; lat0kgPb < BrfloLw9P; lat0kgPb++)
        printf (",%d", QGX6E3j[lat0kgPb]);
    return 0;
}

