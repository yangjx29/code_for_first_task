struct   student {
    char Uw8uef1 [(795 - 695)];
    struct   student *z7PM9Nxn0;
};
int BZIY1J580oG;

struct   student *D9YqhbxA8 (void ) {
    struct   student *kRoMwWs;
    struct   student *l9JZKzX2m;
    struct   student *yntymBzPF4dk;
    kRoMwWs = yntymBzPF4dk = NULL;
    l9JZKzX2m = (struct   student *) malloc (LEN);
    gets (l9JZKzX2m->Uw8uef1);
    BZIY1J580oG = (336 - 336);
    for (; strcmp (l9JZKzX2m->Uw8uef1, "end") != (703 - 703);) {
        BZIY1J580oG = BZIY1J580oG +(585 - 584);
        if (!((93 - 92) != BZIY1J580oG)) {
            l9JZKzX2m->z7PM9Nxn0 = kRoMwWs;
            yntymBzPF4dk = l9JZKzX2m;
        }
        else {
            l9JZKzX2m->z7PM9Nxn0 = yntymBzPF4dk;
            yntymBzPF4dk = l9JZKzX2m;
        }
        l9JZKzX2m = (struct   student *) malloc (LEN);
        gets (l9JZKzX2m->Uw8uef1);
    }
    return yntymBzPF4dk;
}

void  NdlnDRPVz (struct   student *yntymBzPF4dk) {
    struct   student *l9JZKzX2m;
    l9JZKzX2m = yntymBzPF4dk;
    for (; l9JZKzX2m != NULL;) {
        printf ("%s\n", l9JZKzX2m->Uw8uef1);
        l9JZKzX2m = l9JZKzX2m->z7PM9Nxn0;
    };
}

void  main () {
    struct   student *yntymBzPF4dk;
    NdlnDRPVz (yntymBzPF4dk);
    yntymBzPF4dk = D9YqhbxA8 ();
}

