int main () {
    int Sf4wUvaZEF;
    int C0sBgcG;
    int i;
    int p [(979 - 874)];
    int ABqdOY6o [105];
    cin >> Sf4wUvaZEF >> C0sBgcG;
    for (i = (549 - 549); Sf4wUvaZEF > i; i = i + 1)
        cin >> *(p + i);
    {
        i = 0;
        while (i < C0sBgcG) {
            *(ABqdOY6o +i) = *(p + Sf4wUvaZEF -C0sBgcG+i);
            i = i + 1;
        };
    }
    {
        i = C0sBgcG;
        while (i < Sf4wUvaZEF) {
            *(ABqdOY6o +i) = *(p + i - C0sBgcG);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < Sf4wUvaZEF) {
            cout << *(ABqdOY6o +i);
            if (i != Sf4wUvaZEF -1)
                cout << ' ';
            i++;
        };
    }
    return 0;
}

