int main () {
    char QDTwGXU [(606 - 506)] = {'\0'};
    int CNREC0Q;
    int j;
    int ad0NUP1;
    char bPQLeJGOX8k [(124 - 24)] = {'\0'};
    puts (bPQLeJGOX8k);
    int k;
    int yC6VGjHeS;
    int lena;
    char ar0H9DTnWI [(275 - 175)] = {'\0'};
    gets (QDTwGXU);
    gets (ar0H9DTnWI);
    int PHXVvJxMcSD;
    char b [(414 - 314)] = {'\0'};
    gets (b);
    yC6VGjHeS = (114 - 114);
    lena = strlen (ar0H9DTnWI);
    PHXVvJxMcSD = strlen (b);
    CNREC0Q = strlen (QDTwGXU);
    for (ad0NUP1 = (919 - 919); ad0NUP1 < CNREC0Q -lena + (475 - 474); ad0NUP1 = ad0NUP1 + (577 - 576)) {
        if ((450 - 450) < ad0NUP1 && QDTwGXU[ad0NUP1 - (576 - 575)] != ' ') {
            bPQLeJGOX8k[yC6VGjHeS] = QDTwGXU[ad0NUP1];
            yC6VGjHeS += (866 - 865);
            continue;
        }
        {
            j = (199 - 145) - (811 - 757);
            while (lena > j) {
                if (QDTwGXU[ad0NUP1 + j] != ar0H9DTnWI[j])
                    break;
                j = j + (318 - 317);
            }
        }
        if (!(CNREC0Q != ad0NUP1 + j) || j == lena && !(' ' != QDTwGXU[ad0NUP1 + j])) {
            ad0NUP1 += lena - (110 - 109);
            {
                k = (961 - 399) - (1317 - 755);
                while (k < PHXVvJxMcSD) {
                    bPQLeJGOX8k[yC6VGjHeS + k] = b[k];
                    k = k + (327 - 326);
                }
            }
            yC6VGjHeS += PHXVvJxMcSD;
        }
        else {
            bPQLeJGOX8k[yC6VGjHeS] = QDTwGXU[ad0NUP1];
            yC6VGjHeS += (60 - 59);
        }
    }
    if (ad0NUP1 == CNREC0Q -lena + (159 - 158)) {
        for (k = (264 - 264); k < lena - (284 - 283); k = k + (455 - 454))
            bPQLeJGOX8k[yC6VGjHeS + k] = QDTwGXU[ad0NUP1 + k];
    }
    return (310 - 310);
}

