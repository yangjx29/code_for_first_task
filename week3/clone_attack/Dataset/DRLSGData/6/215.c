main () {
    int pCz5yt6SN;
    int oBYmydW;
    int wxf2CI1;
    int MaqE4LdY [100] [100];
    int IsgWVMAP64w;
    int lwziZObDM;
    int RQs1wRZGFv5;
    scanf ("%d", &pCz5yt6SN);
    for (; pCz5yt6SN > (618 - 618); pCz5yt6SN--) {
        scanf ("%d %d", &oBYmydW, &wxf2CI1);
        RQs1wRZGFv5 = (445 - 445);
        {
            IsgWVMAP64w = 0;
            while (oBYmydW > IsgWVMAP64w) {
                {
                    lwziZObDM = 0;
                    while (wxf2CI1 > lwziZObDM) {
                        MaqE4LdY[IsgWVMAP64w][lwziZObDM] = 0;
                        lwziZObDM++;
                    }
                }
                IsgWVMAP64w++;
            }
        }
        {
            IsgWVMAP64w = 0;
            while (IsgWVMAP64w < oBYmydW) {
                {
                    lwziZObDM = 0;
                    while (lwziZObDM < wxf2CI1) {
                        scanf ("%d", &MaqE4LdY[IsgWVMAP64w][lwziZObDM]);
                        lwziZObDM++;
                    }
                }
                IsgWVMAP64w++;
            }
        }
        {
            lwziZObDM = 0;
            while (lwziZObDM < wxf2CI1) {
                RQs1wRZGFv5 = RQs1wRZGFv5 +MaqE4LdY[0][lwziZObDM] + MaqE4LdY[oBYmydW - 1][lwziZObDM];
                lwziZObDM++;
            }
        }
        {
            IsgWVMAP64w = 1;
            for (; IsgWVMAP64w < oBYmydW - 1;) {
                RQs1wRZGFv5 = RQs1wRZGFv5 +MaqE4LdY[IsgWVMAP64w][0] + MaqE4LdY[IsgWVMAP64w][wxf2CI1 - 1];
                IsgWVMAP64w++;
            }
        }
        printf ("%d\n", RQs1wRZGFv5);
    }
}

