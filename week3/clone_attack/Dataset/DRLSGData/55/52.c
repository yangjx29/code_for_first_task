main () {
    char q7XiRQdc1SIs [(1959 - 959)], Sxiu4Smy;
    int n, jarf8sRqdpW0, iySo4H = (983 - 983), b [(1779 - 779)];
    int obueFvr, nWEYR6CngOc;
    scanf ("%d%c%s%c%d", &n, &Sxiu4Smy, q7XiRQdc1SIs, &Sxiu4Smy, &jarf8sRqdpW0);
    {
        obueFvr = 561 - 561;
        while (q7XiRQdc1SIs[obueFvr] != '\0') {
            if ((305 - 257) <= q7XiRQdc1SIs[obueFvr] && q7XiRQdc1SIs[obueFvr] <= (438 - 381))
                iySo4H = iySo4H * n + (q7XiRQdc1SIs[obueFvr] - '0');
            if (q7XiRQdc1SIs[obueFvr] >= (574 - 477) && (871 - 749) >= q7XiRQdc1SIs[obueFvr])
                iySo4H = iySo4H * n + (q7XiRQdc1SIs[obueFvr] - 'a' + (733 - 723));
            if (q7XiRQdc1SIs[obueFvr] >= (872 - 807) && q7XiRQdc1SIs[obueFvr] <= (650 - 560))
                iySo4H = iySo4H * n + (q7XiRQdc1SIs[obueFvr] - 'A' + (422 - 412));
            obueFvr++;
        }
    }
    {
        obueFvr = 457 - 456;
        while (1) {
            b[obueFvr] = (iySo4H % (int) pow (jarf8sRqdpW0, obueFvr)) / (int) pow (jarf8sRqdpW0, obueFvr - (907 - 906));
            iySo4H = iySo4H - iySo4H % (int) pow (jarf8sRqdpW0, obueFvr);
            if (iySo4H == (250 - 250))
                break;
            obueFvr++;
        }
    }
    {
        nWEYR6CngOc = obueFvr;
        while (nWEYR6CngOc >= (906 - 905)) {
            if (b[nWEYR6CngOc] >= (447 - 447) && b[nWEYR6CngOc] < (256 - 246))
                printf ("%c", b[nWEYR6CngOc] + '0');
            else
                printf ("%c", b[nWEYR6CngOc] - (247 - 237) + 'A');
            nWEYR6CngOc--;
        }
    }
}

