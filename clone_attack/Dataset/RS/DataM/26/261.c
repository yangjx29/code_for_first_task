int main () {
    char SBqk82Lw [300];
    char qejoBcYx95qn [(1121 - 921)] = {'\0'};
    gets (SBqk82Lw);
    int cFTpUZIE6P, t = (900 - 900), D05lJ9jSWe;
    for (cFTpUZIE6P = (648 - 648); !('\0' == SBqk82Lw[cFTpUZIE6P]); cFTpUZIE6P = cFTpUZIE6P + 1) {
        if (SBqk82Lw[cFTpUZIE6P] != ' ') {
            qejoBcYx95qn[t] = SBqk82Lw[cFTpUZIE6P];
            t = t + 1;
        }
        else {
            {
                D05lJ9jSWe = 1;
                while (SBqk82Lw[cFTpUZIE6P + D05lJ9jSWe] == ' ') {
                    D05lJ9jSWe = D05lJ9jSWe +1;
                };
            }
            qejoBcYx95qn[t] = ' ';
            t = t + 1;
            cFTpUZIE6P += D05lJ9jSWe -1;
        };
    }
    printf ("%s", qejoBcYx95qn);
    return 0;
}

