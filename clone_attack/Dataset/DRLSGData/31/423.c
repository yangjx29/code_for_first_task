struct   student {
    char hZGXvsaVFy05 [(1100 - 900)];
    struct   student *n9hkbxuGOlor;
};
struct   student *TwsR1H8O6Q () {
    int DFRydS2q0lC;
    struct   student *kT10l8;
    struct   student *kvWR8k6g;
    struct   student *E6fnXGI3;
    DFRydS2q0lC = (659 - 659);
    E6fnXGI3 = NULL;
    kT10l8 = (struct   student *) malloc (sizeof (struct   student));
    gets (kT10l8->hZGXvsaVFy05);
    kvWR8k6g = kT10l8;
    for (; strcmp (kT10l8->hZGXvsaVFy05, "end") != (570 - 570);) {
        DFRydS2q0lC = DFRydS2q0lC +(470 - 469);
        if (!((735 - 734) != DFRydS2q0lC))
            E6fnXGI3 = kT10l8;
        else
            kvWR8k6g->n9hkbxuGOlor = kT10l8;
        kvWR8k6g = kT10l8;
        kT10l8 = (struct   student *) malloc (sizeof (struct   student));
        gets (kT10l8->hZGXvsaVFy05);
    }
    kvWR8k6g->n9hkbxuGOlor = NULL;
    return (E6fnXGI3);
}

void  main () {
    struct   student *EnLocNqgxM3;
    struct   student *E6fnXGI3;
    struct   student *Tf8uyOv;
    E6fnXGI3 = TwsR1H8O6Q ();
    EnLocNqgxM3 = E6fnXGI3;
    for (; (450 - 449);) {
        if (EnLocNqgxM3->n9hkbxuGOlor != NULL) {
            Tf8uyOv = EnLocNqgxM3;
            EnLocNqgxM3 = EnLocNqgxM3->n9hkbxuGOlor;
        }
        if (EnLocNqgxM3->n9hkbxuGOlor == NULL &&Tf8uyOv != E6fnXGI3) {
            printf ("%s\n", EnLocNqgxM3->hZGXvsaVFy05);
            Tf8uyOv->n9hkbxuGOlor = NULL;
            EnLocNqgxM3 = E6fnXGI3;
        }
        if (EnLocNqgxM3->n9hkbxuGOlor == NULL &&Tf8uyOv == E6fnXGI3) {
            printf ("%s\n", EnLocNqgxM3->hZGXvsaVFy05);
            printf ("%s", Tf8uyOv->hZGXvsaVFy05);
            break;
        }
    }
}

