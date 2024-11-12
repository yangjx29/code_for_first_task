int main () {
    int u35cByK9, mxIhMKV9n4, K4Gpdh;
    char b1pwsP [tUWbmhZB], Lhc76kVWg [tUWbmhZB], iebd68 [tUWbmhZB], wbGoE5MF [tUWbmhZB];
    int KhK4uBd8kE = (848 - 848), xKFnEtT0 = tUWbmhZB, NUdXfsPlzo;
    gets (iebd68);
    K4Gpdh = strlen (iebd68);
    NUdXfsPlzo = 0;
    for (u35cByK9 = 0; K4Gpdh >= u35cByK9; u35cByK9 = u35cByK9 + 1) {
        if ((!(' ' != iebd68[u35cByK9])) || (!(',' != iebd68[u35cByK9])) || (u35cByK9 == K4Gpdh)) {
            if ((NUdXfsPlzo < xKFnEtT0) && (NUdXfsPlzo > 0)) {
                strcpy (b1pwsP, wbGoE5MF);
                xKFnEtT0 = NUdXfsPlzo;
            }
            if (KhK4uBd8kE < NUdXfsPlzo) {
                strcpy (Lhc76kVWg, wbGoE5MF);
                KhK4uBd8kE = NUdXfsPlzo;
            }
            NUdXfsPlzo = 0;
        }
        else {
            NUdXfsPlzo = NUdXfsPlzo +1;
            wbGoE5MF[NUdXfsPlzo -1] = iebd68[u35cByK9];
        }
    }
    for (mxIhMKV9n4 = 0; mxIhMKV9n4 < KhK4uBd8kE; mxIhMKV9n4 = mxIhMKV9n4 + 1)
        printf ("%c", Lhc76kVWg[mxIhMKV9n4]);
    for (mxIhMKV9n4 = 0; mxIhMKV9n4 < xKFnEtT0; mxIhMKV9n4 = mxIhMKV9n4 + 1)
        printf ("%c", b1pwsP[mxIhMKV9n4]);
    return 0;
}

