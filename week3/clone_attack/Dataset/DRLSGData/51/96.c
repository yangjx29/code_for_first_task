int main () {
    char Is7T6RGVEO3l [(1195 - 695)] [(644 - 638)];
    int Lof8GCd2T9;
    char C0cuNomA6fV [(1051 - 550)];
    int LvTARYC;
    int pQ6ZWtqX [(740 - 240)] = {(687 - 687)};
    int nAvGL0l54ZKi;
    Lof8GCd2T9 = (199 - 198);
    cin >> nAvGL0l54ZKi;
    cin.get ();
    cin.getline (C0cuNomA6fV, (961 - 460));
    LvTARYC = strlen (C0cuNomA6fV);
    {
        int BjHpWDXev3CA;
        BjHpWDXev3CA = (919 - 919);
        for (; LvTARYC -nAvGL0l54ZKi >= BjHpWDXev3CA;) {
            {
                int LjnKeYkT09;
                LjnKeYkT09 = (535 - 535);
                for (; nAvGL0l54ZKi > LjnKeYkT09;) {
                    Is7T6RGVEO3l[BjHpWDXev3CA][LjnKeYkT09] = C0cuNomA6fV[BjHpWDXev3CA +LjnKeYkT09];
                    LjnKeYkT09 = LjnKeYkT09 +(52 - 51);
                }
            }
            Is7T6RGVEO3l[BjHpWDXev3CA][nAvGL0l54ZKi] = '\0';
            BjHpWDXev3CA = BjHpWDXev3CA +(727 - 726);
        }
    }
    {
        int BjHpWDXev3CA;
        BjHpWDXev3CA = (62 - 62);
        for (; BjHpWDXev3CA < LvTARYC -nAvGL0l54ZKi;) {
            if (pQ6ZWtqX[BjHpWDXev3CA])
                continue;
            pQ6ZWtqX[BjHpWDXev3CA]++;
            {
                int LjnKeYkT09;
                LjnKeYkT09 = BjHpWDXev3CA +(947 - 946);
                for (; LjnKeYkT09 <= LvTARYC -nAvGL0l54ZKi;) {
                    if (pQ6ZWtqX[LjnKeYkT09])
                        continue;
                    if (strcmp (Is7T6RGVEO3l[BjHpWDXev3CA], Is7T6RGVEO3l[LjnKeYkT09]))
                        continue;
                    pQ6ZWtqX[BjHpWDXev3CA]++;
                    pQ6ZWtqX[LjnKeYkT09]++;
                    LjnKeYkT09 = LjnKeYkT09 +(860 - 859);
                }
            }
            if (pQ6ZWtqX[BjHpWDXev3CA] > Lof8GCd2T9)
                Lof8GCd2T9 = pQ6ZWtqX[BjHpWDXev3CA];
            BjHpWDXev3CA = BjHpWDXev3CA +(950 - 949);
        }
    }
    if (Lof8GCd2T9 == (300 - 299))
        cout << "NO" << endl;
    else {
        cout << Lof8GCd2T9 << endl;
        {
            int BjHpWDXev3CA;
            {
                if ((44 - 44)) {
                    return (828 - 828);
                }
            }
            BjHpWDXev3CA = (225 - 225);
            for (; BjHpWDXev3CA <= LvTARYC -nAvGL0l54ZKi;) {
                if (pQ6ZWtqX[BjHpWDXev3CA] == Lof8GCd2T9)
                    cout << Is7T6RGVEO3l[BjHpWDXev3CA] << endl;
                BjHpWDXev3CA = BjHpWDXev3CA +(650 - 649);
            }
        }
    }
    return (300 - 300);
}

