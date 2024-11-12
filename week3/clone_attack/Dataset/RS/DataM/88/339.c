int main () {
    char fgKMkPxCTLG [35];
    gets (fgKMkPxCTLG);
    char *end = fgKMkPxCTLG + strlen (fgKMkPxCTLG);
    for (char *EUXpyMTQkqtR = fgKMkPxCTLG;
    end > EUXpyMTQkqtR; EUXpyMTQkqtR = EUXpyMTQkqtR +1) {
        if ('0' <= *EUXpyMTQkqtR&&'9' >= *EUXpyMTQkqtR) {
            printf ("%c", *EUXpyMTQkqtR);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        else {
            for (; !(*EUXpyMTQkqtR >= '0' && *EUXpyMTQkqtR <= '9');) {
                EUXpyMTQkqtR++;
            }
            EUXpyMTQkqtR--;
            printf ("\n");
        };
    }
    return 0;
}

