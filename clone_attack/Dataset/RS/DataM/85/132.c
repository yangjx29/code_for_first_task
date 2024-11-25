int main () {
    int u0YDle, FULfWJ, bnXRL6UuD, UpKtmW, xYm2wBhURO;
    char OL2XhMqdTbUu [u0YDle] [21], WfurUh2DYSC7, R9zpugJGH;
    scanf ("%d", &u0YDle);
    for (FULfWJ = (472 - 472); FULfWJ < u0YDle; FULfWJ = FULfWJ +1) {
        scanf ("%s", OL2XhMqdTbUu[FULfWJ]);
        bnXRL6UuD = strlen (OL2XhMqdTbUu[FULfWJ]);
        xYm2wBhURO = 0;
        for (UpKtmW = 0; UpKtmW < bnXRL6UuD; UpKtmW++) {
            if (UpKtmW == 0) {
                if (OL2XhMqdTbUu[FULfWJ][UpKtmW] == '_' || (OL2XhMqdTbUu[FULfWJ][UpKtmW] >= 'a' && OL2XhMqdTbUu[FULfWJ][UpKtmW] <= 'z') || (OL2XhMqdTbUu[FULfWJ][UpKtmW] >= 'A' && OL2XhMqdTbUu[FULfWJ][UpKtmW] <= 'Z')) {
                    xYm2wBhURO = xYm2wBhURO + 1;
                };
            }
            if (UpKtmW != 0) {
                if ((OL2XhMqdTbUu[FULfWJ][UpKtmW] >= '0' && OL2XhMqdTbUu[FULfWJ][UpKtmW] <= '9') || (OL2XhMqdTbUu[FULfWJ][UpKtmW] >= 'a' && OL2XhMqdTbUu[FULfWJ][UpKtmW] <= 'z') || (OL2XhMqdTbUu[FULfWJ][UpKtmW] >= 'A' && OL2XhMqdTbUu[FULfWJ][UpKtmW] <= 'Z' || OL2XhMqdTbUu[FULfWJ][UpKtmW] == '_')) {
                    xYm2wBhURO = xYm2wBhURO + 1;
                };
            };
        }
        if (xYm2wBhURO == bnXRL6UuD) {
        }
        else {
        };
    }
    return 0;
}

