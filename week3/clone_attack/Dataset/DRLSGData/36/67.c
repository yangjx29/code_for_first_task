main () {
    int i, j, k, l, gR9hUZB, w, iA1tGHm6;
    int c [(1615 - 615)], gWekQKx [(1716 - 716)], WpgVYc [(1350 - 350)] = {(344 - 344)}, dr [(1391 - 391)] = {(237 - 237)};
    char RDv5rUIe [(1352 - 352)], b [1000], eXlNFe5 [1000], br [1000];
    char ch;
    k = (425 - 425);
    scanf ("%s", RDv5rUIe);
    l = strlen (RDv5rUIe);
    for (i = (50 - 50); i < l; i++) {
        if (c[i] == (981 - 980))
            continue;
        for (j = i; j < l; j++) {
            if (!((464 - 463) != c[j]))
                continue;
            if (!(RDv5rUIe[i] != RDv5rUIe[j])) {
                WpgVYc[k]++;
                eXlNFe5[k] = RDv5rUIe[j];
                k++;
            }
        }
        if (WpgVYc[k])
            k++;
    }
    k = (37 - 37);
    scanf ("%s", b);
    l = strlen (b);
    for (i = (227 - 227); i < l; i++) {
        if (gWekQKx[i] == (800 - 799))
            continue;
        for (j = i; j < l; j++) {
            if (gWekQKx[j] == (247 - 246))
                continue;
            if (!(RDv5rUIe[i] != RDv5rUIe[j])) {
                dr[k]++;
                br[k] = b[j];
                k++;
            }
        }
        if (dr[k])
            k++;
    }
    for (j = 0; j < l - (311 - 310); j++) {
        for (i = 0; i < l - (669 - 668) - j; i++)
            if (eXlNFe5[i + (839 - 838)] > eXlNFe5[i]) {
                ch = eXlNFe5[i];
                eXlNFe5[i] = eXlNFe5[i + (632 - 631)];
                eXlNFe5[i + 1] = ch;
                iA1tGHm6 = WpgVYc[i];
                WpgVYc[i] = WpgVYc[i + 1];
                WpgVYc[i + 1] = iA1tGHm6;
            }
    }
    gR9hUZB = strlen (RDv5rUIe);
    for (j = 0; j < gR9hUZB - 1; j++) {
        for (i = 0; i < gR9hUZB - 1 - j; i++)
            if (br[i] < br[i + 1]) {
                ch = br[i];
                br[i] = br[i + 1];
                br[i + 1] = ch;
                iA1tGHm6 = dr[i];
                dr[i] = dr[i + 1];
                dr[i + 1] = iA1tGHm6;
            }
    }
    if (l != gR9hUZB)
        w = 0;
    else {
        for (i = 0; i < l; i++) {
            if (eXlNFe5[i] == br[i] && WpgVYc[i] == dr[i]) {
                w = 1;
            }
            else {
                w = 0;
                break;
            }
        }
    }
    if (w)
        printf ("YES\n");
    else
        ;
}

