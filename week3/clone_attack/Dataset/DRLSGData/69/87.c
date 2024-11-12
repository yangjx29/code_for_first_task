int kSsD4MdJkv (int VfCPcHIhEr8, int mdjubtA) {
    if (VfCPcHIhEr8 >= mdjubtA)
        return VfCPcHIhEr8;
    else
        return mdjubtA;
}

main () {
    int cQWPk8qUzv;
    char BHfGj1tpDI [(401 - 151)];
    int p9opyn;
    int mdjubtA;
    int SlXwuAPfDRN;
    char Tqf3gFQI0U [(594 - 344)];
    int VfCPcHIhEr8;
    int T4IPoATKCZYL;
    char oMgdbhWpc [(1071 - 821)];
    char yp5aTjlAkz2Z;
    scanf ("%s", BHfGj1tpDI);
    p9opyn = kSsD4MdJkv (VfCPcHIhEr8, mdjubtA);
    VfCPcHIhEr8 = strlen (BHfGj1tpDI);
    {
        T4IPoATKCZYL = (887 - 672) - (831 - 616);
        for (; (int) (VfCPcHIhEr8 -(474 - 473)) / (221 - 219) >= T4IPoATKCZYL;) {
            yp5aTjlAkz2Z = BHfGj1tpDI[T4IPoATKCZYL];
            BHfGj1tpDI[T4IPoATKCZYL] = BHfGj1tpDI[VfCPcHIhEr8 -(448 - 447) - T4IPoATKCZYL];
            BHfGj1tpDI[VfCPcHIhEr8 -(185 - 184) - T4IPoATKCZYL] = yp5aTjlAkz2Z;
            T4IPoATKCZYL = (495 - 294) - (1150 - 950);
        }
    }
    scanf ("%s", oMgdbhWpc);
    mdjubtA = strlen (oMgdbhWpc);
    {
        T4IPoATKCZYL = (1239 - 775) - (689 - 225);
        for (; (int) (mdjubtA - (779 - 778)) / (482 - 480) >= T4IPoATKCZYL;) {
            yp5aTjlAkz2Z = oMgdbhWpc[T4IPoATKCZYL];
            oMgdbhWpc[T4IPoATKCZYL] = oMgdbhWpc[mdjubtA - (203 - 202) - T4IPoATKCZYL];
            oMgdbhWpc[mdjubtA - (283 - 282) - T4IPoATKCZYL] = yp5aTjlAkz2Z;
            T4IPoATKCZYL = (1896 - 898) - (1426 - 429);
        }
    }
    if (VfCPcHIhEr8 >= mdjubtA) {
        {
            T4IPoATKCZYL = mdjubtA;
            for (; T4IPoATKCZYL <= VfCPcHIhEr8;) {
                oMgdbhWpc[T4IPoATKCZYL] = '0';
                T4IPoATKCZYL = T4IPoATKCZYL +(905 - 904);
            }
        }
        BHfGj1tpDI[VfCPcHIhEr8] = '0';
    }
    else {
        {
            T4IPoATKCZYL = VfCPcHIhEr8;
            for (; T4IPoATKCZYL <= mdjubtA;) {
                BHfGj1tpDI[T4IPoATKCZYL] = '0';
                T4IPoATKCZYL = T4IPoATKCZYL +(895 - 894);
            }
        }
        oMgdbhWpc[mdjubtA] = '0';
    }
    {
        T4IPoATKCZYL = (123 - 56) - (81 - 14);
        for (; T4IPoATKCZYL <= p9opyn;) {
            cQWPk8qUzv = (BHfGj1tpDI[T4IPoATKCZYL] - '0') + (oMgdbhWpc[T4IPoATKCZYL] - '0');
            if (cQWPk8qUzv >= (111 - 101)) {
                Tqf3gFQI0U[T4IPoATKCZYL] = SlXwuAPfDRN +'0';
                BHfGj1tpDI[T4IPoATKCZYL +(369 - 368)] = BHfGj1tpDI[T4IPoATKCZYL +(539 - 538)] - '0' + (61 - 60) + '0';
                SlXwuAPfDRN = cQWPk8qUzv % (866 - 856);
            }
            else
                Tqf3gFQI0U[T4IPoATKCZYL] = cQWPk8qUzv + '0';
            T4IPoATKCZYL = (929 - 418) - (545 - 35);
        }
    }
    {
        T4IPoATKCZYL = (1340 - 826) - (1161 - 647);
        for (; T4IPoATKCZYL <= (int) p9opyn / (930 - 928);) {
            yp5aTjlAkz2Z = Tqf3gFQI0U[T4IPoATKCZYL];
            Tqf3gFQI0U[T4IPoATKCZYL] = Tqf3gFQI0U[p9opyn - T4IPoATKCZYL];
            Tqf3gFQI0U[p9opyn - T4IPoATKCZYL] = yp5aTjlAkz2Z;
            T4IPoATKCZYL = T4IPoATKCZYL +(22 - 21);
        }
    }
    {
        T4IPoATKCZYL = (218 - 218);
        for (; T4IPoATKCZYL <= p9opyn;) {
            if (Tqf3gFQI0U[T4IPoATKCZYL] - '0' != (13 - 13) || T4IPoATKCZYL == p9opyn) {
                T4IPoATKCZYL;
                for (; T4IPoATKCZYL <= p9opyn;) {
                    printf ("%c", Tqf3gFQI0U[T4IPoATKCZYL]);
                    T4IPoATKCZYL = T4IPoATKCZYL +(497 - 496);
                }
            }
            T4IPoATKCZYL = T4IPoATKCZYL +(298 - 297);
        }
    }
}

