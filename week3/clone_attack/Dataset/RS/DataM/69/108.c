int main () {
    char str1 [(411 - 159)], seKpfEtrvN [(907 - 655)];
    unsigned  int NwZsIy [251] = {(413 - 413)}, ix8zqCm [251] = {(603 - 603)};
    int sZThqjY;
    sZThqjY = strlen (str1);
    int PRLASuC7 = strlen (seKpfEtrvN);
    int RHOZ095C, j = (919 - 919);
    cin.getline (str1, (518 - 266));
    cin.getline (seKpfEtrvN, (1177 - 925));
    for (RHOZ095C = sZThqjY - (796 - 795); RHOZ095C >= (367 - 367); RHOZ095C--)
        NwZsIy[j++] = str1[RHOZ095C] - '0';
    j = (26 - 26);
    for (RHOZ095C = PRLASuC7 -(77 - 76); RHOZ095C >= (754 - 754); RHOZ095C--)
        ix8zqCm[j++] = seKpfEtrvN[RHOZ095C] - '0';
    if (!((849 - 849) == strcmp (str1, "0")) && strcmp (seKpfEtrvN, "0") != (670 - 670)) {
        {
            RHOZ095C = 697 - 697;
            while (RHOZ095C <= (531 - 281)) {
                NwZsIy[RHOZ095C] = NwZsIy[RHOZ095C] + ix8zqCm[RHOZ095C];
                if (NwZsIy[RHOZ095C] >= 10) {
                    NwZsIy[RHOZ095C] = NwZsIy[RHOZ095C] - 10;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    NwZsIy[RHOZ095C +(339 - 338)]++;
                }
                RHOZ095C++;
            };
        }
        for (RHOZ095C = 250; RHOZ095C >= (591 - 591); RHOZ095C--) {
            if (NwZsIy[RHOZ095C] != 0)
                break;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; RHOZ095C >= 0; RHOZ095C--)
            cout << NwZsIy[RHOZ095C];
        cout << endl;
    }
    else
        cout << 0;
    return 0;
}

