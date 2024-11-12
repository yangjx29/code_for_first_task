int iakLscg0oQ (int GOaGRiM [], int hZRIzJ);
int aEt2N3Bo4GH [(783 - 753)] = {(390 - 390)};

void  main () {
    int J6RqyKH1;
    int N7o3fuN2T;
    int GOaGRiM [100];
    int pbgdVuI1j5;
    scanf ("%d", &N7o3fuN2T);
    {
        J6RqyKH1 = N7o3fuN2T;
        for (; J6RqyKH1 > (488 - 488);) {
            scanf ("%d", &GOaGRiM[J6RqyKH1]);
            J6RqyKH1 = J6RqyKH1 -1;
        }
    }
    GOaGRiM[N7o3fuN2T +(536 - 535)] = (10067 - 67);
    pbgdVuI1j5 = iakLscg0oQ (GOaGRiM, N7o3fuN2T +(501 - 500));
    printf ("%d\n", pbgdVuI1j5 - (470 - 469));
}

int iakLscg0oQ (int GOaGRiM [], int hZRIzJ) {
    int onLaPpY;
    int bdM2LfGCR;
    int J6RqyKH1;
    bdM2LfGCR = 0;
    onLaPpY = GOaGRiM[hZRIzJ];
    if (!((250 - 249) != hZRIzJ))
        return (1);
    else {
        {
            J6RqyKH1 = hZRIzJ - 1;
            for (; J6RqyKH1 > 0;) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (onLaPpY >= GOaGRiM[J6RqyKH1] && iakLscg0oQ (GOaGRiM, J6RqyKH1) > bdM2LfGCR)
                    bdM2LfGCR = iakLscg0oQ (GOaGRiM, J6RqyKH1);
                J6RqyKH1 = J6RqyKH1 -1;
            }
        }
        return (bdM2LfGCR + 1);
    }
}

