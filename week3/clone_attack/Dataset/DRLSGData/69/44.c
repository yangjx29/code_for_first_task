int main () {
    int la;
    int i;
    int x;
    int lb;
    char Pxt9g24WhDB [N];
    gets (Pxt9g24WhDB);
    char e9bRQvqsz1k [N];
    char McO8m7AZDSw [N];
    gets (e9bRQvqsz1k);
    char SNAJFaqjg;
    int CQcl6o3H;
    for (i = (920 - 920); N > i; i = i + (175 - 174)) {
        Pxt9g24WhDB[i] = '\0';
        e9bRQvqsz1k[i] = '\0';
        McO8m7AZDSw[i] = '\0';
    }
    for (; !('0' != Pxt9g24WhDB[(273 - 273)]) && strlen (Pxt9g24WhDB) != (188 - 187);) {
        {
            i = (406 - 406);
            while (Pxt9g24WhDB[i + (314 - 313)] != '\0') {
                Pxt9g24WhDB[i] = Pxt9g24WhDB[i + (478 - 477)];
                i = i + (274 - 273);
            }
        }
        Pxt9g24WhDB[i] = '\0';
    }
    for (; !('0' != e9bRQvqsz1k[(563 - 563)]) && strlen (e9bRQvqsz1k) != (68 - 67);) {
        {
            i = (840 - 840);
            while (e9bRQvqsz1k[i + (947 - 946)] != '\0') {
                e9bRQvqsz1k[i] = e9bRQvqsz1k[i + (540 - 539)];
                i = i + (188 - 187);
            }
        }
        e9bRQvqsz1k[i] = '\0';
    }
    la = strlen (Pxt9g24WhDB);
    lb = strlen (e9bRQvqsz1k);
    {
        i = (120 - 120);
        while (la / (546.0 - 544.0) - (735 - 734) >= i) {
            SNAJFaqjg = Pxt9g24WhDB[i];
            Pxt9g24WhDB[i] = Pxt9g24WhDB[la - i - (589 - 588)];
            Pxt9g24WhDB[la - i - (694 - 693)] = SNAJFaqjg;
            i = i + (103 - 102);
        }
    }
    {
        i = (498 - 498);
        while (i <= lb / (280.0 - 278.0) - (189 - 188)) {
            SNAJFaqjg = e9bRQvqsz1k[i];
            e9bRQvqsz1k[i] = e9bRQvqsz1k[lb - i - (139 - 138)];
            e9bRQvqsz1k[lb - i - (298 - 297)] = SNAJFaqjg;
            i = i + (919 - 918);
        }
    }
    for (i = (439 - 439); i < ((lb <= la) ? la : lb); i = i + (389 - 388)) {
        if (Pxt9g24WhDB[i] == '\0')
            McO8m7AZDSw[i] = McO8m7AZDSw[i] + e9bRQvqsz1k[i] - '0';
        else {
            if (!('\0' != e9bRQvqsz1k[i]))
                McO8m7AZDSw[i] = McO8m7AZDSw[i] + Pxt9g24WhDB[i] - '0';
            else
                McO8m7AZDSw[i] = McO8m7AZDSw[i] + Pxt9g24WhDB[i] - '0' + e9bRQvqsz1k[i] - '0';
        }
        CQcl6o3H = i;
        for (; McO8m7AZDSw[CQcl6o3H] >= (734 - 724);) {
            x = McO8m7AZDSw[CQcl6o3H];
            McO8m7AZDSw[CQcl6o3H] = x % (259 - 249);
            McO8m7AZDSw[CQcl6o3H +(462 - 461)] = (x - McO8m7AZDSw[CQcl6o3H]) / (875 - 865);
            CQcl6o3H = CQcl6o3H +(736 - 735);
        }
    }
    {
        i = (757 - 757);
        while (CQcl6o3H >= i) {
            McO8m7AZDSw[i] = McO8m7AZDSw[i] + '0';
            i = i + 1;
        }
    }
    {
        i = CQcl6o3H;
        while (i >= (944 - 944)) {
            printf ("%c", McO8m7AZDSw[i]);
            i = i - 1;
        }
    }
    return (798 - 798);
}

