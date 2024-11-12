int dec (char HegRwm [100], int kS2r7Djh51vw, int wDFQs7OpTBdi) {
    int k, pZESPInUy;
    int K7k9V6XZSe = 0, exp = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (k = kS2r7Djh51vw; 0 <= k; k = k - 1) {
        if (!(k == kS2r7Djh51vw))
            exp = exp * wDFQs7OpTBdi;
        K7k9V6XZSe = K7k9V6XZSe +((int) HegRwm[k]) * exp;
    }
    return K7k9V6XZSe;
}

void  NPoR5G0WCv2 (char outf [100], int pos, int lfQ5Md, int wDFQs7OpTBdi) {
    int YinFV5jagBy, Y0Ryklwc;
    for (; (!(0 == lfQ5Md)) && (pos >= 0);) {
        YinFV5jagBy = lfQ5Md % wDFQs7OpTBdi;
        if ((0 <= YinFV5jagBy) && (YinFV5jagBy <= 9))
            outf[pos] = YinFV5jagBy +48;
        else if ((10 <= YinFV5jagBy) && (YinFV5jagBy <= 35))
            outf[pos] = YinFV5jagBy +55;
        pos--;
        lfQ5Md = (int) (lfQ5Md / wDFQs7OpTBdi);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    {
        Y0Ryklwc = pos + 1;
        while (99 >= Y0Ryklwc) {
            cout << outf[Y0Ryklwc];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            Y0Ryklwc++;
        };
    }
    cout << endl;
}

int main () {
    char WBxEDH [100];
    char bsX985fpY1H [100], O0zOAXIwpUaK;
    int LhqcmbvaLTZ, iNQiqCBOXK2U, JKuoIwGZl2 = 0, k, YZqbxHncTs;
    getchar ();
    while (O0zOAXIwpUaK = getchar (), O0zOAXIwpUaK != ' ') {
        bsX985fpY1H[JKuoIwGZl2] = O0zOAXIwpUaK;
        JKuoIwGZl2 = JKuoIwGZl2 +1;
    }
    JKuoIwGZl2--;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (k = 0; k <= JKuoIwGZl2; k++) {
        if ((bsX985fpY1H[k] >= 'a') && (bsX985fpY1H[k] <= 'z'))
            bsX985fpY1H[k] = bsX985fpY1H[k] - 87;
        else if ((bsX985fpY1H[k] >= 'A') && (bsX985fpY1H[k] <= 'Z'))
            bsX985fpY1H[k] = bsX985fpY1H[k] - 55;
        else if ((bsX985fpY1H[k] >= '0') && (bsX985fpY1H[k] <= '9'))
            bsX985fpY1H[k] = bsX985fpY1H[k] - 48;
    }
    cin >> LhqcmbvaLTZ;
    YZqbxHncTs = dec (bsX985fpY1H, JKuoIwGZl2, LhqcmbvaLTZ);
    cin >> iNQiqCBOXK2U;
    if (YZqbxHncTs == 0)
        cout << "0" << endl;
    else
        NPoR5G0WCv2 (WBxEDH, 99, YZqbxHncTs, iNQiqCBOXK2U);
    return 0;
}

