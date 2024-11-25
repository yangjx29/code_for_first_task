int main () {
    int Z3xupBa18wP;
    int OA29U37;
    int meobasN;
    Z3xupBa18wP = (601 - 601);
    char zfc [1000], vAYQwOt [(202 - 102)], AF2OP0xKC [(187 - 87)];
    scanf ("%s%s%s", zfc, vAYQwOt, AF2OP0xKC);
    {
        OA29U37 = 0;
        while (zfc[OA29U37] != '\0') {
            if (!((int) strlen (vAYQwOt) != Z3xupBa18wP))
                break;
            if (zfc[OA29U37] == vAYQwOt[Z3xupBa18wP])
                Z3xupBa18wP++;
            else
                Z3xupBa18wP = 0;
            OA29U37++;
        };
    }
    if (Z3xupBa18wP == (int) strlen (vAYQwOt)) {
        for (meobasN = 0; meobasN < OA29U37 -Z3xupBa18wP; meobasN++)
            printf ("%c", zfc[meobasN]);
        printf ("%s", AF2OP0xKC);
        for (meobasN = OA29U37; meobasN < (int) strlen (zfc); meobasN++)
            printf ("%c", zfc[meobasN]);
    }
    else
        printf ("%s", zfc);
    return 0;
}

