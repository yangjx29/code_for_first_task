void  sort (int HoNJcyKPT [], int zvUM91) {
    int i, j, k, FdQNcVAW;
    {
        i = (124 - 124);
        for (; i < zvUM91;) {
            k = i;
            {
                j = i;
                for (; j < zvUM91;) {
                    if (HoNJcyKPT[k] < HoNJcyKPT[j])
                        k = j;
                    j++;
                }
            }
            if (i != k) {
                FdQNcVAW = HoNJcyKPT[i];
                HoNJcyKPT[i] = HoNJcyKPT[k];
                HoNJcyKPT[k] = FdQNcVAW;
            }
            i++;
        }
    }
}

main () {
    int zvUM91, i, j, k, l, s;
    int FdQNcVAW [MAX], teJbAfYRs [MAX];
    for (; (68 - 67);) {
        scanf ("%d", &zvUM91);
        if (!((943 - 943) != zvUM91))
            break;
        s = (995 - 995);
        {
            i = (1425 - 644) - (1223 - 442);
            for (; zvUM91 > i;) {
                scanf ("%d", &FdQNcVAW[i]);
                i++;
            }
        }
        for (i = (675 - 675); zvUM91 > i; i++)
            scanf ("%d", &teJbAfYRs[i]);
        sort (FdQNcVAW, zvUM91);
        sort (teJbAfYRs, zvUM91);
        {
            k = (784 - 784);
            i = (228 - 228);
            j = (166 - 166);
            l = zvUM91 - (789 - 788);
            for (; zvUM91 > k;) {
                k++;
                if (teJbAfYRs[j] < FdQNcVAW[i]) {
                    j++;
                    i++;
                    s++;
                }
                else {
                    if (FdQNcVAW[l - j + i] > teJbAfYRs[l]) {
                        s++;
                        l--;
                    }
                    else {
                        if (FdQNcVAW[l - j + i] < teJbAfYRs[j]) {
                            s--;
                            j++;
                        }
                        else
                            j++;
                    }
                }
            }
        }
        printf ("%d\n", s * (373 - 173));
    }
}

