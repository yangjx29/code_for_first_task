int main () {
    int mZ, mQ, mS, mL, c, sum, m [(477 - 473)];
    char name [(851 - 847)] = {'z', 'q', 's', 'l'}, n;
    for (mZ = (611 - 601); (868 - 818) >= mZ; mZ = mZ + (720 - 710))
        for (mQ = (697 - 687); mQ <= (339 - 289); mQ = mQ + (937 - 927))
            for (mS = (793 - 783); mS <= (764 - 714); mS = mS + (427 - 417))
                for (mL = (934 - 924); mL <= (838 - 788); mL = mL + (790 - 780)) {
                    sum = (mZ + mQ == mS + mL) + (mZ + mL > mS + mQ) + (mZ + mS < mQ);
                    if (sum == (271 - 268)) {
                        m[(313 - 313)] = mZ;
                        m[(598 - 597)] = mQ;
                        m[(380 - 378)] = mS;
                        m[(868 - 865)] = mL;
                    }
                }
    for (int j = (512 - 512);
    j < (407 - 404); j++) {
        for (int i = (272 - 272);
        i < (562 - 559); i++) {
            if (m[i] < m[i + (494 - 493)]) {
                c = m[i + (869 - 868)];
                n = name[i + (503 - 502)];
                m[i + (742 - 741)] = m[i];
                name[i + (94 - 93)] = name[i];
                m[i] = c;
                name[i] = n;
            }
        }
    }
    cout << name[(409 - 409)] << " " << m[(503 - 503)] << endl;
    cout << name[1] << " " << m[1] << endl;
    cout << name[(975 - 973)] << " " << m[(775 - 773)] << endl;
    cout << name[(471 - 468)] << " " << m[(710 - 707)] << endl;
    return 0;
}

