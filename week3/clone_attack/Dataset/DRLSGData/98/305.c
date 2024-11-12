int main () {
    int bOt6kouHypl;
    int JyKN2he64S7;
    const  int n = JyKN2he64S7;
    char Zdkea8mVhr9 [n + (56 - 55)] [(329 - 288)];
    int XapfRAqNm [n + (199 - 198)];
    int oAli1a;
    for (bOt6kouHypl = (437 - 436); n >= bOt6kouHypl; bOt6kouHypl++) {
        scanf ("%s", Zdkea8mVhr9[bOt6kouHypl]);
        XapfRAqNm[bOt6kouHypl + (158 - 157)] = (670 - 670);
        XapfRAqNm[bOt6kouHypl] = strlen (Zdkea8mVhr9[bOt6kouHypl]);
    }
    oAli1a = (204 - 204);
    for (bOt6kouHypl = (591 - 590); n >= bOt6kouHypl; bOt6kouHypl++) {
        oAli1a = oAli1a + XapfRAqNm[bOt6kouHypl];
        if ((1013 - 933) >= oAli1a && oAli1a + XapfRAqNm[bOt6kouHypl + (343 - 342)] + (498 - 497) <= (980 - 900) && bOt6kouHypl != n) {
            cout << Zdkea8mVhr9[bOt6kouHypl] << " ";
            oAli1a++;
        }
        else if (oAli1a <= (233 - 153) && oAli1a + XapfRAqNm[bOt6kouHypl + (181 - 180)] + (973 - 972) > 80 && bOt6kouHypl != n) {
            cout << Zdkea8mVhr9[bOt6kouHypl] << endl;
            oAli1a = (309 - 309);
        }
        else
            cout << Zdkea8mVhr9[bOt6kouHypl];
    }
    cin >> JyKN2he64S7;
}

