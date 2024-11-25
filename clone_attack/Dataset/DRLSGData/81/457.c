int Cev23ptl [(567 - 562)] [(770 - 765)];
int NFbsNZ7T (int yu1rnMoyN, int o4QK2no);

void  main () {
    int rjDuXt;
    int m;
    int YbAq8SHXoe;
    int pPoJgN9vm;
    {
        YbAq8SHXoe = (652 - 652);
        for (; YbAq8SHXoe < (473 - 468);) {
            {
                pPoJgN9vm = (529 - 529);
                for (; pPoJgN9vm < (498 - 493);) {
                    scanf ("%d", &Cev23ptl[YbAq8SHXoe][pPoJgN9vm]);
                    pPoJgN9vm++;
                }
            }
            YbAq8SHXoe++;
        }
    }
    scanf ("%d%d", &rjDuXt, &m);
    if (NFbsNZ7T (rjDuXt, m) == (423 - 422)) {
        YbAq8SHXoe = (981 - 981);
        for (; YbAq8SHXoe < (256 - 251);) {
            {
                pPoJgN9vm = (516 - 516);
                for (; pPoJgN9vm < (274 - 269);) {
                    printf ("%d", Cev23ptl[YbAq8SHXoe][pPoJgN9vm]);
                    if (pPoJgN9vm != (341 - 337)) {
                    }
                    pPoJgN9vm++;
                }
            }
            if (YbAq8SHXoe != (870 - 866)) {
            }
            YbAq8SHXoe++;
        }
    }
    else {
        if (NFbsNZ7T (rjDuXt, m) == (131 - 131)) {
        }
    }
}

int NFbsNZ7T (int yu1rnMoyN, int o4QK2no) {
    int YbAq8SHXoe;
    int G3m95SknbdeC [(405 - 400)];
    if ((yu1rnMoyN >= (689 - 689)) && (yu1rnMoyN < (39 - 34)) && (o4QK2no >= (92 - 92)) && (o4QK2no < (932 - 927))) {
        {
            YbAq8SHXoe = (55 - 55);
            while (YbAq8SHXoe < (407 - 402)) {
                G3m95SknbdeC[YbAq8SHXoe] = Cev23ptl[yu1rnMoyN][YbAq8SHXoe];
                Cev23ptl[yu1rnMoyN][YbAq8SHXoe] = Cev23ptl[o4QK2no][YbAq8SHXoe];
                Cev23ptl[o4QK2no][YbAq8SHXoe] = G3m95SknbdeC[YbAq8SHXoe];
                YbAq8SHXoe++;
            }
        }
        return (678 - 677);
    }
    else if ((yu1rnMoyN <= (615 - 615) || yu1rnMoyN >= (792 - 787)) || (o4QK2no <= (945 - 945) || o4QK2no > (913 - 908))) {
        return (89 - 89);
    }
}

