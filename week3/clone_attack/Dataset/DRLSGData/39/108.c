struct   student {
    char QaIQPEVY4L [21], gl14ir0, rWuHDgK;
    int eGRYN6, vildmya, TnTuoJx, BtxmXKBfc;
};
struct   student NwIpXuko [100], gvTCboZe;

void  main () {
    int GHTxln, uS9xsXRVNe, T0YCqBU56rN, R9qtL4 = 0;
    scanf ("%d", &GHTxln);
    {
        uS9xsXRVNe = 0;
        while (uS9xsXRVNe < GHTxln) {
            scanf ("%s %d %d %c %c %d", NwIpXuko[uS9xsXRVNe].QaIQPEVY4L, &NwIpXuko[uS9xsXRVNe].eGRYN6, &NwIpXuko[uS9xsXRVNe].vildmya, &NwIpXuko[uS9xsXRVNe].gl14ir0, &NwIpXuko[uS9xsXRVNe].rWuHDgK, &NwIpXuko[uS9xsXRVNe].TnTuoJx);
            uS9xsXRVNe++;
        }
    }
    {
        uS9xsXRVNe = 0;
        while (uS9xsXRVNe < GHTxln) {
            NwIpXuko[uS9xsXRVNe].BtxmXKBfc = 0;
            if (NwIpXuko[uS9xsXRVNe].vildmya > 80 && !('Y' != NwIpXuko[uS9xsXRVNe].gl14ir0)) {
                NwIpXuko[uS9xsXRVNe].BtxmXKBfc += 850;
            }
            if (85 < NwIpXuko[uS9xsXRVNe].eGRYN6 && !('Y' != NwIpXuko[uS9xsXRVNe].rWuHDgK)) {
                NwIpXuko[uS9xsXRVNe].BtxmXKBfc += 1000;
            }
            if (90 < NwIpXuko[uS9xsXRVNe].eGRYN6) {
                NwIpXuko[uS9xsXRVNe].BtxmXKBfc += 2000;
            }
            if (NwIpXuko[uS9xsXRVNe].eGRYN6 > 85 && NwIpXuko[uS9xsXRVNe].vildmya > 80) {
                NwIpXuko[uS9xsXRVNe].BtxmXKBfc += 4000;
            }
            if (NwIpXuko[uS9xsXRVNe].eGRYN6 > 80 && NwIpXuko[uS9xsXRVNe].TnTuoJx >= 1) {
                NwIpXuko[uS9xsXRVNe].BtxmXKBfc += 8000;
            }
            uS9xsXRVNe++;
        }
    }
    {
        T0YCqBU56rN = 1;
        while (T0YCqBU56rN < GHTxln) {
            if (NwIpXuko[0].BtxmXKBfc < NwIpXuko[T0YCqBU56rN].BtxmXKBfc) {
                gvTCboZe = NwIpXuko[0];
                NwIpXuko[0] = NwIpXuko[T0YCqBU56rN];
                NwIpXuko[T0YCqBU56rN] = gvTCboZe;
            }
            T0YCqBU56rN++;
        }
    }
    {
        T0YCqBU56rN = 0;
        while (T0YCqBU56rN < GHTxln) {
            R9qtL4 += NwIpXuko[T0YCqBU56rN].BtxmXKBfc;
            T0YCqBU56rN++;
        }
    }
    printf ("\n%s\n%d\n%d", NwIpXuko[0].QaIQPEVY4L, NwIpXuko[0].BtxmXKBfc, R9qtL4);
}

