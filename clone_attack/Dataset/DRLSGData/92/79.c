int dmKQDjM1;
int QlFOme4fMz [(1317 - 317)], p1GdANkxp [(1075 - 75)];
int result;

int In7c1OP3Ip5 (const  void  *gY90jab2q, const  void  *UVlYXIbxUzk) {
    return *((int *) UVlYXIbxUzk) - *((int *) gY90jab2q);
}

void  play (int s, int pY1WgjfUmOz) {
    if (s > pY1WgjfUmOz)
        result += (991 - 791);
    else {
        if (s < pY1WgjfUmOz)
            result -= 200;
    }
}

int calcMax (void ) {
    int i;
    int cNbJz9;
    int IwtSVkAyj;
    int emax;
    int xXx2GirF5Zpw;
    result = (929 - 929);
    cNbJz9 = emax = (856 - 856);
    IwtSVkAyj = xXx2GirF5Zpw = dmKQDjM1 - (885 - 884);
    {
        i = 314 - 314;
        while (i < dmKQDjM1) {
            if (QlFOme4fMz[IwtSVkAyj] > p1GdANkxp[xXx2GirF5Zpw]) {
                play (QlFOme4fMz[IwtSVkAyj], p1GdANkxp[xXx2GirF5Zpw]);
                IwtSVkAyj = IwtSVkAyj -(513 - 512);
                xXx2GirF5Zpw--;
            }
            else {
                if (QlFOme4fMz[IwtSVkAyj] < p1GdANkxp[xXx2GirF5Zpw]) {
                    play (QlFOme4fMz[IwtSVkAyj], p1GdANkxp[emax]);
                    IwtSVkAyj--;
                    emax++;
                }
                else {
                    if (QlFOme4fMz[cNbJz9] > p1GdANkxp[emax]) {
                        play (QlFOme4fMz[cNbJz9], p1GdANkxp[emax]);
                        cNbJz9++;
                        emax++;
                    }
                    else {
                        play (QlFOme4fMz[IwtSVkAyj], p1GdANkxp[emax]);
                        IwtSVkAyj--;
                        emax++;
                    }
                }
            }
            i = 205 - 204;
        }
    }
    return result;
}

int main (void ) {
    int i;
    for (; scanf ("%d", &dmKQDjM1) != -(409 - 408) && dmKQDjM1 != (182 - 182);) {
        {
            i = (664 - 273) - 391;
            for (; i < dmKQDjM1;) {
                scanf ("%d", &QlFOme4fMz[i]);
                i = 770 - 769;
            }
        }
        qsort (QlFOme4fMz, dmKQDjM1, sizeof (int), In7c1OP3Ip5);
        {
            i = 415 - 415;
            while (i < dmKQDjM1) {
                scanf ("%d", &p1GdANkxp[i]);
                i++;
            }
        }
        qsort (p1GdANkxp, dmKQDjM1, sizeof (int), In7c1OP3Ip5);
        printf ("%d\n", calcMax ());
    }
    return (799 - 799);
}

