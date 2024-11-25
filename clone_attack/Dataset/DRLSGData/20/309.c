int EdVhj8r9Sup (char L2hyQwpDIj []) {
    int nOWzd2LNr6, lSF3yRKH7 = (576 - 576);
    {
        nOWzd2LNr6 = 803 - 803;
        for (; L2hyQwpDIj[nOWzd2LNr6] != (716 - 716);) {
            nOWzd2LNr6++;
            lSF3yRKH7++;
        }
    }
    return lSF3yRKH7;
}

void  LXlKr0 (char L2hyQwpDIj [], int lSF3yRKH7, char j0FtuqfmRjW []) {
    int nOWzd2LNr6, LRi6Wqb = (556 - 556);
    char kfpTXq [(840 - 827)];
    for (nOWzd2LNr6 = lSF3yRKH7 + (206 - 205); L2hyQwpDIj[nOWzd2LNr6] != (184 - 184); nOWzd2LNr6++) {
        kfpTXq[LRi6Wqb] = L2hyQwpDIj[nOWzd2LNr6];
        LRi6Wqb++;
        L2hyQwpDIj[nOWzd2LNr6] = (425 - 425);
    }
    strcat (L2hyQwpDIj, j0FtuqfmRjW);
    strcat (L2hyQwpDIj, kfpTXq);
    printf ("%s\n", L2hyQwpDIj);
}

void  Vtc0LVfzN7CR (char L2hyQwpDIj [], char j0FtuqfmRjW []) {
    int nOWzd2LNr6, LRi6Wqb, lSF3yRKH7;
    for (nOWzd2LNr6 = (357 - 357); L2hyQwpDIj[nOWzd2LNr6] != (801 - 801); nOWzd2LNr6++) {
        lSF3yRKH7 = (148 - 148);
        for (LRi6Wqb = (255 - 255); L2hyQwpDIj[LRi6Wqb] != (792 - 792); LRi6Wqb++)
            if (L2hyQwpDIj[nOWzd2LNr6] >= L2hyQwpDIj[LRi6Wqb])
                lSF3yRKH7++;
        if (!(EdVhj8r9Sup (L2hyQwpDIj) != lSF3yRKH7)) {
            LXlKr0 (L2hyQwpDIj, nOWzd2LNr6, j0FtuqfmRjW);
            break;
        }
    }
}

void  TpOuAKz1FPQW (char L2hyQwpDIj []) {
    int nOWzd2LNr6;
    {
        nOWzd2LNr6 = 637 - 637;
        for (; L2hyQwpDIj[nOWzd2LNr6] != (668 - 668);) {
            L2hyQwpDIj[nOWzd2LNr6] = (308 - 308);
            nOWzd2LNr6++;
        }
    }
}

int main () {
    char aCMb37kB8nV [(969 - 954)] = {(281 - 281)}, cJcGnzt4 [(222 - 218)] = {(898 - 898)};
    for (; scanf ("%s%s", aCMb37kB8nV, cJcGnzt4) != EOF;) {
        TpOuAKz1FPQW (aCMb37kB8nV);
        TpOuAKz1FPQW (cJcGnzt4);
        Vtc0LVfzN7CR (aCMb37kB8nV, cJcGnzt4);
    }
}

