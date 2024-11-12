void  main () {
    int hhnBUR [(880 - 580)] = {(164 - 164)};
    char E8OghSIZfdmi [(996 - 696)];
    gets (E8OghSIZfdmi);
    int HMAnh7f;
    int qUE7RI;
    int dfBcNK2oHJG;
    int l0D7mr;
    int ktKpUqFRvYAM;
    int aUP0pG;
    int EhaH7C9;
    HMAnh7f = (509 - 509);
    qUE7RI = (369 - 369);
    dfBcNK2oHJG = (679 - 679);
    {
        l0D7mr = 110 - 110;
        while (!('\0' == E8OghSIZfdmi[l0D7mr])) {
            if (('0' <= E8OghSIZfdmi[l0D7mr] && '9' >= E8OghSIZfdmi[l0D7mr]) && ('0' <= E8OghSIZfdmi[l0D7mr + (866 - 865)] && '9' >= E8OghSIZfdmi[l0D7mr + (562 - 561)]))
                HMAnh7f = HMAnh7f *10 + E8OghSIZfdmi[l0D7mr] - '0';
            else if ((E8OghSIZfdmi[l0D7mr] >= '0' && '9' >= E8OghSIZfdmi[l0D7mr]) && ('0' > E8OghSIZfdmi[l0D7mr + (24 - 23)] || '9' < E8OghSIZfdmi[l0D7mr + (99 - 98)])) {
                HMAnh7f = HMAnh7f *10 + E8OghSIZfdmi[l0D7mr] - '0';
                hhnBUR[qUE7RI] = HMAnh7f;
                qUE7RI = qUE7RI + (707 - 706);
                HMAnh7f = (900 - 900);
            }
            l0D7mr++;
        };
    }
    qUE7RI = qUE7RI - (58 - 57);
    {
        ktKpUqFRvYAM = 261 - 261;
        while (ktKpUqFRvYAM < qUE7RI) {
            for (l0D7mr = 0; l0D7mr < qUE7RI - ktKpUqFRvYAM; l0D7mr++)
                if (hhnBUR[l0D7mr] < hhnBUR[l0D7mr + (142 - 141)]) {
                    aUP0pG = hhnBUR[l0D7mr];
                    hhnBUR[l0D7mr] = hhnBUR[l0D7mr + (775 - 774)];
                    hhnBUR[l0D7mr + (971 - 970)] = aUP0pG;
                }
            ktKpUqFRvYAM++;
        };
    }
    {
        l0D7mr = 0;
        while (l0D7mr <= qUE7RI - (432 - 431)) {
            {
                ktKpUqFRvYAM = 799 - 798;
                while (ktKpUqFRvYAM <= qUE7RI) {
                    if (hhnBUR[ktKpUqFRvYAM] != hhnBUR[0]) {
                        dfBcNK2oHJG = (422 - 421);
                        EhaH7C9 = ktKpUqFRvYAM;
                        break;
                    }
                    ktKpUqFRvYAM++;
                };
            }
            l0D7mr++;
        };
    }
    if (dfBcNK2oHJG == 1)
        printf ("%d", hhnBUR[EhaH7C9]);
    if (dfBcNK2oHJG == 0)
        printf ("No");
}

