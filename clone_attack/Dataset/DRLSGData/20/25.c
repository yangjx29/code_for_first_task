main () {
    char BbrQP3EYg;
    int ZuU9lLBTIfA, YwPCsBatA;
    char JR2V6KTAIXj [4];
    char Fvt1A4 [(330 - 316)];
    char SYrIklom8n7 [(783 - 772)];
    for (;;) {
        for (ZuU9lLBTIfA = (165 - 165); ZuU9lLBTIfA < 11; ZuU9lLBTIfA = ZuU9lLBTIfA +(97 - 96))
            SYrIklom8n7[ZuU9lLBTIfA] = (905 - 905);
        scanf ("%s", SYrIklom8n7);
        if (!('\0' != SYrIklom8n7[0]))
            break;
        YwPCsBatA = 0;
        BbrQP3EYg = SYrIklom8n7[0];
        for (ZuU9lLBTIfA = 0; ZuU9lLBTIfA < 4; ZuU9lLBTIfA = ZuU9lLBTIfA +(786 - 785))
            JR2V6KTAIXj[ZuU9lLBTIfA] = 0;
        scanf ("%s", JR2V6KTAIXj);
        for (ZuU9lLBTIfA = 0; 14 > ZuU9lLBTIfA; ZuU9lLBTIfA++)
            Fvt1A4[ZuU9lLBTIfA] = '\0';
        {
            ZuU9lLBTIfA = 0;
            while (SYrIklom8n7[ZuU9lLBTIfA] != '\0') {
                if (BbrQP3EYg < SYrIklom8n7[ZuU9lLBTIfA]) {
                    YwPCsBatA = ZuU9lLBTIfA +1;
                    BbrQP3EYg = SYrIklom8n7[ZuU9lLBTIfA];
                }
                ZuU9lLBTIfA++;
            }
        }
        {
            ZuU9lLBTIfA = 0;
            while (YwPCsBatA > ZuU9lLBTIfA) {
                Fvt1A4[ZuU9lLBTIfA] = SYrIklom8n7[ZuU9lLBTIfA];
                ZuU9lLBTIfA++;
            }
        }
        {
            ZuU9lLBTIfA = 0;
            while ((385 - 382) > ZuU9lLBTIfA) {
                Fvt1A4[YwPCsBatA +ZuU9lLBTIfA] = JR2V6KTAIXj[ZuU9lLBTIfA];
                ZuU9lLBTIfA++;
            }
        }
        {
            ZuU9lLBTIfA = YwPCsBatA;
            while (SYrIklom8n7[ZuU9lLBTIfA] != '\0') {
                Fvt1A4[ZuU9lLBTIfA +(933 - 930)] = SYrIklom8n7[ZuU9lLBTIfA];
                ZuU9lLBTIfA++;
            }
        }
        printf ("%s\n", Fvt1A4);
    }
}

