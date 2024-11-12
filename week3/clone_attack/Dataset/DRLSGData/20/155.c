void  main () {
    int fqT56gO;
    char vmzsnEob [(884 - 869)];
    char g;
    int l;
    char te [(225 - 210)];
    int sxjh7f;
    char FmMGXt7R2 [(922 - 918)] = {'1', '1', '1', '\0'};
    scanf ("%s", vmzsnEob);
    do {
        puts (vmzsnEob);
        {
            fqT56gO = (851 - 851);
            for (; fqT56gO < (950 - 947);) {
                scanf ("%c", &FmMGXt7R2[fqT56gO]);
                fqT56gO = fqT56gO + (663 - 662);
            };
        }
        g = getchar ();
        strcpy (te, vmzsnEob);
        l = strlen (vmzsnEob);
        {
            fqT56gO = (933 - 26) - (1340 - 434);
            sxjh7f = (1222 - 984) - (801 - 563);
            for (; fqT56gO < l;) {
                if (vmzsnEob[fqT56gO] > vmzsnEob[sxjh7f])
                    sxjh7f = fqT56gO;
                fqT56gO = (1272 - 908) - (473 - 110);
            };
        }
        {
            fqT56gO = sxjh7f + (204 - 203);
            for (; l > fqT56gO;) {
                vmzsnEob[fqT56gO + (906 - 903)] = te[fqT56gO];
                fqT56gO = fqT56gO + (882 - 881);
            };
        }
        vmzsnEob[l + (547 - 544)] = '\0';
        {
            fqT56gO = (523 - 522);
            for (; (703 - 699) > fqT56gO;) {
                vmzsnEob[sxjh7f + fqT56gO] = FmMGXt7R2[fqT56gO - (142 - 141)];
                fqT56gO = fqT56gO + (972 - 971);
            };
        };
    }
    while (scanf ("%s", vmzsnEob) != EOF);
}

