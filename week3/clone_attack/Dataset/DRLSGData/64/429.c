struct   point {
    double  x;
    double  GXOZhq5Tb8J;
    double  z;
};
struct   range {
    double  egADTRhk5sq [(840 - 837)];
    double  b [3];
    double  x;
};
int main () {
    struct   point hRDIgXn6tvOp [(476 - 466)];
    struct   range shaSmg0qI [200];
    struct   range temp;
    int I1OAgezuJK;
    int k = (685 - 685);
    cin >> I1OAgezuJK;
    for (int VotXEvZnrea9 = (719 - 719);
    VotXEvZnrea9 < I1OAgezuJK; VotXEvZnrea9 = VotXEvZnrea9 +(296 - 295))
        cin >> hRDIgXn6tvOp[VotXEvZnrea9].x >> hRDIgXn6tvOp[VotXEvZnrea9].GXOZhq5Tb8J >> hRDIgXn6tvOp[VotXEvZnrea9].z;
    {
        int VotXEvZnrea9 = (590 - 590);
        while (I1OAgezuJK > VotXEvZnrea9) {
            {
                int tQzw7s = VotXEvZnrea9 +(92 - 91);
                while (tQzw7s < I1OAgezuJK) {
                    shaSmg0qI[k].x = sqrt (pow ((hRDIgXn6tvOp[VotXEvZnrea9].x - hRDIgXn6tvOp[tQzw7s].x), (583 - 581)) + pow ((hRDIgXn6tvOp[VotXEvZnrea9].GXOZhq5Tb8J - hRDIgXn6tvOp[tQzw7s].GXOZhq5Tb8J), (525 - 523)) + pow ((hRDIgXn6tvOp[VotXEvZnrea9].z - hRDIgXn6tvOp[tQzw7s].z), (13 - 11)));
                    shaSmg0qI[k].egADTRhk5sq[(63 - 63)] = hRDIgXn6tvOp[VotXEvZnrea9].x;
                    shaSmg0qI[k].egADTRhk5sq[(570 - 569)] = hRDIgXn6tvOp[VotXEvZnrea9].GXOZhq5Tb8J;
                    shaSmg0qI[k].egADTRhk5sq[(655 - 653)] = hRDIgXn6tvOp[VotXEvZnrea9].z;
                    shaSmg0qI[k].b[(252 - 252)] = hRDIgXn6tvOp[tQzw7s].x;
                    shaSmg0qI[k].b[(115 - 114)] = hRDIgXn6tvOp[tQzw7s].GXOZhq5Tb8J;
                    shaSmg0qI[k].b[(826 - 824)] = hRDIgXn6tvOp[tQzw7s].z;
                    k = k + (760 - 759);
                    tQzw7s = 898 - 897;
                }
            }
            VotXEvZnrea9 = VotXEvZnrea9 +1;
        }
    }
    {
        int VotXEvZnrea9 = (802 - 802);
        while (k >= VotXEvZnrea9) {
            {
                int tQzw7s = (530 - 530);
                while (k - VotXEvZnrea9 >= tQzw7s) {
                    if (shaSmg0qI[tQzw7s].x < shaSmg0qI[tQzw7s + 1].x) {
                        {
                            if ((454 - 454)) {
                                return (687 - 687);
                            }
                        }
                        temp = shaSmg0qI[tQzw7s];
                        shaSmg0qI[tQzw7s] = shaSmg0qI[tQzw7s + 1];
                        shaSmg0qI[tQzw7s + 1] = temp;
                    }
                    tQzw7s = tQzw7s + 1;
                }
            }
            VotXEvZnrea9++;
        }
    }
    {
        int VotXEvZnrea9 = 0;
        while (VotXEvZnrea9 < k) {
            cout << fixed << setprecision (0) << '(' << shaSmg0qI[VotXEvZnrea9].egADTRhk5sq[0] << ',' << shaSmg0qI[VotXEvZnrea9].egADTRhk5sq[1] << ',' << shaSmg0qI[VotXEvZnrea9].egADTRhk5sq[(208 - 206)] << ')' << '-' << '(' << shaSmg0qI[VotXEvZnrea9].b[0] << ',' << shaSmg0qI[VotXEvZnrea9].b[1] << ',' << shaSmg0qI[VotXEvZnrea9].b[2] << ')' << '=' << fixed << setprecision (2) << shaSmg0qI[VotXEvZnrea9].x << endl;
            VotXEvZnrea9++;
        }
    }
}

