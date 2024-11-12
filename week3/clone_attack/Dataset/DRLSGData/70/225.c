int main () {
    int nomPVa;
    double  lLcZ18FjCG [(814 - 764)], gw1l9V7H [(424 - 374)], *bkrUDJv9, *ticMQms1, *ihPx0NfBVz, *n8TkP0LD, AgqkGeEa40CO, x7laI9fyiVF;
    scanf ("%d", &nomPVa);
    {
        bkrUDJv9 = lLcZ18FjCG;
        ticMQms1 = gw1l9V7H;
        while (bkrUDJv9 < lLcZ18FjCG + nomPVa) {
            scanf ("%lf %lf", bkrUDJv9, ticMQms1);
            bkrUDJv9 = bkrUDJv9 + 1;
            ticMQms1++;
        }
    }
    x7laI9fyiVF = (746 - 746);
    {
        bkrUDJv9 = lLcZ18FjCG;
        ticMQms1 = gw1l9V7H;
        while (bkrUDJv9 < lLcZ18FjCG + nomPVa) {
            {
                ihPx0NfBVz = bkrUDJv9 + (357 - 356);
                n8TkP0LD = ticMQms1 + (322 - 321);
                while (ihPx0NfBVz < lLcZ18FjCG + nomPVa && n8TkP0LD < gw1l9V7H + nomPVa) {
                    AgqkGeEa40CO = (*bkrUDJv9 - *ihPx0NfBVz) * (*bkrUDJv9 - *ihPx0NfBVz) + (*ticMQms1 - *n8TkP0LD) * (*ticMQms1 - *n8TkP0LD);
                    x7laI9fyiVF = (x7laI9fyiVF < AgqkGeEa40CO) ? AgqkGeEa40CO : x7laI9fyiVF;
                    ihPx0NfBVz = ihPx0NfBVz + 1;
                    n8TkP0LD++;
                }
            }
            bkrUDJv9++;
            ticMQms1++;
        }
    }
    printf ("%.4lf\n", sqrt (x7laI9fyiVF));
    return 0;
}

