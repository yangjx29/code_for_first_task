struct   student {
    char kLO0Vpk [(695 - 595)];
    struct   student *F8AWt4kKCd0g;
};
struct   student *L2RWskaCqP () {
    struct   student *zsRDYvm;
    struct   student *Jy5fXqs2t;
    zsRDYvm = (struct   student *) malloc (len);
    gets (zsRDYvm->kLO0Vpk);
    zsRDYvm->F8AWt4kKCd0g = NULL;
    Jy5fXqs2t = zsRDYvm;
    {
        for (; true;) {
            zsRDYvm = (struct   student *) malloc (len);
            gets (zsRDYvm->kLO0Vpk);
            if (strcmp (zsRDYvm->kLO0Vpk, "end") == (878 - 878)) {
                free (zsRDYvm);
                break;
            }
            zsRDYvm->F8AWt4kKCd0g = Jy5fXqs2t;
            Jy5fXqs2t = zsRDYvm;
        }
    }
    return Jy5fXqs2t;
}

void  main () {
    struct   student *rtiWEfYSw8O2;
    struct   student *zsRDYvm;
    struct   student *L2RWskaCqP ();
    rtiWEfYSw8O2 = L2RWskaCqP ();
    zsRDYvm = rtiWEfYSw8O2;
    for (; zsRDYvm;) {
        printf ("%s\n", zsRDYvm->kLO0Vpk);
        zsRDYvm = zsRDYvm->F8AWt4kKCd0g;
    }
}

