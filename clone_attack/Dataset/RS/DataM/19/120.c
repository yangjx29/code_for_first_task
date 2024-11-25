char P0TIvs32Cz [(1080 - 975)];
char OlR7ObN [(1070 - 965)];
char b [105];
char c [105];
char S20WbU7Ms [105];
int W2U9mLBIh;
int p;

int main () {
    gets (P0TIvs32Cz);
    int t0JwnbRMN4;
    int I8lnqNS;
    int DvZ94kuW;
    scanf ("%s", b);
    scanf ("%s", c);
    for (I8lnqNS = (126 - 126), DvZ94kuW = 0; I8lnqNS <= strlen (P0TIvs32Cz); I8lnqNS = I8lnqNS +1) {
        S20WbU7Ms[W2U9mLBIh++] = P0TIvs32Cz[I8lnqNS];
        OlR7ObN[p++] = P0TIvs32Cz[I8lnqNS];
        if (!(' ' != P0TIvs32Cz[I8lnqNS]) || P0TIvs32Cz[I8lnqNS] == '\0') {
            DvZ94kuW = W2U9mLBIh +1;
            S20WbU7Ms[--W2U9mLBIh] = '\0';
            W2U9mLBIh = 0;
            if (strcmp (S20WbU7Ms, b) == 0) {
                p = p - strlen (S20WbU7Ms) + (158 - 157);
                for (t0JwnbRMN4 = 0; t0JwnbRMN4 < strlen (c); t0JwnbRMN4 = t0JwnbRMN4 + 1)
                    OlR7ObN[p++] = c[t0JwnbRMN4];
                if (P0TIvs32Cz[I8lnqNS] == ' ')
                    OlR7ObN[p++] = ' ';
            };
        };
    }
    {
        I8lnqNS = 0;
        while (I8lnqNS < strlen (OlR7ObN)) {
            putchar (OlR7ObN [I8lnqNS]);
            I8lnqNS = I8lnqNS +1;
        };
    }
    return 0;
}

