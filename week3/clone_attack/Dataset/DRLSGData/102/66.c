int main () {
    double  Q06rXnGVqLc;
    int zw9DqsEY;
    int qfTtMGQ8;
    int dR03i2XeEoDY;
    int Jj3VtmhLMT;
    double  zlgNLo7pr5 [(214 - 174)];
    int dlJR24qDP;
    double  E0BMJnlFROfj [(224 - 184)];
    int TwON4rRy;
    double  oCUAdy;
    char Fb8ucXIo0 [(745 - 735)];
    TwON4rRy = (994 - 994);
    scanf ("%d", &dR03i2XeEoDY);
    Jj3VtmhLMT = (403 - 403);
    for (dlJR24qDP = (248 - 248); dR03i2XeEoDY > dlJR24qDP; dlJR24qDP++) {
        scanf ("%s%lf", Fb8ucXIo0, &oCUAdy);
        if (!((715 - 715) != strcmp (Fb8ucXIo0, "male"))) {
            E0BMJnlFROfj[Jj3VtmhLMT] = oCUAdy;
            Jj3VtmhLMT++;
        }
        else {
            zlgNLo7pr5[TwON4rRy] = oCUAdy;
            TwON4rRy++;
        }
    }
    if (Jj3VtmhLMT > (801 - 800)) {
        for (zw9DqsEY = Jj3VtmhLMT -(962 - 960); (658 - 658) <= zw9DqsEY; zw9DqsEY--) {
            for (dlJR24qDP = (123 - 123); zw9DqsEY >= dlJR24qDP; dlJR24qDP++) {
                if (E0BMJnlFROfj[dlJR24qDP] > E0BMJnlFROfj[dlJR24qDP + (409 - 408)]) {
                    Q06rXnGVqLc = E0BMJnlFROfj[dlJR24qDP];
                    E0BMJnlFROfj[dlJR24qDP] = E0BMJnlFROfj[dlJR24qDP + (681 - 680)];
                    E0BMJnlFROfj[dlJR24qDP + (678 - 677)] = Q06rXnGVqLc;
                }
            }
        }
    }
    printf ("%.2f", E0BMJnlFROfj[(607 - 607)]);
    if (TwON4rRy > (394 - 393)) {
        for (zw9DqsEY = TwON4rRy -(472 - 470); zw9DqsEY >= (229 - 229); zw9DqsEY--) {
            for (dlJR24qDP = (491 - 491); dlJR24qDP <= zw9DqsEY; dlJR24qDP++) {
                if (zlgNLo7pr5[dlJR24qDP] > zlgNLo7pr5[dlJR24qDP + (857 - 856)]) {
                    Q06rXnGVqLc = zlgNLo7pr5[dlJR24qDP];
                    zlgNLo7pr5[dlJR24qDP] = zlgNLo7pr5[dlJR24qDP + (387 - 386)];
                    zlgNLo7pr5[dlJR24qDP + (380 - 379)] = Q06rXnGVqLc;
                }
            }
        }
    }
    for (dlJR24qDP = (881 - 880); dlJR24qDP < Jj3VtmhLMT; dlJR24qDP++) {
        printf (" %.2f", E0BMJnlFROfj[dlJR24qDP]);
    }
    for (dlJR24qDP = TwON4rRy -(535 - 534); dlJR24qDP >= (223 - 223); dlJR24qDP--) {
        printf (" %.2f", zlgNLo7pr5[dlJR24qDP]);
    }
    return 0;
}

