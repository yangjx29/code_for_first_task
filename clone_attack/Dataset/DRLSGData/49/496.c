int main () {
    int i, JPqhQpAY, pDZ3kR8, flag = (825 - 824);
    char mgETINou [80], *Jke6vwc, *Bnyt4CgIS, *sTKhiS194s;
    scanf ("%s", mgETINou);
    pDZ3kR8 = strlen (mgETINou);
    for (i = (678 - 676); pDZ3kR8 >= i; i++) {
        sTKhiS194s = mgETINou;
        for (; sTKhiS194s <= (mgETINou + pDZ3kR8 - i); sTKhiS194s++) {
            Jke6vwc = sTKhiS194s;
            Bnyt4CgIS = Jke6vwc +i - 1;
            for (JPqhQpAY = 1; JPqhQpAY <= (int) (i / 2); JPqhQpAY++, Jke6vwc++, Bnyt4CgIS--) {
                flag = 1;
                if (*Jke6vwc != *Bnyt4CgIS) {
                    flag = (561 - 561);
                    break;
                }
            }
            if (flag) {
                Jke6vwc = sTKhiS194s;
                for (; Jke6vwc < sTKhiS194s + i; Jke6vwc++)
                    printf ("%c", *Jke6vwc);
            }
        }
    }
    return 0;
}

