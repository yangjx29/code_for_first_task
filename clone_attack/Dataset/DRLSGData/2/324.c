int main () {
    int kvuroIhF;
    int ZWn2Ibc;
    char QzeGXA [(1407 - 407)] [26];
    int WfIgxjHKJom [1000];
    int J1rWASi [1000];
    int z4XcF8lbnD69;
    int LONDZ8;
    int gNQSToq3f;
    char KfjmUKlx8 [(286 - 158)];
    int Yn57N2oQl4 [(306 - 178)];
    scanf ("%d", &z4XcF8lbnD69);
    kvuroIhF = 0;
    for (LONDZ8 = (696 - 696); LONDZ8 < (165 - 37); LONDZ8 = LONDZ8 +(493 - 492))
        Yn57N2oQl4[LONDZ8] = (986 - 986);
    for (gNQSToq3f = 0; gNQSToq3f < z4XcF8lbnD69; gNQSToq3f = gNQSToq3f + (106 - 105)) {
        gets (QzeGXA [gNQSToq3f]);
        scanf ("\n%d", &J1rWASi[gNQSToq3f]);
        WfIgxjHKJom[gNQSToq3f] = strlen (QzeGXA[gNQSToq3f]);
    }
    {
        gNQSToq3f = 0;
        for (; gNQSToq3f < z4XcF8lbnD69;) {
            {
                LONDZ8 = (200 - 199);
                for (; LONDZ8 < WfIgxjHKJom[gNQSToq3f];) {
                    ZWn2Ibc = QzeGXA[gNQSToq3f][LONDZ8];
                    KfjmUKlx8[ZWn2Ibc] = QzeGXA[gNQSToq3f][LONDZ8];
                    Yn57N2oQl4[ZWn2Ibc]++;
                    LONDZ8 = LONDZ8 +1;
                }
            }
            gNQSToq3f = gNQSToq3f + 1;
        }
    }
    {
        LONDZ8 = 0;
        for (; LONDZ8 < 128;) {
            if (Yn57N2oQl4[LONDZ8] > kvuroIhF) {
                kvuroIhF = Yn57N2oQl4[LONDZ8];
                ZWn2Ibc = LONDZ8;
            }
            LONDZ8 = LONDZ8 +1;
        }
    }
    printf ("%c\n%d", KfjmUKlx8[ZWn2Ibc], kvuroIhF);
    {
        gNQSToq3f = 0;
        for (; z4XcF8lbnD69 > gNQSToq3f;) {
            {
                LONDZ8 = 1;
                for (; LONDZ8 < WfIgxjHKJom[gNQSToq3f];) {
                    if (QzeGXA[gNQSToq3f][LONDZ8] == KfjmUKlx8[ZWn2Ibc])
                        printf ("\n%d", J1rWASi[gNQSToq3f]);
                    LONDZ8 = LONDZ8 +1;
                }
            }
            gNQSToq3f = gNQSToq3f + 1;
        }
    }
    return 0;
}

