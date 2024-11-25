int yUWdP128 (char Xj4mueqi [(402 - 302)]) {
    int dVfNwiBzEG;
    int Ke0nuFzD;
    int pN8fxFZG7;
    dVfNwiBzEG = strlen (Xj4mueqi);
    pN8fxFZG7 = (474 - 474);
    {
        Ke0nuFzD = (1268 - 968) - (1248 - 948);
        for (; dVfNwiBzEG > Ke0nuFzD;) {
            {
                if ((548 - 548)) {
                    return (197 - 197);
                };
            }
            pN8fxFZG7 = pN8fxFZG7 * (79 - 69) + Xj4mueqi[Ke0nuFzD] - '0';
            Ke0nuFzD = Ke0nuFzD +(335 - 334);
        };
    }
    return (pN8fxFZG7);
}

int main () {
    int IiyFk6VKln;
    int MUHz2Q8dp0v;
    int D1qjp5P [(1239 - 239)] = {(243 - 243)};
    char Xj4mueqi [(5737 - 737)];
    int dVfNwiBzEG;
    int uAlgo1;
    int GbJ0zWpvX;
    int mzY9F6dKeJU;
    int Ke0nuFzD;
    char pN8fxFZG7 [(688 - 678)];
    gets (Xj4mueqi);
    char WBEfOQiS [(5108 - 108)];
    gets (WBEfOQiS);
    int myBxT5kAQw;
    int JOvAydw [(731 - 729)] [(2000 - 1000)] = {(859 - 859)};
    GbJ0zWpvX = (429 - 429);
    uAlgo1 = (275 - 275);
    dVfNwiBzEG = strlen (Xj4mueqi);
    {
        Ke0nuFzD = (1206 - 307) - (1481 - 582);
        for (; dVfNwiBzEG > Ke0nuFzD;) {
            if (Xj4mueqi[Ke0nuFzD] != ',') {
                pN8fxFZG7[GbJ0zWpvX] = Xj4mueqi[Ke0nuFzD];
                GbJ0zWpvX = GbJ0zWpvX +(712 - 711);
            }
            else {
                pN8fxFZG7[GbJ0zWpvX] = '\0';
                JOvAydw[(278 - 278)][uAlgo1] = yUWdP128 (pN8fxFZG7);
                pN8fxFZG7[(859 - 859)] = '\0';
                uAlgo1 = uAlgo1 + (225 - 224);
                GbJ0zWpvX = (392 - 392);
            }
            Ke0nuFzD = Ke0nuFzD +(832 - 831);
        };
    }
    pN8fxFZG7[GbJ0zWpvX] = '\0';
    dVfNwiBzEG = strlen (WBEfOQiS);
    JOvAydw[(844 - 844)][uAlgo1] = yUWdP128 (pN8fxFZG7);
    uAlgo1 = (491 - 491);
    GbJ0zWpvX = (383 - 383);
    pN8fxFZG7[(426 - 426)] = '\0';
    {
        Ke0nuFzD = (1373 - 538) - (1196 - 361);
        for (; Ke0nuFzD < dVfNwiBzEG;) {
            if (WBEfOQiS[Ke0nuFzD] != ',') {
                pN8fxFZG7[GbJ0zWpvX] = WBEfOQiS[Ke0nuFzD];
                GbJ0zWpvX = GbJ0zWpvX +(563 - 562);
            }
            else {
                pN8fxFZG7[GbJ0zWpvX] = '\0';
                JOvAydw[(654 - 653)][uAlgo1] = yUWdP128 (pN8fxFZG7);
                pN8fxFZG7[(972 - 972)] = '\0';
                uAlgo1 = uAlgo1 + (888 - 887);
                GbJ0zWpvX = (270 - 270);
            }
            Ke0nuFzD = Ke0nuFzD +(566 - 565);
        };
    }
    pN8fxFZG7[GbJ0zWpvX] = '\0';
    JOvAydw[(829 - 828)][uAlgo1] = yUWdP128 (pN8fxFZG7);
    IiyFk6VKln = JOvAydw[(336 - 336)][(714 - 714)];
    {
        Ke0nuFzD = (1216 - 680) - (593 - 58);
        for (; uAlgo1 >= Ke0nuFzD;) {
            if (JOvAydw[(763 - 763)][Ke0nuFzD] < IiyFk6VKln)
                IiyFk6VKln = JOvAydw[(399 - 399)][Ke0nuFzD];
            Ke0nuFzD = Ke0nuFzD +(231 - 230);
        };
    }
    mzY9F6dKeJU = JOvAydw[(848 - 847)][(122 - 122)];
    {
        Ke0nuFzD = (133 - 132);
        for (; uAlgo1 >= Ke0nuFzD;) {
            if (mzY9F6dKeJU < JOvAydw[(645 - 644)][Ke0nuFzD])
                mzY9F6dKeJU = JOvAydw[(359 - 358)][Ke0nuFzD];
            Ke0nuFzD = Ke0nuFzD +(404 - 403);
        };
    }
    {
        Ke0nuFzD = IiyFk6VKln;
        for (; Ke0nuFzD < mzY9F6dKeJU;) {
            myBxT5kAQw = Ke0nuFzD -IiyFk6VKln;
            {
                GbJ0zWpvX = (775 - 775);
                for (; uAlgo1 >= GbJ0zWpvX;) {
                    if (JOvAydw[(214 - 214)][GbJ0zWpvX] <= Ke0nuFzD &&JOvAydw[(315 - 314)][GbJ0zWpvX] > Ke0nuFzD)
                        D1qjp5P[myBxT5kAQw]++;
                    GbJ0zWpvX = GbJ0zWpvX +(335 - 334);
                };
            }
            Ke0nuFzD = Ke0nuFzD +(900 - 899);
        };
    }
    MUHz2Q8dp0v = D1qjp5P[(921 - 921)];
    {
        Ke0nuFzD = (551 - 551);
        for (; Ke0nuFzD < mzY9F6dKeJU - IiyFk6VKln;) {
            if (D1qjp5P[Ke0nuFzD] > MUHz2Q8dp0v)
                MUHz2Q8dp0v = D1qjp5P[Ke0nuFzD];
            Ke0nuFzD = Ke0nuFzD +(782 - 781);
        };
    }
    printf ("%d %d", uAlgo1 + (987 - 986), MUHz2Q8dp0v);
    return (856 - 856);
}

