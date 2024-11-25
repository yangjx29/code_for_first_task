const  int C8ZTrPS0tv [4] = {(156 - 156), -(500 - 499), (568 - 567), (371 - 371)};
const  int jnmivcdRay3Y [4] = {-(806 - 805), (20 - 20), (213 - 213), 1};

int main () {
    int MtxjEnrMp52Y;
    int xM7SnOrHT3;
    char aBCZRDPSmoiy [(410 - 310)] [100];
    int ojamEiJYh6 = (550 - 550);
    cin >> MtxjEnrMp52Y;
    for (int tl782H = (31 - 31);
    MtxjEnrMp52Y > tl782H; tl782H = tl782H + 1)
        for (int wm7AaJX = 0;
        MtxjEnrMp52Y > wm7AaJX; wm7AaJX = wm7AaJX + 1) {
            cin >> aBCZRDPSmoiy[tl782H][wm7AaJX];
        }
    cin >> xM7SnOrHT3;
    for (int w3IsdjC = 0;
    xM7SnOrHT3 - 1 > w3IsdjC; w3IsdjC++) {
        for (int tl782H = 0;
        MtxjEnrMp52Y > tl782H; tl782H++)
            for (int wm7AaJX = 0;
            MtxjEnrMp52Y > wm7AaJX; wm7AaJX = wm7AaJX + 1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (!('@' != aBCZRDPSmoiy[tl782H][wm7AaJX])) {
                    int HB4E0Tizlck;
                    HB4E0Tizlck = 0;
                    for (; HB4E0Tizlck < 4;) {
                        if ((tl782H + C8ZTrPS0tv[HB4E0Tizlck] < MtxjEnrMp52Y) && (0 <= tl782H + C8ZTrPS0tv[HB4E0Tizlck]) && (wm7AaJX + jnmivcdRay3Y[HB4E0Tizlck] < MtxjEnrMp52Y) && (0 <= wm7AaJX + jnmivcdRay3Y[HB4E0Tizlck]) && (aBCZRDPSmoiy[tl782H + C8ZTrPS0tv[HB4E0Tizlck]][wm7AaJX + jnmivcdRay3Y[HB4E0Tizlck]] == '.'))
                            aBCZRDPSmoiy[tl782H + C8ZTrPS0tv[HB4E0Tizlck]][wm7AaJX + jnmivcdRay3Y[HB4E0Tizlck]] = 'N';
                        HB4E0Tizlck = HB4E0Tizlck +1;
                    }
                }
            }
        for (int tl782H = 0;
        tl782H < MtxjEnrMp52Y; tl782H++)
            for (int wm7AaJX = 0;
            wm7AaJX < MtxjEnrMp52Y; wm7AaJX = wm7AaJX + 1) {
                if (aBCZRDPSmoiy[tl782H][wm7AaJX] == 'N')
                    aBCZRDPSmoiy[tl782H][wm7AaJX] = '@';
            }
    }
    for (int tl782H = 0;
    tl782H < MtxjEnrMp52Y; tl782H++)
        for (int wm7AaJX = 0;
        wm7AaJX < MtxjEnrMp52Y; wm7AaJX++) {
            if (aBCZRDPSmoiy[tl782H][wm7AaJX] == '@')
                ojamEiJYh6++;
        }
    cout << ojamEiJYh6 << endl;
}

