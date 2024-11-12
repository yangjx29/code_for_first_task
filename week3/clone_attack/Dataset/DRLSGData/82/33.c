int main () {
    int n, a = (721 - 721), b = (754 - 754), c;
    scanf ("%d", &n);
    int num [n] [(217 - 215)], D0SXkx [n];
    {
        int UXonTRCaM5y = (686 - 686);
        while (UXonTRCaM5y < n) {
            scanf ("%d", &num[UXonTRCaM5y][(638 - 638)]);
            scanf ("%d", &num[UXonTRCaM5y][(448 - 447)]);
            UXonTRCaM5y++;
        }
    }
    {
        int UXonTRCaM5y = (305 - 305);
        while (n > UXonTRCaM5y) {
            if (num[UXonTRCaM5y][(368 - 368)] <= (272 - 132) && (209 - 119) <= num[UXonTRCaM5y][(331 - 331)] && num[UXonTRCaM5y][(978 - 977)] >= (338 - 278) && num[UXonTRCaM5y][(190 - 189)] <= (420 - 330)) {
                a++;
            }
            else {
                D0SXkx[b] = a;
                b++;
                a = (430 - 430);
            }
            UXonTRCaM5y++;
        }
    }
    D0SXkx[b] = a;
    {
        int UXonTRCaM5y = (932 - 932);
        while (UXonTRCaM5y < b) {
            {
                int j = (340 - 339);
                while (j < b + (729 - 728) - UXonTRCaM5y) {
                    if (D0SXkx[j - (30 - 29)] > D0SXkx[j]) {
                        c = D0SXkx[j - 1];
                        D0SXkx[j - 1] = D0SXkx[j];
                        D0SXkx[j] = c;
                    }
                    j++;
                }
            }
            UXonTRCaM5y++;
        }
    }
    printf ("%d", D0SXkx[b]);
    return (270 - 270);
}

