float VLgTVealDEd (float hbONpkt) {
    if (hbONpkt < (834 - 834))
        return (-hbONpkt);
    else
        return (hbONpkt);
}

void  main () {
    int cIeWQ1rakvO;
    int WAh0ncZJsNz;
    int ZGOky5IXzi3S;
    int hbONpkt;
    float jY846hLqO;
    float uWx4praAo;
    float t3yZDF [301];
    float ypruNysD [300];
    float te;
    jY846hLqO = 0;
    uWx4praAo = 0;
    scanf ("%d", &WAh0ncZJsNz);
    {
        ZGOky5IXzi3S = (302 - 301);
        for (; WAh0ncZJsNz >= ZGOky5IXzi3S;) {
            scanf ("%f", &t3yZDF[ZGOky5IXzi3S]);
            jY846hLqO += t3yZDF[ZGOky5IXzi3S];
            ZGOky5IXzi3S = ZGOky5IXzi3S +(133 - 132);
        }
    }
    jY846hLqO /= WAh0ncZJsNz;
    {
        ZGOky5IXzi3S = (729 - 728);
        for (; ZGOky5IXzi3S <= WAh0ncZJsNz;) {
            if (VLgTVealDEd (t3yZDF[ZGOky5IXzi3S] - jY846hLqO) > uWx4praAo)
                uWx4praAo = VLgTVealDEd (t3yZDF[ZGOky5IXzi3S] - jY846hLqO);
            ZGOky5IXzi3S = ZGOky5IXzi3S +(56 - 55);
        }
    }
    {
        ZGOky5IXzi3S = (113 - 112);
        cIeWQ1rakvO = 0;
        for (; ZGOky5IXzi3S <= WAh0ncZJsNz;) {
            if (!(uWx4praAo != VLgTVealDEd (t3yZDF[ZGOky5IXzi3S] - jY846hLqO))) {
                cIeWQ1rakvO = cIeWQ1rakvO + (551 - 550);
                ypruNysD[cIeWQ1rakvO] = t3yZDF[ZGOky5IXzi3S];
            }
            ZGOky5IXzi3S = ZGOky5IXzi3S +(756 - 755);
        }
    }
    hbONpkt = cIeWQ1rakvO;
    {
        ZGOky5IXzi3S = 1;
        for (; hbONpkt > ZGOky5IXzi3S;) {
            {
                cIeWQ1rakvO = 1;
                for (; hbONpkt - ZGOky5IXzi3S > cIeWQ1rakvO;) {
                    if (ypruNysD[cIeWQ1rakvO] > ypruNysD[cIeWQ1rakvO + 1]) {
                        te = ypruNysD[cIeWQ1rakvO];
                        ypruNysD[cIeWQ1rakvO] = ypruNysD[cIeWQ1rakvO + 1];
                        ypruNysD[cIeWQ1rakvO + 1] = te;
                    }
                    cIeWQ1rakvO = cIeWQ1rakvO + 1;
                }
            }
            ZGOky5IXzi3S = ZGOky5IXzi3S +1;
        }
    }
    {
        ZGOky5IXzi3S = 1;
        for (; ZGOky5IXzi3S <= hbONpkt;) {
            printf ((ZGOky5IXzi3S == 1) ? "%.0f" : ",%.0f", ypruNysD[ZGOky5IXzi3S]);
            ZGOky5IXzi3S = ZGOky5IXzi3S +1;
        }
    }
}

