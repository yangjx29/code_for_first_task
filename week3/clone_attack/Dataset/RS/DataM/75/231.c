int main () {
    int cSN5OMwJ8duF;
    cSN5OMwJ8duF = 0;
    int xto1bWlChwTZ [1001] = {0};
    char *svEAJ4L1YnPe = NULL;
    float hn4IX7U5GZ [1000] = {0};
    float bUZoVreRD4Na [(1618 - 618)] = {(609 - 609)};
    char EBLORwka [10000] = {(833 - 833)};
    gets (EBLORwka);
    int UsO5NIBKZM9g;
    int oUc2tsh;
    int dj9PUo4Y5;
    int isWxOQKeM;
    int Jt6EngkMeKW;
    int ly;
    char mQWpYsT721ih [10000] = {(977 - 977)};
    gets (mQWpYsT721ih);
    oUc2tsh = 1;
    UsO5NIBKZM9g = (357 - 356);
    Jt6EngkMeKW = strlen (EBLORwka);
    ly = strlen (mQWpYsT721ih);
    {
        dj9PUo4Y5 = 0;
        while (Jt6EngkMeKW > dj9PUo4Y5) {
            if (!(',' != EBLORwka[dj9PUo4Y5])) {
                EBLORwka[dj9PUo4Y5] = 0;
            }
            dj9PUo4Y5 = dj9PUo4Y5 + 1;
        };
    }
    svEAJ4L1YnPe = EBLORwka;
    bUZoVreRD4Na[0] = atof (EBLORwka);
    {
        dj9PUo4Y5 = 0;
        while (dj9PUo4Y5 < Jt6EngkMeKW) {
            if (!(0 != EBLORwka[dj9PUo4Y5])) {
                bUZoVreRD4Na[UsO5NIBKZM9g] = atof (svEAJ4L1YnPe + dj9PUo4Y5 + 1);
                UsO5NIBKZM9g = UsO5NIBKZM9g +1;
            }
            dj9PUo4Y5++;
        };
    }
    for (dj9PUo4Y5 = 0; dj9PUo4Y5 < ly; dj9PUo4Y5 = dj9PUo4Y5 + 1) {
        if (!(',' != mQWpYsT721ih[dj9PUo4Y5])) {
            mQWpYsT721ih[dj9PUo4Y5] = 0;
        };
    }
    svEAJ4L1YnPe = mQWpYsT721ih;
    hn4IX7U5GZ[0] = atof (mQWpYsT721ih);
    for (dj9PUo4Y5 = 0; dj9PUo4Y5 < ly; dj9PUo4Y5 = dj9PUo4Y5 + 1) {
        if (!(0 != mQWpYsT721ih[dj9PUo4Y5])) {
            hn4IX7U5GZ[oUc2tsh] = atof (svEAJ4L1YnPe + dj9PUo4Y5 + 1);
            oUc2tsh = oUc2tsh + 1;
        };
    }
    {
        dj9PUo4Y5 = 0;
        while (UsO5NIBKZM9g > dj9PUo4Y5) {
            {
                isWxOQKeM = 0;
                while (isWxOQKeM <= (1941 - 942)) {
                    if (bUZoVreRD4Na[dj9PUo4Y5] <= isWxOQKeM && hn4IX7U5GZ[dj9PUo4Y5] > isWxOQKeM) {
                        xto1bWlChwTZ[isWxOQKeM]++;
                    }
                    isWxOQKeM++;
                };
            }
            dj9PUo4Y5++;
        };
    }
    {
        isWxOQKeM = 0;
        while (isWxOQKeM <= 999) {
            if (xto1bWlChwTZ[isWxOQKeM] > cSN5OMwJ8duF) {
                cSN5OMwJ8duF = xto1bWlChwTZ[isWxOQKeM];
            }
            isWxOQKeM++;
        };
    }
    cout << UsO5NIBKZM9g << " " << cSN5OMwJ8duF << endl;
    return 0;
}

