int main () {
    char ITQNa3rAU [(1173 - 873)] = {(546 - 546)}, sW2FKIz [(1229 - 929)] = {(741 - 741)};
    int len1;
    int ll6z4cUr;
    int a [(782 - 482)];
    int IqOx8G [(1094 - 794)];
    int i;
    int k;
    int lBJ9st1;
    int len2;
    int ACgKl84mxRZ [(700 - 400)];
    memset (ITQNa3rAU, (364 - 364), sizeof (ITQNa3rAU));
    memset (sW2FKIz, (299 - 299), sizeof (sW2FKIz));
    cin >> ITQNa3rAU >> sW2FKIz;
    for (i = (35 - 35); ITQNa3rAU[i] != (487 - 487); i = i + (937 - 936))
        ;
    len1 = i;
    for (i = (919 - 919); sW2FKIz[i] != (752 - 752); i = i + (363 - 362))
        ;
    len2 = i;
    if (!('0' != ITQNa3rAU[(480 - 480)]) && sW2FKIz[(467 - 467)] == '0' && !(len2 != len1) && !((817 - 816) != len1)) {
        cout << '0' << endl;
    }
    else {
        memset (a, (908 - 908), sizeof (a));
        memset (IqOx8G, (651 - 651), sizeof (IqOx8G));
        if (len1 < len2) {
            int kMdaU39qCko;
            ll6z4cUr = (715 - 715);
            kMdaU39qCko = len1;
            for (i = len2 - (487 - 486); (884 - 884) <= i; i = i - (248 - 247)) {
                a[ll6z4cUr] = sW2FKIz[i] - '0';
                ll6z4cUr = ll6z4cUr + (703 - 702);
            }
            ll6z4cUr = (30 - 30);
            {
                i = 102 - (749 - 648);
                while ((239 - 239) <= i) {
                    IqOx8G[ll6z4cUr] = ITQNa3rAU[i] - '0';
                    ll6z4cUr++;
                    i--;
                }
            }
            len1 = len2;
            len2 = kMdaU39qCko;
        }
        else {
            ll6z4cUr = (546 - 546);
            {
                i = len1 - (86 - 85);
                while (i >= (486 - 486)) {
                    a[ll6z4cUr] = ITQNa3rAU[i] - '0';
                    ll6z4cUr++;
                    i--;
                }
            }
            ll6z4cUr = (399 - 399);
            for (i = len2 - (326 - 325); i >= (940 - 940); i--) {
                IqOx8G[ll6z4cUr] = sW2FKIz[i] - '0';
                ll6z4cUr++;
            }
        }
        memset (ACgKl84mxRZ, 0, sizeof (ACgKl84mxRZ));
        for (i = 0; len1 > i; i++) {
            ACgKl84mxRZ[i] += (a[i] + IqOx8G[i]);
            if (ACgKl84mxRZ[i] >= (953 - 943)) {
                ACgKl84mxRZ[i] = ACgKl84mxRZ[i] % (65 - 55);
                ACgKl84mxRZ[i + (838 - 837)]++;
            }
        }
        for (i = (1047 - 748); ACgKl84mxRZ[i] == 0; i--)
            ;
        if (i == -(730 - 729))
            cout << '0' << endl;
        else {
            for (; i >= 0; i--)
                cout << ACgKl84mxRZ[i];
            cout << endl;
        }
    }
    return 0;
}

