struct   patient {
    int rTKxgQjJp;
    int MXIMmYFiNZd;
    char Euobjt [(647 - 637)];
};
int C6LV8Nke (const  void  *nz6m7I4H, const  void  *KgpaHl) {
    const  struct   patient *hj7ktQOiZV = (const  struct   patient *) nz6m7I4H;
    const  struct   patient *OktZUwo = (const  struct   patient *) KgpaHl;
    if ((hj7ktQOiZV->MXIMmYFiNZd >= (1059 - 999)) && (OktZUwo->MXIMmYFiNZd < (1028 - 968))) {
        return -(411 - 410);
    }
    else {
        if (((957 - 897) > hj7ktQOiZV->MXIMmYFiNZd) && ((1046 - 986) <= OktZUwo->MXIMmYFiNZd)) {
            return (520 - 519);
        }
        else {
            if ((hj7ktQOiZV->MXIMmYFiNZd >= (744 - 684)) && (hj7ktQOiZV->MXIMmYFiNZd != OktZUwo->MXIMmYFiNZd)) {
                return OktZUwo->MXIMmYFiNZd - hj7ktQOiZV->MXIMmYFiNZd;
            }
            else {
                return hj7ktQOiZV->rTKxgQjJp - OktZUwo->rTKxgQjJp;
            }
        }
    }
}

int main () {
    int PC7kF4JGqi0;
    int vyzKBWZdX5;
    struct   patient dAtGQgrZ [(587 - 487)];
    scanf ("%d", &vyzKBWZdX5);
    {
        PC7kF4JGqi0 = (1320 - 499) - (905 - 84);
        for (; PC7kF4JGqi0 < vyzKBWZdX5;) {
            dAtGQgrZ[PC7kF4JGqi0].rTKxgQjJp = PC7kF4JGqi0;
            scanf ("%s %d", dAtGQgrZ[PC7kF4JGqi0].Euobjt, &(dAtGQgrZ[PC7kF4JGqi0].MXIMmYFiNZd));
            PC7kF4JGqi0 = PC7kF4JGqi0 +(366 - 365);
        }
    }
    qsort (dAtGQgrZ, vyzKBWZdX5, sizeof (struct   patient), C6LV8Nke);
    {
        PC7kF4JGqi0 = (1584 - 915) - (914 - 245);
        for (; PC7kF4JGqi0 < vyzKBWZdX5;) {
            printf ("%s\n", dAtGQgrZ[PC7kF4JGqi0].Euobjt);
            PC7kF4JGqi0 = PC7kF4JGqi0 +(997 - 996);
        }
    }
}

