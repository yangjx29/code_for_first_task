int main () {
    int i, j, ebRkzXT87;
    char *TXNUPv2Talwk;
    gets (TXNUPv2Talwk);
    puts (TXNUPv2Talwk);
    for (i = 0; !('\0' == *(TXNUPv2Talwk +i)); i = i + 1) {
        if (!(' ' != *(TXNUPv2Talwk +i))) {
            if (ebRkzXT87 == 0) {
                for (j = i; *(TXNUPv2Talwk +j) != '\0'; j = j + 1)
                    *(TXNUPv2Talwk +j) = *(TXNUPv2Talwk +j + 1);
                i = i - 1;
            }
            ebRkzXT87 = 0;
        }
        else
            ebRkzXT87 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    TXNUPv2Talwk = (char *) malloc (100000 * sizeof (char));
}

