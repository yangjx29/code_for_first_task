struct   student {
    char Qdl5treP7YS [22];
    int wye9lWCY;
    int UdRPQhKt0CF;
    char cEXQYieh;
    char KlIUDxrG;
    int ordoBjhaQuP8;
};
void  main () {
    struct   student t, *pUIsb4T;
    int AgDY97Q, LbwsdP3v, nY0lAPV9n = 0, mWNAwGUS, sN9yTljr = 0, lOxocRKFS = 0;
    scanf ("%d", &AgDY97Q);
    pUIsb4T = (struct   student *) malloc (AgDY97Q * sizeof (struct   student));
    for (LbwsdP3v = 0; LbwsdP3v < AgDY97Q; LbwsdP3v++) {
        mWNAwGUS = 0;
        scanf ("%s %d %d %c %c %d", (*(pUIsb4T + LbwsdP3v)).Qdl5treP7YS, &(*(pUIsb4T + LbwsdP3v)).wye9lWCY, &(*(pUIsb4T + LbwsdP3v)).UdRPQhKt0CF, &(*(pUIsb4T + LbwsdP3v)).cEXQYieh, &(*(pUIsb4T + LbwsdP3v)).KlIUDxrG, &(*(pUIsb4T + LbwsdP3v)).ordoBjhaQuP8);
        if ((80 < (*(pUIsb4T + LbwsdP3v)).wye9lWCY) && (1 <= (*(pUIsb4T + LbwsdP3v)).ordoBjhaQuP8))
            mWNAwGUS = mWNAwGUS + 8000;
        if ((85 < (*(pUIsb4T + LbwsdP3v)).wye9lWCY) && ((*(pUIsb4T + LbwsdP3v)).UdRPQhKt0CF > 80))
            mWNAwGUS = mWNAwGUS + 4000;
        if (90 < (*(pUIsb4T + LbwsdP3v)).wye9lWCY)
            mWNAwGUS = mWNAwGUS + 2000;
        if ((85 < (*(pUIsb4T + LbwsdP3v)).wye9lWCY) && ((*(pUIsb4T + LbwsdP3v)).KlIUDxrG == 'Y'))
            mWNAwGUS = mWNAwGUS + 1000;
        if (((*(pUIsb4T + LbwsdP3v)).UdRPQhKt0CF > 80) && ((*(pUIsb4T + LbwsdP3v)).cEXQYieh == 'Y'))
            mWNAwGUS = mWNAwGUS + 850;
        if (mWNAwGUS > lOxocRKFS) {
            nY0lAPV9n = LbwsdP3v;
            lOxocRKFS = mWNAwGUS;
        }
        sN9yTljr = sN9yTljr + mWNAwGUS;
    }
    printf ("%s\n%d\n%d\n", (*(pUIsb4T + nY0lAPV9n)).Qdl5treP7YS, lOxocRKFS, sN9yTljr);
}

