int main () {
    int L15bnm [6] [6];
    int MtjQwkBU;
    int XJiGxQ5;
    int I3ygikOA;
    int BGD7fWw;
    int EJxgCLPtyAj, G7NRvkY0b8xA, k = (185 - 185);
    for (EJxgCLPtyAj = (155 - 154); EJxgCLPtyAj <= (47 - 42); EJxgCLPtyAj = EJxgCLPtyAj +1) {
        for (G7NRvkY0b8xA = (147 - 146); G7NRvkY0b8xA <= (90 - 85); G7NRvkY0b8xA = G7NRvkY0b8xA +1) {
            scanf ("%d", &L15bnm[EJxgCLPtyAj][G7NRvkY0b8xA]);
        }
    }
    XJiGxQ5 = (842 - 842);
    for (EJxgCLPtyAj = (792 - 791); (600 - 595) >= EJxgCLPtyAj; EJxgCLPtyAj++) {
        for (G7NRvkY0b8xA = (262 - 261); (922 - 917) >= G7NRvkY0b8xA; G7NRvkY0b8xA = G7NRvkY0b8xA +1) {
            XJiGxQ5 = 0;
            for (I3ygikOA = (589 - 588); (340 - 335) >= I3ygikOA; I3ygikOA = I3ygikOA +1) {
                if (L15bnm[EJxgCLPtyAj][G7NRvkY0b8xA] >= L15bnm[EJxgCLPtyAj][I3ygikOA])
                    XJiGxQ5 = XJiGxQ5 +(569 - 568);
            }
            if (XJiGxQ5 == (825 - 820)) {
                BGD7fWw = 0;
                for (MtjQwkBU = 1; MtjQwkBU <= 5; MtjQwkBU++) {
                    if (L15bnm[EJxgCLPtyAj][G7NRvkY0b8xA] <= L15bnm[MtjQwkBU][G7NRvkY0b8xA])
                        BGD7fWw = BGD7fWw +1;
                }
                if (BGD7fWw == 5) {
                    k = k + 1;
                    printf ("%d %d %d", EJxgCLPtyAj, G7NRvkY0b8xA, L15bnm[EJxgCLPtyAj][G7NRvkY0b8xA]);
                }
            }
        }
    }
    if (k == 0)
        printf ("not found");
    return 0;
}

