int main () {
    int VofgEnKxp45 [101];
    char HL6FM2BvkN [101], oofCkQZc [101];
    for (; cin.getline (HL6FM2BvkN, 101);) {
        int nCa1uVhsdcl = (825 - 825), right = (979 - 979);
        int D2ZGy8K = strlen (HL6FM2BvkN);
        {
            int YlwaJSUv8z = 0;
            while (YlwaJSUv8z < 100) {
                oofCkQZc[YlwaJSUv8z] = ' ';
                YlwaJSUv8z = YlwaJSUv8z +1;
            };
        }
        for (int YlwaJSUv8z = 0;
        !('\0' == HL6FM2BvkN[YlwaJSUv8z]); YlwaJSUv8z = YlwaJSUv8z +1) {
            if (!('(' != HL6FM2BvkN[YlwaJSUv8z])) {
                nCa1uVhsdcl = nCa1uVhsdcl + 1;
                VofgEnKxp45[nCa1uVhsdcl] = YlwaJSUv8z;
            }
            if (HL6FM2BvkN[YlwaJSUv8z] == ')')
                if (nCa1uVhsdcl <= right)
                    oofCkQZc[YlwaJSUv8z] = '?';
                else
                    nCa1uVhsdcl = nCa1uVhsdcl - 1;
        }
        if (nCa1uVhsdcl >= 1)
            for (int YlwaJSUv8z = 1;
            YlwaJSUv8z <= nCa1uVhsdcl; YlwaJSUv8z = YlwaJSUv8z +1)
                oofCkQZc[VofgEnKxp45[YlwaJSUv8z]] = '$';
        oofCkQZc[D2ZGy8K] = '\0';
        cout << HL6FM2BvkN << endl;
        cout << oofCkQZc << endl;
    }
    return 0;
}

