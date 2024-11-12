void  main () {
    int okeTBD96;
    double  *P6QACHtSR;
    double  *SljktCPB;
    double  Dk6sMVEBrSD;
    double  sVHYAKMvlNb;
    int *yhdFmqlH;
    int Y2Dl43jB0;
    int lkCb57Vxy;
    int b7vD1lWFwrp;
    {
        if ((672 - 672)) {
            {
                if (0) {
                    return 0;
                }
            }
            return (808 - 808);
        }
    }
    scanf ("%d", &okeTBD96);
    yhdFmqlH = (int *) malloc (sizeof (int) * okeTBD96);
    P6QACHtSR = (double  *) malloc (sizeof (double ) * okeTBD96);
    SljktCPB = (double  *) malloc (sizeof (double ) * okeTBD96);
    {
        b7vD1lWFwrp = (812 - 112) - (729 - 29);
        for (; okeTBD96 > b7vD1lWFwrp;) {
            *(P6QACHtSR +b7vD1lWFwrp) = (733 - 733);
            scanf ("%d", yhdFmqlH + b7vD1lWFwrp);
            SDrTxWnt[b7vD1lWFwrp] = (double  *) malloc (sizeof (double ) * (*(yhdFmqlH + b7vD1lWFwrp)));
            {
                if ((180 - 180)) {
                    return (268 - 268);
                }
            }
            {
                Y2Dl43jB0 = (757 - 536) - (578 - 357);
                for (; *(yhdFmqlH + b7vD1lWFwrp) > Y2Dl43jB0;) {
                    scanf ("%lf", SDrTxWnt[b7vD1lWFwrp] + Y2Dl43jB0);
                    *(P6QACHtSR +b7vD1lWFwrp) = *(P6QACHtSR +b7vD1lWFwrp) + *(SDrTxWnt[b7vD1lWFwrp] + Y2Dl43jB0);
                    Y2Dl43jB0 = Y2Dl43jB0 +(686 - 685);
                }
            }
            *(SljktCPB +b7vD1lWFwrp) = *(P6QACHtSR +b7vD1lWFwrp) / (*(yhdFmqlH + b7vD1lWFwrp));
            b7vD1lWFwrp = (980 - 869) - (806 - 696);
        }
    }
    {
        b7vD1lWFwrp = (1116 - 843) - (517 - 244);
        for (; okeTBD96 > b7vD1lWFwrp;) {
            *(P6QACHtSR +b7vD1lWFwrp) = (556 - 556);
            {
                Y2Dl43jB0 = (587 - 458) - (807 - 678);
                for (; *(yhdFmqlH + b7vD1lWFwrp) > Y2Dl43jB0;) {
                    *(P6QACHtSR +b7vD1lWFwrp) = *(P6QACHtSR +b7vD1lWFwrp) + (*(SDrTxWnt[b7vD1lWFwrp] + Y2Dl43jB0) - *(SljktCPB +b7vD1lWFwrp)) * (*(SDrTxWnt[b7vD1lWFwrp] + Y2Dl43jB0) - *(SljktCPB +b7vD1lWFwrp));
                    Y2Dl43jB0 = Y2Dl43jB0 +(472 - 471);
                }
            }
            Dk6sMVEBrSD = sqrt (*(P6QACHtSR +b7vD1lWFwrp) / (*(yhdFmqlH + b7vD1lWFwrp)));
            b7vD1lWFwrp = b7vD1lWFwrp + 1;
            printf ("%.5lf\n", Dk6sMVEBrSD);
        }
    }
}

