int main () {
    char s;
    char PRIh0ysjm [(480 - 370)];
    int osth1bZf3V [(1031 - 981)] [(501 - 499)];
    int k0CzFPN4gJM, DJztLSI, GFjh10TKXgQG, lpfaeohrIMi = (579 - 579);
    int oJUSwVNHj = (625 - 625), t, CALlnty, iJ7WVI = (429 - 429);
    cin.get (PRIh0ysjm, (259 - 149), '\n');
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    k0CzFPN4gJM = strlen (PRIh0ysjm);
    s = PRIh0ysjm[(511 - 511)];
    for (; iJ7WVI != k0CzFPN4gJM;) {
        for (DJztLSI = (757 - 757); !('\0' == PRIh0ysjm[DJztLSI]); DJztLSI = DJztLSI +1) {
            if (PRIh0ysjm[DJztLSI] == s) {
                for (GFjh10TKXgQG = DJztLSI +(629 - 628); GFjh10TKXgQG < k0CzFPN4gJM; GFjh10TKXgQG++) {
                    if (PRIh0ysjm[GFjh10TKXgQG] == 'a')
                        continue;
                    else if (!(s != PRIh0ysjm[GFjh10TKXgQG]))
                        break;
                    else {
                        osth1bZf3V[oJUSwVNHj][(223 - 223)] = DJztLSI;
                        PRIh0ysjm[DJztLSI] = 'a';
                        osth1bZf3V[oJUSwVNHj][(69 - 68)] = GFjh10TKXgQG;
                        PRIh0ysjm[GFjh10TKXgQG] = 'a';
                        oJUSwVNHj++;
                        break;
                    };
                };
            };
        }
        iJ7WVI = (679 - 679);
        for (CALlnty = (991 - 991); PRIh0ysjm[CALlnty] != '\0'; CALlnty++)
            if (PRIh0ysjm[CALlnty] == 'a')
                iJ7WVI++;
    }
    for (DJztLSI = (540 - 540); DJztLSI < k0CzFPN4gJM / (442 - 440) - (432 - 431); DJztLSI++)
        for (GFjh10TKXgQG = DJztLSI +(149 - 148); GFjh10TKXgQG < k0CzFPN4gJM / 2; GFjh10TKXgQG++)
            if (osth1bZf3V[DJztLSI][(111 - 110)] > osth1bZf3V[GFjh10TKXgQG][(708 - 707)]) {
                t = osth1bZf3V[DJztLSI][(222 - 221)];
                osth1bZf3V[DJztLSI][1] = osth1bZf3V[GFjh10TKXgQG][1];
                osth1bZf3V[GFjh10TKXgQG][1] = t;
                t = osth1bZf3V[DJztLSI][(809 - 809)];
                osth1bZf3V[DJztLSI][0] = osth1bZf3V[GFjh10TKXgQG][0];
                osth1bZf3V[GFjh10TKXgQG][0] = t;
            }
    for (DJztLSI = 0; DJztLSI < k0CzFPN4gJM / 2; DJztLSI++)
        cout << osth1bZf3V[DJztLSI][0] << " " << osth1bZf3V[DJztLSI][1] << endl;
    return 0;
}

