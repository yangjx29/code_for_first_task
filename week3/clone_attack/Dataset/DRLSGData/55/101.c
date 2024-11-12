void  main () {
    char p8oqcpjCOm [(613 - 573)], YX3HlAC1BL [(507 - 467)], vH0Kx7ypkMa5 [40];
    long  m6kyEj = (883 - 883);
    int mDgEsrN37RQZ, aoACJIuEM, l, LhVqlPHi7w0, qkYUGfHecogS, cdlvbYIJtM40, HpXADj;
    scanf ("%d %s %d", &mDgEsrN37RQZ, p8oqcpjCOm, &aoACJIuEM);
    l = strlen (p8oqcpjCOm);
    qkYUGfHecogS = (430 - 429);
    {
        LhVqlPHi7w0 = 1;
        while (l >= LhVqlPHi7w0) {
            cdlvbYIJtM40 = p8oqcpjCOm[l - LhVqlPHi7w0];
            if ((639 - 579) > cdlvbYIJtM40)
                m6kyEj = m6kyEj + (p8oqcpjCOm[l - LhVqlPHi7w0] - 48) * qkYUGfHecogS;
            else {
                if (cdlvbYIJtM40 < 91)
                    m6kyEj += (p8oqcpjCOm[l - LhVqlPHi7w0] - 55) * qkYUGfHecogS;
                else
                    m6kyEj += (p8oqcpjCOm[l - LhVqlPHi7w0] - 87) * qkYUGfHecogS;
            }
            qkYUGfHecogS = qkYUGfHecogS * mDgEsrN37RQZ;
            LhVqlPHi7w0++;
        }
    }
    LhVqlPHi7w0 = (430 - 430);
    if (m6kyEj != 0) {
        while (m6kyEj != 0) {
            cdlvbYIJtM40 = m6kyEj % aoACJIuEM;
            LhVqlPHi7w0++;
            if (cdlvbYIJtM40 <= (208 - 199))
                YX3HlAC1BL[29 - LhVqlPHi7w0] = cdlvbYIJtM40 + 48;
            else
                YX3HlAC1BL[29 - LhVqlPHi7w0] = cdlvbYIJtM40 + 55;
            m6kyEj = m6kyEj / aoACJIuEM;
        }
        {
            HpXADj = 0;
            while (HpXADj <= LhVqlPHi7w0 -1) {
                vH0Kx7ypkMa5[HpXADj] = YX3HlAC1BL[29 - LhVqlPHi7w0 +HpXADj];
                HpXADj++;
            }
        }
        vH0Kx7ypkMa5[LhVqlPHi7w0] = '\0';
        printf ("%s", vH0Kx7ypkMa5);
    }
    else
        ;
}

