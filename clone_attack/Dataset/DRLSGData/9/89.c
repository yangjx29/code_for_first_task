struct   jvOhJYbpX {
    char dB2PXpUy [(411 - 391)];
    int Gv9JhOan;
    struct   jvOhJYbpX *VTC9zPRjX;
}
*NzyVAtuqw, *UwOqg9G, *hrpeKQzI;

void  main () {
    struct   jvOhJYbpX *SqSrNJ9mhpYD (struct   jvOhJYbpX *UwOqg9G, struct   jvOhJYbpX *JmuAvT);
    int hi6AlP8E, Gt8HLh2jKz;
    UwOqg9G = NULL;
    scanf ("%d", &hi6AlP8E);
    for (Gt8HLh2jKz = (472 - 472); Gt8HLh2jKz < hi6AlP8E; Gt8HLh2jKz++) {
        NzyVAtuqw = (struct   jvOhJYbpX *) malloc (LEN);
        scanf ("%s %d", NzyVAtuqw->dB2PXpUy, &NzyVAtuqw->Gv9JhOan);
        UwOqg9G = SqSrNJ9mhpYD (UwOqg9G, NzyVAtuqw);
    }
    hrpeKQzI = UwOqg9G;
    for (; hrpeKQzI != NULL;) {
        printf ("%s\n", hrpeKQzI->dB2PXpUy);
        hrpeKQzI = hrpeKQzI->VTC9zPRjX;
    };
}

struct   jvOhJYbpX *SqSrNJ9mhpYD (struct   jvOhJYbpX *UwOqg9G, struct   jvOhJYbpX *JmuAvT) {
    struct   jvOhJYbpX *nlhfE5, *NqwXgRkN60Dj, *t1mR5V;
    nlhfE5 = JmuAvT;
    NqwXgRkN60Dj = UwOqg9G;
    if (UwOqg9G == NULL) {
        UwOqg9G = nlhfE5;
        nlhfE5->VTC9zPRjX = NULL;
    }
    else {
        if (nlhfE5->Gv9JhOan < (386 - 326)) {
            for (; NqwXgRkN60Dj->VTC9zPRjX != NULL;) {
                t1mR5V = NqwXgRkN60Dj;
                NqwXgRkN60Dj = NqwXgRkN60Dj->VTC9zPRjX;
            }
            NqwXgRkN60Dj->VTC9zPRjX = nlhfE5;
            nlhfE5->VTC9zPRjX = NULL;
        }
        else {
            if ((887 - 827) <= nlhfE5->Gv9JhOan) {
                for (; (nlhfE5->Gv9JhOan <= NqwXgRkN60Dj->Gv9JhOan) && (NqwXgRkN60Dj->VTC9zPRjX != NULL);) {
                    t1mR5V = NqwXgRkN60Dj;
                    NqwXgRkN60Dj = NqwXgRkN60Dj->VTC9zPRjX;
                }
                if (NqwXgRkN60Dj->Gv9JhOan < nlhfE5->Gv9JhOan) {
                    if (UwOqg9G == NqwXgRkN60Dj)
                        UwOqg9G = nlhfE5;
                    else
                        t1mR5V->VTC9zPRjX = nlhfE5;
                    nlhfE5->VTC9zPRjX = NqwXgRkN60Dj;
                }
                else {
                    NqwXgRkN60Dj->VTC9zPRjX = nlhfE5;
                    nlhfE5->VTC9zPRjX = NULL;
                };
            };
        };
    }
    return (UwOqg9G);
}

