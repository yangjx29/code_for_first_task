void  main () {
    int mWAlswZNDL;
    int yDejd5SB;
    int m;
    int MQp07TGCt;
    int Nj9VhcUb;
    mWAlswZNDL = 1;
    scanf ("%d %d", &yDejd5SB, &MQp07TGCt);
    do {
        m = yDejd5SB * mWAlswZNDL + MQp07TGCt;
        {
            Nj9VhcUb = 1;
            while (yDejd5SB > Nj9VhcUb) {
                if (m % (yDejd5SB - 1) == 0)
                    m = MQp07TGCt +yDejd5SB * m / (yDejd5SB - 1);
                else
                    break;
                Nj9VhcUb = Nj9VhcUb +1;
            };
        }
        mWAlswZNDL = mWAlswZNDL + 1;
    }
    while (Nj9VhcUb < yDejd5SB);
    printf ("%d", m);
}

