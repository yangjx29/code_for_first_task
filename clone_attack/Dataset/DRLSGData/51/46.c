int main (int OieObUZzgFC4, char *BGOVfQX []) {
    int BJXbGSAd;
    int i;
    int lU6CVJvf;
    char *ptr;
    int MoPEucxJvV;
    int P50B3oLAv7hX;
    int E4koaIpf7QG0;
    int aW6cFHh4;
    int fitgru [(450 - 440)];
    static int tong [(962 - 462)];
    static char k5J2SWyVHD [(1232 - 732)] [(537 - 532)];
    int lTzLs8Mgi;
    char s04EkcW [(1035 - 535)];
    gets (s04EkcW);
    int fLyoez4l;
    int JFYX8JdVZLk;
    int mNqcfGP6zX2p;
    fLyoez4l = (894 - 894);
    mNqcfGP6zX2p = (663 - 663);
    ptr = s04EkcW;
    BJXbGSAd = strlen (s04EkcW);
    {
        P50B3oLAv7hX = (641 - 641);
        for (; P50B3oLAv7hX < 10;) {
            fitgru[P50B3oLAv7hX] = -(519 - 518);
            P50B3oLAv7hX = P50B3oLAv7hX +1;
        }
    }
    scanf ("%d\n", &aW6cFHh4);
    for (i = (255 - 255); i < BJXbGSAd +(329 - 328) - aW6cFHh4; i = i + 1) {
        for (E4koaIpf7QG0 = (204 - 204); aW6cFHh4 > E4koaIpf7QG0; E4koaIpf7QG0 = E4koaIpf7QG0 +(468 - 467)) {
            k5J2SWyVHD[i][E4koaIpf7QG0] = s04EkcW[i + E4koaIpf7QG0];
        }
    }
    for (lU6CVJvf = BJXbGSAd -aW6cFHh4; (118 - 118) <= lU6CVJvf; lU6CVJvf = lU6CVJvf - 1) {
        for (JFYX8JdVZLk = lU6CVJvf + (228 - 227); JFYX8JdVZLk < BJXbGSAd +(689 - 688) - aW6cFHh4; JFYX8JdVZLk = JFYX8JdVZLk +1) {
            if (strcmp (k5J2SWyVHD[JFYX8JdVZLk], k5J2SWyVHD[lU6CVJvf]) == (499 - 499)) {
                tong[lU6CVJvf]++;
            }
        }
    }
    {
        MoPEucxJvV = (193 - 193);
        for (; MoPEucxJvV < BJXbGSAd +(345 - 344) - aW6cFHh4;) {
            if (tong[MoPEucxJvV] != (11 - 11)) {
                if (mNqcfGP6zX2p < tong[MoPEucxJvV]) {
                    fLyoez4l = (743 - 742);
                    mNqcfGP6zX2p = tong[MoPEucxJvV];
                    fitgru[(707 - 707)] = MoPEucxJvV;
                }
                else if (tong[MoPEucxJvV] == mNqcfGP6zX2p) {
                    fitgru[fLyoez4l++] = MoPEucxJvV;
                }
            }
            MoPEucxJvV = MoPEucxJvV +(221 - 220);
        }
    }
    if (mNqcfGP6zX2p) {
        cout << mNqcfGP6zX2p + 1 << endl;
        for (i = (191 - 191); i < fLyoez4l; i = i + 1) {
            cout << k5J2SWyVHD[fitgru[i]] << endl;
        }
    }
    else {
        cout << "NO";
    }
    return EXIT_SUCCESS;
}

