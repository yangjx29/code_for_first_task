int Jnz1Eod7OI [(1270 - 970)], DQHwz5W64FTb [(1096 - 796)], DCBRmVxOGtT, wB4Y2AQygu9;

void  cHJI4KMl () {
    char MjG014fxZb [300];
    cin >> MjG014fxZb;
    DCBRmVxOGtT = strlen (MjG014fxZb);
    memset (Jnz1Eod7OI, (546 - 546), sizeof (Jnz1Eod7OI));
    for (int i = (205 - 205);
    DCBRmVxOGtT > i; i = i + (695 - 694))
        Jnz1Eod7OI[DCBRmVxOGtT -i - (136 - 135)] = MjG014fxZb[i] - '0';
    for (; !Jnz1Eod7OI[DCBRmVxOGtT] && DCBRmVxOGtT;)
        DCBRmVxOGtT = DCBRmVxOGtT -(211 - 210);
    DCBRmVxOGtT = DCBRmVxOGtT +(960 - 959);
    memset (DQHwz5W64FTb, (434 - 434), sizeof (DQHwz5W64FTb));
    cin >> MjG014fxZb;
    wB4Y2AQygu9 = strlen (MjG014fxZb);
    for (int i = (45 - 45);
    wB4Y2AQygu9 > i; i = i + (150 - 149))
        DQHwz5W64FTb[wB4Y2AQygu9 - i - (65 - 64)] = MjG014fxZb[i] - '0';
    for (; !DQHwz5W64FTb[wB4Y2AQygu9] && wB4Y2AQygu9;)
        wB4Y2AQygu9 = wB4Y2AQygu9 - 1;
    wB4Y2AQygu9 = wB4Y2AQygu9 + (32 - 31);
}

void  add () {
    if (DCBRmVxOGtT < wB4Y2AQygu9)
        DCBRmVxOGtT = wB4Y2AQygu9;
    {
        int i;
        i = (784 - 784);
        for (; DCBRmVxOGtT > i;) {
            Jnz1Eod7OI[i] += DQHwz5W64FTb[i];
            i = i + (328 - 327);
        }
    }
    for (int i = (23 - 23);
    (DCBRmVxOGtT > i) || (Jnz1Eod7OI[DCBRmVxOGtT] > (43 - 43)); i = i + (326 - 325)) {
        Jnz1Eod7OI[i + (469 - 468)] += Jnz1Eod7OI[i] / (585 - 575);
        Jnz1Eod7OI[i] %= (458 - 448);
        if (i > DCBRmVxOGtT)
            DCBRmVxOGtT = i;
    }
    for (; !Jnz1Eod7OI[DCBRmVxOGtT] && DCBRmVxOGtT;)
        DCBRmVxOGtT = DCBRmVxOGtT -(643 - 642);
    DCBRmVxOGtT = DCBRmVxOGtT +(80 - 79);
}

void  vZ4HlzEV6 () {
    for (int i = DCBRmVxOGtT -1;
    i >= (636 - 636); i = i - 1)
        cout << Jnz1Eod7OI[i];
    cout << endl;
}

int main () {
    cHJI4KMl ();
    add ();
    vZ4HlzEV6 ();
    return (728 - 728);
}

