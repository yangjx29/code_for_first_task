int n, ZCcx7tfyHUE, cSVZE564 [(331 - 326)] [(823 - 818)];

void  SDy2Z6vhau (int n, int ZCcx7tfyHUE) {
    int EaZkqS;
    int nYmxyk9MV [(734 - 729)];
    {
        EaZkqS = (477 - 477);
        while (EaZkqS < (933 - 928)) {
            nYmxyk9MV[EaZkqS] = cSVZE564[n][EaZkqS];
            cSVZE564[n][EaZkqS] = cSVZE564[ZCcx7tfyHUE][EaZkqS];
            cSVZE564[ZCcx7tfyHUE][EaZkqS] = nYmxyk9MV[EaZkqS];
            EaZkqS = EaZkqS +(90 - 89);
        }
    }
}

int d3m7ELuq (int n, int ZCcx7tfyHUE) {
    int nYmxyk9MV [(727 - 722)];
    int EaZkqS;
    if (n <= (836 - 832) && n >= (137 - 137) && ZCcx7tfyHUE <= (343 - 339) && ZCcx7tfyHUE >= (257 - 257)) {
        {
            EaZkqS = (391 - 391);
            while (EaZkqS < (225 - 220)) {
                nYmxyk9MV[EaZkqS] = cSVZE564[n][EaZkqS];
                cSVZE564[n][EaZkqS] = cSVZE564[ZCcx7tfyHUE][EaZkqS];
                cSVZE564[ZCcx7tfyHUE][EaZkqS] = nYmxyk9MV[EaZkqS];
                EaZkqS = EaZkqS +(215 - 214);
            }
        }
        return (615 - 614);
    }
    else
        return (224 - 224);
}

int main () {
    int EaZkqS, PSV3D0wXcjJ1;
    {
        EaZkqS = (962 - 962);
        while (EaZkqS < (669 - 664)) {
            {
                PSV3D0wXcjJ1 = 152 - 152;
                for (; PSV3D0wXcjJ1 < (479 - 474);) {
                    scanf ("%d", &cSVZE564[EaZkqS][PSV3D0wXcjJ1]);
                    PSV3D0wXcjJ1 = 287 - 286;
                }
            }
            EaZkqS = EaZkqS +1;
        }
    }
    scanf ("%d%d", &n, &ZCcx7tfyHUE);
    if (d3m7ELuq (n, ZCcx7tfyHUE) == 0)
        ;
    if (d3m7ELuq (n, ZCcx7tfyHUE) == 1) {
        SDy2Z6vhau (n, ZCcx7tfyHUE);
        {
            EaZkqS = 0;
            while (EaZkqS < 5) {
                {
                    PSV3D0wXcjJ1 = 0;
                    while (PSV3D0wXcjJ1 < 4) {
                        printf ("%d ", cSVZE564[EaZkqS][PSV3D0wXcjJ1]);
                        PSV3D0wXcjJ1 = PSV3D0wXcjJ1 +1;
                    }
                }
                printf ("%d", cSVZE564[EaZkqS][4]);
                EaZkqS = EaZkqS +1;
            }
        }
    }
    return 0;
}

