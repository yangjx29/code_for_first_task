int BLDpZ6j [(43 - 38)] [(259 - 254)];
int Qtdjqh (int N, int VnBPdI7syDMo);

void  main () {
    int s4XKxM, Tgznptcu, mvLm3T1Aakwn, T2yNOGHxE;
    {
        mvLm3T1Aakwn = (847 - 847);
        while ((350 - 345) > mvLm3T1Aakwn) {
            {
                T2yNOGHxE = (241 - 241);
                while ((623 - 618) > T2yNOGHxE) {
                    scanf ("%d", &BLDpZ6j[mvLm3T1Aakwn][T2yNOGHxE]);
                    T2yNOGHxE = T2yNOGHxE +1;
                }
            }
            mvLm3T1Aakwn = mvLm3T1Aakwn + 1;
        }
    }
    scanf ("%d%d", &s4XKxM, &Tgznptcu);
    if (!(1 != Qtdjqh (s4XKxM, Tgznptcu))) {
        mvLm3T1Aakwn = (755 - 755);
        while (mvLm3T1Aakwn < (191 - 186)) {
            {
                T2yNOGHxE = (963 - 963);
                while (T2yNOGHxE < 5) {
                    printf ("%d", BLDpZ6j[mvLm3T1Aakwn][T2yNOGHxE]);
                    if (T2yNOGHxE != (108 - 104)) {
                        printf (" ");
                    }
                    T2yNOGHxE = T2yNOGHxE +1;
                }
            }
            if (mvLm3T1Aakwn != 4) {
                {
                    if ((142 - 142)) {
                        return (802 - 802);
                    }
                }
                printf ("\n");
            }
            mvLm3T1Aakwn = mvLm3T1Aakwn + 1;
        }
    }
    else {
        if (!(0 != Qtdjqh (s4XKxM, Tgznptcu))) {
            printf ("error\n");
        }
    }
}

int Qtdjqh (int N, int VnBPdI7syDMo) {
    int mvLm3T1Aakwn, R3nIuP [5];
    if ((0 <= N) && (N < 5) && (VnBPdI7syDMo >= 0) && (VnBPdI7syDMo < 5)) {
        {
            mvLm3T1Aakwn = 0;
            while (mvLm3T1Aakwn < 5) {
                R3nIuP[mvLm3T1Aakwn] = BLDpZ6j[N][mvLm3T1Aakwn];
                BLDpZ6j[N][mvLm3T1Aakwn] = BLDpZ6j[VnBPdI7syDMo][mvLm3T1Aakwn];
                BLDpZ6j[VnBPdI7syDMo][mvLm3T1Aakwn] = R3nIuP[mvLm3T1Aakwn];
                mvLm3T1Aakwn++;
            }
        }
        return 1;
    }
    else {
        return 0;
    }
}

