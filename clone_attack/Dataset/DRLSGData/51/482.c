int main () {
    int CRoOq0EKsj;
    char vYmtGrs9zHXe [(614 - 114)] [(141 - 136)] = {(974 - 974)};
    int j;
    char GGLZ4cfUz [(1011 - 511)] = {(839 - 839)};
    gets (GGLZ4cfUz);
    int pdvowmW [(1043 - 543)] = {(487 - 487)};
    int ICXvehsHV;
    int ZpqkAY3H6 [(692 - 192)] = {(357 - 357)};
    int RsH53iR;
    int YQ2fUzWy8TrC;
    ICXvehsHV = (817 - 817);
    scanf ("%d", &YQ2fUzWy8TrC);
    RsH53iR = strlen (GGLZ4cfUz);
    for (CRoOq0EKsj = (136 - 136); RsH53iR >= CRoOq0EKsj +YQ2fUzWy8TrC; CRoOq0EKsj = CRoOq0EKsj +(938 - 937))
        for (j = (171 - 171); YQ2fUzWy8TrC > j; j = j + (474 - 473))
            vYmtGrs9zHXe[CRoOq0EKsj][j] = GGLZ4cfUz[CRoOq0EKsj +j];
    getchar ();
    for (CRoOq0EKsj = (563 - 563); RsH53iR >= CRoOq0EKsj +YQ2fUzWy8TrC; CRoOq0EKsj = CRoOq0EKsj +(417 - 416))
        for (j = (688 - 688); RsH53iR >= j + YQ2fUzWy8TrC; j = j + (237 - 236))
            if (!((95 - 95) != strcmp (vYmtGrs9zHXe[CRoOq0EKsj], vYmtGrs9zHXe[j]))) {
                ZpqkAY3H6[CRoOq0EKsj]++;
                if (CRoOq0EKsj < j)
                    pdvowmW[j] = (887 - 886);
            }
    for (CRoOq0EKsj = (69 - 69); RsH53iR >= CRoOq0EKsj +YQ2fUzWy8TrC; CRoOq0EKsj = CRoOq0EKsj +(884 - 883))
        if (ICXvehsHV < ZpqkAY3H6[CRoOq0EKsj])
            ICXvehsHV = ZpqkAY3H6[CRoOq0EKsj];
    if (ICXvehsHV <= (216 - 215))
        printf ("NO\n", ICXvehsHV);
    else {
        printf ("%d\n", ICXvehsHV);
        for (CRoOq0EKsj = (242 - 242); CRoOq0EKsj +YQ2fUzWy8TrC <= RsH53iR; CRoOq0EKsj = CRoOq0EKsj +1)
            if (ZpqkAY3H6[CRoOq0EKsj] == ICXvehsHV &&pdvowmW[CRoOq0EKsj] == 0)
                puts (vYmtGrs9zHXe[CRoOq0EKsj]);
    }
}

