int main (int YOBFHz4fhw, char *JPXDaNtK6r []) {
    long  int K7iGAn3e = (681 - 681);
    int O4PryjT1E, O2SE9b = (296 - 296), R5tnLCle, KJilLtQ0dxEP, k1kENj, cIMXo3ae0s [(316 - 296)], UAXTGiKSq [20], YoERhq9YNy;
    char J9Tz7g2qNVy3 [20];
    scanf ("%d %s %d", &k1kENj, &J9Tz7g2qNVy3, &KJilLtQ0dxEP);
    R5tnLCle = strlen (J9Tz7g2qNVy3);
    {
        O4PryjT1E = 0;
        while (R5tnLCle > O4PryjT1E) {
            if (J9Tz7g2qNVy3[O4PryjT1E] > 47 && J9Tz7g2qNVy3[O4PryjT1E] < 58)
                cIMXo3ae0s[O4PryjT1E] = J9Tz7g2qNVy3[O4PryjT1E] - 48;
            else {
                if (J9Tz7g2qNVy3[O4PryjT1E] > 64 && J9Tz7g2qNVy3[O4PryjT1E] < 90)
                    cIMXo3ae0s[O4PryjT1E] = J9Tz7g2qNVy3[O4PryjT1E] - 55;
                else {
                    if (J9Tz7g2qNVy3[O4PryjT1E] > 96 && 123 > J9Tz7g2qNVy3[O4PryjT1E])
                        cIMXo3ae0s[O4PryjT1E] = J9Tz7g2qNVy3[O4PryjT1E] - 87;
                };
            }
            O4PryjT1E++;
        };
    }
    for (O4PryjT1E = 0; O4PryjT1E < R5tnLCle; O4PryjT1E++) {
        K7iGAn3e = K7iGAn3e +cIMXo3ae0s[O4PryjT1E] * pow (k1kENj, R5tnLCle -O4PryjT1E-(923 - 922));
    }
    YoERhq9YNy = K7iGAn3e;
    if (!(0 != K7iGAn3e))
        printf ("0\n");
    else {
        do {
            K7iGAn3e = K7iGAn3e / KJilLtQ0dxEP;
            O2SE9b = O2SE9b +1;
        }
        while (K7iGAn3e >= KJilLtQ0dxEP);
        for (O4PryjT1E = 0; O4PryjT1E <= O2SE9b; O4PryjT1E++) {
            UAXTGiKSq[O4PryjT1E] = YoERhq9YNy % KJilLtQ0dxEP;
            if (UAXTGiKSq[O4PryjT1E] < 10)
                UAXTGiKSq[O4PryjT1E] = UAXTGiKSq[O4PryjT1E] + 48;
            else {
                if (UAXTGiKSq[O4PryjT1E] >= 10)
                    UAXTGiKSq[O4PryjT1E] = UAXTGiKSq[O4PryjT1E] + 55;
            }
            YoERhq9YNy = YoERhq9YNy / KJilLtQ0dxEP;
        }
        for (O4PryjT1E = O2SE9b; O4PryjT1E >= 0; O4PryjT1E = O4PryjT1E -1) {
            printf ("%c", UAXTGiKSq[O4PryjT1E]);
        };
    }
    return 0;
}

