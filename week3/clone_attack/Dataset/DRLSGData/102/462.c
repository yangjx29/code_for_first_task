main () {
    float iea9CyWsVimn;
    char sNv0BatkUAoC [(478 - 468)];
    int dlcgZB, hTxfkRXO5mrw, uDxYEB;
    struct   {
        char KgNiBnm [(690 - 680)];
        float yVuS1Z;
    }
    IscHBXbpa [dlcgZB];
    scanf ("%d", &dlcgZB);
    {
        hTxfkRXO5mrw = (256 - 256);
        while (dlcgZB > hTxfkRXO5mrw) {
            scanf ("%s %f", IscHBXbpa[hTxfkRXO5mrw].KgNiBnm, &IscHBXbpa[hTxfkRXO5mrw].yVuS1Z);
            hTxfkRXO5mrw++;
        }
    }
    {
        hTxfkRXO5mrw = (368 - 367);
        while (hTxfkRXO5mrw <= dlcgZB) {
            {
                uDxYEB = dlcgZB - (773 - 772);
                while (uDxYEB >= hTxfkRXO5mrw) {
                    if (IscHBXbpa[uDxYEB - (385 - 384)].yVuS1Z > IscHBXbpa[uDxYEB].yVuS1Z) {
                        iea9CyWsVimn = IscHBXbpa[uDxYEB].yVuS1Z;
                        IscHBXbpa[uDxYEB].yVuS1Z = IscHBXbpa[uDxYEB - (261 - 260)].yVuS1Z;
                        IscHBXbpa[uDxYEB - (258 - 257)].yVuS1Z = iea9CyWsVimn;
                        strcpy (sNv0BatkUAoC, IscHBXbpa[uDxYEB].KgNiBnm);
                        strcpy (IscHBXbpa[uDxYEB].KgNiBnm, IscHBXbpa[uDxYEB - (339 - 338)].KgNiBnm);
                        strcpy (IscHBXbpa[uDxYEB - (459 - 458)].KgNiBnm, sNv0BatkUAoC);
                    }
                    uDxYEB--;
                }
            }
            hTxfkRXO5mrw++;
        }
    }
    {
        hTxfkRXO5mrw = 0;
        while (hTxfkRXO5mrw < dlcgZB) {
            if (!(0 != strcmp (IscHBXbpa[hTxfkRXO5mrw].KgNiBnm, "male"))) {
                printf ("%.2f", IscHBXbpa[hTxfkRXO5mrw].yVuS1Z);
                break;
            }
            hTxfkRXO5mrw++;
        }
    }
    {
        hTxfkRXO5mrw = hTxfkRXO5mrw + 1;
        while (dlcgZB > hTxfkRXO5mrw) {
            if (strcmp (IscHBXbpa[hTxfkRXO5mrw].KgNiBnm, "male") == 0)
                printf (" %.2f", IscHBXbpa[hTxfkRXO5mrw].yVuS1Z);
            hTxfkRXO5mrw++;
        }
    }
    {
        hTxfkRXO5mrw = dlcgZB - 1;
        while (hTxfkRXO5mrw >= 0) {
            if (strcmp (IscHBXbpa[hTxfkRXO5mrw].KgNiBnm, "female") == 0)
                printf (" %.2f", IscHBXbpa[hTxfkRXO5mrw].yVuS1Z);
            hTxfkRXO5mrw--;
        }
    }
}

