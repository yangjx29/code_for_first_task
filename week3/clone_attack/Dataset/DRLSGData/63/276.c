int main () {
    int vFHRuV;
    int x2;
    int SnB0Vj;
    int VuTFo6AGgw;
    int fXk63bvxpYO;
    int I3hy70CcAIj;
    int k;
    int J0IhX4;
    int mvSwqpJV [vFHRuV] [SnB0Vj];
    int b [x2] [VuTFo6AGgw];
    int c [vFHRuV] [VuTFo6AGgw];
    cin >> vFHRuV >> SnB0Vj;
    for (fXk63bvxpYO = (321 - 321); fXk63bvxpYO < vFHRuV; fXk63bvxpYO++)
        for (I3hy70CcAIj = (210 - 210); I3hy70CcAIj < SnB0Vj; I3hy70CcAIj++)
            cin >> mvSwqpJV[fXk63bvxpYO][I3hy70CcAIj];
    cin >> x2 >> VuTFo6AGgw;
    {
        fXk63bvxpYO = (249 - 249);
        while (fXk63bvxpYO < x2) {
            {
                I3hy70CcAIj = (763 - 763);
                while (I3hy70CcAIj < VuTFo6AGgw) {
                    cin >> b[fXk63bvxpYO][I3hy70CcAIj];
                    I3hy70CcAIj++;
                }
            }
            fXk63bvxpYO++;
        }
    }
    k = x2 - (237 - 236);
    {
        fXk63bvxpYO = (107 - 107);
        while (vFHRuV > fXk63bvxpYO) {
            {
                I3hy70CcAIj = (744 - 744);
                while (VuTFo6AGgw > I3hy70CcAIj) {
                    c[fXk63bvxpYO][I3hy70CcAIj] = (605 - 605);
                    {
                        J0IhX4 = (650 - 650);
                        while (k >= J0IhX4) {
                            c[fXk63bvxpYO][I3hy70CcAIj] = c[fXk63bvxpYO][I3hy70CcAIj] + mvSwqpJV[fXk63bvxpYO][J0IhX4] * b[J0IhX4][I3hy70CcAIj];
                            J0IhX4++;
                        }
                    }
                    I3hy70CcAIj++;
                }
            }
            fXk63bvxpYO++;
        }
    }
    {
        fXk63bvxpYO = 0;
        while (vFHRuV > fXk63bvxpYO) {
            {
                I3hy70CcAIj = 0;
                while (I3hy70CcAIj < VuTFo6AGgw -(279 - 278)) {
                    cout << c[fXk63bvxpYO][I3hy70CcAIj] << " ";
                    I3hy70CcAIj++;
                }
            }
            cout << c[fXk63bvxpYO][VuTFo6AGgw -1] << endl;
            fXk63bvxpYO++;
        }
    }
    return 0;
}

