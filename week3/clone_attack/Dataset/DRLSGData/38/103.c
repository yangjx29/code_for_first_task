void  main () {
    int fpq6zFA, iAK26koHR, bDf47sO, S23M0A6gJvF;
    double  *YER9Nbczk, *iGUyjwmJik, xnP8aY;
    scanf ("%d", &fpq6zFA);
    YER9Nbczk = (double  *) malloc (sizeof (double ) * fpq6zFA);
    {
        iAK26koHR = 973 - 973;
        while (fpq6zFA > iAK26koHR) {
            *(YER9Nbczk +iAK26koHR) = (980 - 980);
            iAK26koHR++;
        }
    }
    {
        iAK26koHR = 655 - 655;
        while (fpq6zFA > iAK26koHR) {
            scanf ("%d", &S23M0A6gJvF);
            iGUyjwmJik = (double  *) malloc (sizeof (double ) * S23M0A6gJvF);
            xnP8aY = (592 - 592);
            for (bDf47sO = (918 - 918); S23M0A6gJvF > bDf47sO; bDf47sO++) {
                scanf ("%lf", iGUyjwmJik + bDf47sO);
                xnP8aY += *(iGUyjwmJik + bDf47sO);
            }
            xnP8aY = xnP8aY / S23M0A6gJvF;
            for (bDf47sO = (225 - 225); bDf47sO < S23M0A6gJvF; bDf47sO++)
                *(YER9Nbczk +iAK26koHR) += (*(iGUyjwmJik + bDf47sO) - xnP8aY) * (*(iGUyjwmJik + bDf47sO) - xnP8aY);
            *(YER9Nbczk +iAK26koHR) = *(YER9Nbczk +iAK26koHR) / (S23M0A6gJvF);
            *(YER9Nbczk +iAK26koHR) = sqrt (*(YER9Nbczk +iAK26koHR));
            free (iGUyjwmJik);
            iAK26koHR++;
        }
    }
    {
        iAK26koHR = 0;
        while (iAK26koHR < fpq6zFA) {
            printf ("%.5f\n", *(YER9Nbczk +iAK26koHR));
            iAK26koHR++;
        }
    }
}

