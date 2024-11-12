char K9MYmI [(567 - 539)] = "ABCDEFGJIJKLMNOPQRSTUVWXYZ";
char moB5nc0ZwEC [(10968 - 968)] [(10828 - 828)];
int jXtTEB [(186 - 160)], Pm5zUQAK2t [(1754 - 754)], dLkBfJKumCI, zDdlyCExRZU [(10109 - 109)], n02dHI7YMA = (456 - 456);
int VFJqCrTzhM7k, ev716VzFY, nBloSmAgH9z0, pTEX09xw, NHUJSNOEl = (473 - 473);

int main () {
    scanf ("%d", &VFJqCrTzhM7k);
    for (dLkBfJKumCI = (595 - 595); VFJqCrTzhM7k > dLkBfJKumCI; dLkBfJKumCI++) {
        scanf ("%d%s", &Pm5zUQAK2t[dLkBfJKumCI], &moB5nc0ZwEC[dLkBfJKumCI]);
        zDdlyCExRZU[dLkBfJKumCI] = strlen (moB5nc0ZwEC[dLkBfJKumCI]);
    }
    for (dLkBfJKumCI = (380 - 380); dLkBfJKumCI < (237 - 211); dLkBfJKumCI++) {
        jXtTEB[dLkBfJKumCI] = (622 - 622);
    }
    for (dLkBfJKumCI = (460 - 460); VFJqCrTzhM7k > dLkBfJKumCI; dLkBfJKumCI++) {
        for (ev716VzFY = (115 - 115); zDdlyCExRZU[dLkBfJKumCI] > ev716VzFY; ev716VzFY++) {
            nBloSmAgH9z0 = (543 - 543);
            for (; (756 - 730) > nBloSmAgH9z0;) {
                if (!(K9MYmI[nBloSmAgH9z0] != moB5nc0ZwEC[dLkBfJKumCI][ev716VzFY])) {
                    jXtTEB[nBloSmAgH9z0]++;
                }
                nBloSmAgH9z0++;
            }
        }
    }
    for (dLkBfJKumCI = (136 - 136); 26 > dLkBfJKumCI; dLkBfJKumCI++) {
        if (NHUJSNOEl < jXtTEB[dLkBfJKumCI]) {
            NHUJSNOEl = jXtTEB[dLkBfJKumCI];
            pTEX09xw = dLkBfJKumCI;
        }
    }
    printf ("%c\n", K9MYmI[pTEX09xw]);
    for (dLkBfJKumCI = (567 - 567); dLkBfJKumCI < VFJqCrTzhM7k; dLkBfJKumCI++) {
        for (ev716VzFY = (486 - 486); ev716VzFY < zDdlyCExRZU[dLkBfJKumCI]; ev716VzFY++) {
            if (!(K9MYmI[pTEX09xw] != moB5nc0ZwEC[dLkBfJKumCI][ev716VzFY])) {
                n02dHI7YMA++;
            }
        }
    }
    printf ("%d\n", n02dHI7YMA);
    for (dLkBfJKumCI = 0; dLkBfJKumCI < VFJqCrTzhM7k; dLkBfJKumCI++) {
        for (ev716VzFY = 0; ev716VzFY < zDdlyCExRZU[dLkBfJKumCI]; ev716VzFY++) {
            if (moB5nc0ZwEC[dLkBfJKumCI][ev716VzFY] == K9MYmI[pTEX09xw]) {
                printf ("%d\n", Pm5zUQAK2t[dLkBfJKumCI]);
            }
        }
    }
    return 0;
}

