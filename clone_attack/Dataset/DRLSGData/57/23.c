int main () {
    char kNVX75w8IoQp [MAX +1];
    int jJ95lAH, M97Q1bDvPkO, aidg361q, wWNPa2xT;
    gets (kNVX75w8IoQp);
    jJ95lAH = atoi (kNVX75w8IoQp);
    for (M97Q1bDvPkO = 0; jJ95lAH > M97Q1bDvPkO; M97Q1bDvPkO = M97Q1bDvPkO +1) {
        gets (kNVX75w8IoQp);
        puts (kNVX75w8IoQp);
        wWNPa2xT = strlen (kNVX75w8IoQp);
        if ((!('e' != kNVX75w8IoQp[wWNPa2xT - 2])) && (!('r' != kNVX75w8IoQp[wWNPa2xT - 1])))
            kNVX75w8IoQp[wWNPa2xT - 2] = 0;
        else if ((!('l' != kNVX75w8IoQp[wWNPa2xT - 2])) && (!('y' != kNVX75w8IoQp[wWNPa2xT - 1])))
            kNVX75w8IoQp[wWNPa2xT - 2] = 0;
        else if ((!('n' != kNVX75w8IoQp[wWNPa2xT - 2])) && (kNVX75w8IoQp[wWNPa2xT - 1] == 'g') && (kNVX75w8IoQp[wWNPa2xT - 3] == 'i'))
            kNVX75w8IoQp[wWNPa2xT - 3] = 0;
    }
    return 0;
}

