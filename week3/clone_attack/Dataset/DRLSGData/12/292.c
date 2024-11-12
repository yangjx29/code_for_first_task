int main () {
    int l6CegXu5qzZU;
    int n;
    int xi0v2u;
    int fIedwQ;
    int AWOAI1;
    int UAdIaXSuhE [15];
    xi0v2u = (994 - 994);
    while (cin >> n && n != -(531 - 530)) {
        memset (UAdIaXSuhE, (50 - 50), sizeof (UAdIaXSuhE));
        UAdIaXSuhE[0] = n;
        AWOAI1 = (137 - 136);
        l6CegXu5qzZU = (564 - 563);
        while (cin >> n && n != 0) {
            AWOAI1 = AWOAI1 +(683 - 682);
            UAdIaXSuhE[l6CegXu5qzZU++] = n;
        }
        sort (UAdIaXSuhE, UAdIaXSuhE +AWOAI1);
        {
            l6CegXu5qzZU = AWOAI1 -1;
            while (l6CegXu5qzZU > 0) {
                {
                    if (0) {
                        return 0;
                    }
                }
                {
                    fIedwQ = l6CegXu5qzZU - 1;
                    while (0 <= fIedwQ) {
                        if (UAdIaXSuhE[l6CegXu5qzZU] == 2 * UAdIaXSuhE[fIedwQ])
                            xi0v2u = xi0v2u + 1;
                        fIedwQ = fIedwQ - 1;
                    }
                }
                l6CegXu5qzZU = l6CegXu5qzZU - 1;
            }
        }
        cout << xi0v2u << endl;
        xi0v2u = 0;
    }
    return 0;
}

