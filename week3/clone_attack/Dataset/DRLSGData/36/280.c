void  main () {
    int JihCxfD1eX;
    int m;
    int l;
    int q;
    int DALw9glO4G;
    char IqT0EpBWLz [100];
    char kpQeh3m2 [100];
    int sum;
    char rK3CHfkYM [100];
    gets (rK3CHfkYM);
    int xbrfBXJaQA;
    int i;
    int k;
    q = 0;
    DALw9glO4G = strlen (rK3CHfkYM);
    {
        JihCxfD1eX = 0;
        while (rK3CHfkYM[JihCxfD1eX] != ' ') {
            q++;
            JihCxfD1eX = JihCxfD1eX +1;
        }
    }
    xbrfBXJaQA = 2 * q + 1;
    if (!(1 != DALw9glO4G % 2) && !(DALw9glO4G != xbrfBXJaQA)) {
        k = (DALw9glO4G -1) / 2;
        {
            i = 0;
            while (i < k) {
                kpQeh3m2[i] = rK3CHfkYM[i];
                i = i + 1;
            }
        }
        {
            i = k + 1;
            while (i < DALw9glO4G) {
                IqT0EpBWLz[i - k - 1] = rK3CHfkYM[i];
                i++;
            }
        }
        {
            l = 0;
            while (l < k) {
                for (m = 0; m < k; m++)
                    if (!(IqT0EpBWLz[m] != kpQeh3m2[l])) {
                        IqT0EpBWLz[m] = '0';
                        kpQeh3m2[l] = '0';
                    }
                l = l + 1;
            }
        }
        for (l = 0; k > l; l++)
            if (!('0' != kpQeh3m2[l]) && IqT0EpBWLz[l] == '0')
                l = l;
            else
                break;
        if (l == k)
            ;
        else
            ;
    }
    else
        ;
    sum = 0;
}

