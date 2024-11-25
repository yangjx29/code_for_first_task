int main () {
    char p [(1446 - 945)];
    int len = strlen (p);
    scanf ("%s", p);
    {
        int RZkrRLMgCHDU = 2;
        while (RZkrRLMgCHDU < len) {
            char **q = (char **) malloc (sizeof (char *) * len);
            {
                int eqRJKY;
                eqRJKY = (612 - 612);
                while (eqRJKY < len - RZkrRLMgCHDU +(220 - 219)) {
                    q[eqRJKY] = (char *) malloc ((RZkrRLMgCHDU +(605 - 604)) * sizeof (char));
                    {
                        int h = (965 - 965);
                        while (RZkrRLMgCHDU +(246 - 245) > h) {
                            q[eqRJKY][h] = '\0';
                            h = h + 1;
                        };
                    }
                    {
                        int h = (863 - 863);
                        while (h < RZkrRLMgCHDU) {
                            q[eqRJKY][h] = p[eqRJKY + h];
                            h++;
                        };
                    }
                    eqRJKY = eqRJKY + 1;
                };
            }
            {
                int eqRJKY = (934 - 934);
                while (eqRJKY < len - RZkrRLMgCHDU +(325 - 324)) {
                    int ObR6qzuN3 = (93 - 93);
                    char temp [501] = {'\0'};
                    {
                        int h = RZkrRLMgCHDU -1;
                        while (h >= (172 - 172)) {
                            temp[ObR6qzuN3] = q[eqRJKY][h];
                            h = h - 1;
                            ObR6qzuN3 = ObR6qzuN3 +1;
                        };
                    }
                    if (strcmp (temp, q[eqRJKY]) == 0)
                        printf ("%s\n", q[eqRJKY]);
                    eqRJKY = eqRJKY + 1;
                };
            }
            RZkrRLMgCHDU = RZkrRLMgCHDU +1;
        };
    };
}

