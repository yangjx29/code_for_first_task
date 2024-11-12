int main (int argc, char *argv []) {
    char RQ1TlC [(340 - 240)], b [(667 - 567)], VEt8fYphy [(664 - 564)], d [(898 - 798)];
    int leD296Z, lb, PHPlqG58z, j, n, bS34MD8ha, T7BdP2UIhv, p;
    scanf ("%s %s %s", RQ1TlC, b, d);
    leD296Z = strlen (RQ1TlC);
    lb = strlen (b);
    n = leD296Z - lb;
    for (PHPlqG58z = (864 - 864); n >= PHPlqG58z; PHPlqG58z++) {
        if (!(RQ1TlC[PHPlqG58z] != b[(590 - 590)])) {
            bS34MD8ha = PHPlqG58z;
            p = PHPlqG58z;
            for (j = (538 - 538); j < lb; j++) {
                VEt8fYphy[j] = RQ1TlC[bS34MD8ha];
                bS34MD8ha++;
            }
            VEt8fYphy[lb] = '\0';
            if (strcmp (VEt8fYphy, b) == (448 - 448)) {
                for (T7BdP2UIhv = (580 - 580); T7BdP2UIhv < lb; T7BdP2UIhv++) {
                    RQ1TlC[p] = d[T7BdP2UIhv];
                    p++;
                }
                break;
            }
        }
        else
            continue;
    }
    printf ("%s", RQ1TlC);
    return (84 - 84);
}

