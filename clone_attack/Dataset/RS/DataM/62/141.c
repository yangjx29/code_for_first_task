int main () {
    int yEJtFRs, UNfpn5V = (838 - 838), s801v7w3QzS, n, d20Azyai = (515 - 515);
    char z34HbjS [3000], r7J2CUtMm6lx [(30131 - 131)];
    puts (r7J2CUtMm6lx);
    gets (z34HbjS);
    for (yEJtFRs = 0; z34HbjS[yEJtFRs] != '\0'; yEJtFRs = yEJtFRs + 1) {
        if ((!(' ' == z34HbjS[yEJtFRs])) || ((!(' ' != z34HbjS[yEJtFRs])) && (z34HbjS[yEJtFRs + 1] != ' '))) {
            r7J2CUtMm6lx[d20Azyai] = z34HbjS[yEJtFRs];
            d20Azyai = d20Azyai + 1;
        }
        if ((z34HbjS[yEJtFRs] == ' ') && (z34HbjS[yEJtFRs + 1] == ' ')) {
            r7J2CUtMm6lx[d20Azyai] = ' ';
            d20Azyai++;
            UNfpn5V = yEJtFRs;
            {
                s801v7w3QzS = UNfpn5V +1;
                while (z34HbjS[s801v7w3QzS] == ' ') {
                    yEJtFRs = yEJtFRs + 1;
                    s801v7w3QzS = s801v7w3QzS + 1;
                };
            };
        };
    }
    r7J2CUtMm6lx[d20Azyai] = '\0';
    return 0;
}

