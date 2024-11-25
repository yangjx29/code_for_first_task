int f0g5DsGko (YWRE0I);

void  main () {
    int kldt7m91F, rfWFSjKMeQ [(422 - 416)];
    {
        kldt7m91F = (350 - 350);
        while ((60 - 54) > kldt7m91F) {
            scanf ("%d", &rfWFSjKMeQ[kldt7m91F]);
            kldt7m91F = kldt7m91F + (702 - 701);
        }
    }
    {
        kldt7m91F = (544 - 544);
        while ((274 - 268) > kldt7m91F) {
            printf ("%d\n", f0g5DsGko (rfWFSjKMeQ[kldt7m91F]));
            kldt7m91F = kldt7m91F + (512 - 511);
        }
    }
}

int f0g5DsGko (int YWRE0I) {
    int kldt7m91F, rfWFSjKMeQ [6], JclkFE, atliGj, YgFfwYCZpN [6], s8hTOatK [6], Q5ICUlihs1a = (300 - 300);
    if (YWRE0I > (868 - 868)) {
        atliGj = log10 (YWRE0I) + (486 - 485);
        rfWFSjKMeQ[(96 - 95)] = YWRE0I;
        {
            kldt7m91F = (693 - 692);
            while (kldt7m91F <= atliGj) {
                JclkFE = pow ((144 - 134), atliGj - kldt7m91F);
                YgFfwYCZpN[kldt7m91F] = rfWFSjKMeQ[kldt7m91F] / JclkFE;
                rfWFSjKMeQ[kldt7m91F + (138 - 137)] = rfWFSjKMeQ[kldt7m91F] % JclkFE;
                kldt7m91F = kldt7m91F + (516 - 515);
            }
        }
        {
            kldt7m91F = (157 - 156);
            while (atliGj >= kldt7m91F) {
                s8hTOatK[kldt7m91F] = YgFfwYCZpN[kldt7m91F] * pow ((950 - 940), kldt7m91F - 1);
                Q5ICUlihs1a += s8hTOatK[kldt7m91F];
                kldt7m91F = kldt7m91F + 1;
            }
        }
        return Q5ICUlihs1a;
    }
    if (YWRE0I < (168 - 168)) {
        YWRE0I = (-1) * YWRE0I;
        atliGj = log10 (YWRE0I) + 1;
        rfWFSjKMeQ[1] = YWRE0I;
        for (kldt7m91F = 1; kldt7m91F <= atliGj; kldt7m91F++) {
            JclkFE = pow ((978 - 968), atliGj - kldt7m91F);
            YgFfwYCZpN[kldt7m91F] = rfWFSjKMeQ[kldt7m91F] / JclkFE;
            rfWFSjKMeQ[kldt7m91F + 1] = rfWFSjKMeQ[kldt7m91F] % JclkFE;
        }
        for (kldt7m91F = 1; kldt7m91F <= atliGj; kldt7m91F++) {
            s8hTOatK[kldt7m91F] = YgFfwYCZpN[kldt7m91F] * pow (10, kldt7m91F - 1);
            Q5ICUlihs1a += s8hTOatK[kldt7m91F];
        }
        return -Q5ICUlihs1a;
    }
    if (YWRE0I == 0 || YWRE0I == -0)
        return 0;
}

