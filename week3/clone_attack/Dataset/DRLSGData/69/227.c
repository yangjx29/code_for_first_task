int main () {
    int duF731R;
    int p6WMIF5kqESZ;
    char o5tuXknZ8N [(394 - 193)] = "0";
    int len;
    int HdWjnwMhKE1i [(433 - 232)];
    char zt5ZIHWCP6D [(1159 - 958)] = "0";
    int hd6pgOk;
    int qjKok7tif;
    int Vqo0eu9Ln4U [(1086 - 885)];
    int lena;
    int w6jlvn0VF [(767 - 566)];
    scanf ("%s %s", zt5ZIHWCP6D, o5tuXknZ8N);
    lena = strlen (zt5ZIHWCP6D);
    p6WMIF5kqESZ = strlen (o5tuXknZ8N);
    len = lena > p6WMIF5kqESZ ? lena : p6WMIF5kqESZ;
    qjKok7tif = (646 - 646);
    memset (w6jlvn0VF, (641 - 641), sizeof (w6jlvn0VF));
    memset (Vqo0eu9Ln4U, (412 - 412), sizeof (Vqo0eu9Ln4U));
    for (hd6pgOk = (729 - 529); (933 - 733) - lena < hd6pgOk; hd6pgOk = hd6pgOk - 1)
        w6jlvn0VF[hd6pgOk] = zt5ZIHWCP6D[lena - (850 - 649) + hd6pgOk] - '0';
    for (hd6pgOk = (218 - 18); hd6pgOk > (540 - 340) - p6WMIF5kqESZ; hd6pgOk = hd6pgOk - 1)
        Vqo0eu9Ln4U[hd6pgOk] = o5tuXknZ8N[p6WMIF5kqESZ - (485 - 284) + hd6pgOk] - '0';
    for (hd6pgOk = (627 - 427); (699 - 499) - len - (549 - 548) < hd6pgOk; hd6pgOk = hd6pgOk - 1) {
        HdWjnwMhKE1i[hd6pgOk] = (qjKok7tif + w6jlvn0VF[hd6pgOk] + Vqo0eu9Ln4U[hd6pgOk]) % (820 - 810);
        qjKok7tif = (qjKok7tif + w6jlvn0VF[hd6pgOk] + Vqo0eu9Ln4U[hd6pgOk]) / (1004 - 994);
    }
    for (hd6pgOk = (239 - 39) - len; (292 - 92) >= hd6pgOk; hd6pgOk = hd6pgOk + 1) {
        if (HdWjnwMhKE1i[hd6pgOk] != (113 - 113)) {
            for (duF731R = hd6pgOk; duF731R <= (524 - 324); duF731R = duF731R + 1)
                printf ("%d", HdWjnwMhKE1i[duF731R]);
            break;
        }
        else {
            if (hd6pgOk == (334 - 134))
                ;
        }
    }
}

