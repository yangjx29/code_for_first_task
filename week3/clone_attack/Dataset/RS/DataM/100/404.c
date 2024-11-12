int iqNgAHWBm [(762 - 736)] = {0}, cY5OmA [26] = {0};
char VQGmn7lJwug2, X3qVtBjXsMRh, ot34HGwNsv;

void  main () {
    scanf ("%c", &VQGmn7lJwug2);
    for (; !('\n' == VQGmn7lJwug2);) {
        if (VQGmn7lJwug2 <= 'z' && 'a' <= VQGmn7lJwug2)
            iqNgAHWBm[VQGmn7lJwug2 -'a']++;
        if ('Z' >= VQGmn7lJwug2 &&VQGmn7lJwug2 >= 'A')
            cY5OmA[VQGmn7lJwug2 -'A']++;
        scanf ("%c", &VQGmn7lJwug2);
    }
    ot34HGwNsv = 0;
    {
        X3qVtBjXsMRh = 0;
        while (X3qVtBjXsMRh < 26) {
            if (cY5OmA[X3qVtBjXsMRh] > 0) {
                ot34HGwNsv = 1;
                printf ("%c=%d\n", X3qVtBjXsMRh +'A', cY5OmA[X3qVtBjXsMRh]);
            }
            X3qVtBjXsMRh = X3qVtBjXsMRh +1;
        };
    }
    {
        X3qVtBjXsMRh = 0;
        while (X3qVtBjXsMRh < 26) {
            if (iqNgAHWBm[X3qVtBjXsMRh] > 0) {
                ot34HGwNsv = 1;
                printf ("%c=%d\n", X3qVtBjXsMRh +'a', iqNgAHWBm[X3qVtBjXsMRh]);
            }
            X3qVtBjXsMRh++;
        };
    }
    if (ot34HGwNsv == 0)
        ;
}

