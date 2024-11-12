int main () {
    int iukc71xW = 0;
    int LJr5zyW;
    int pSH5Nk = 0;
    int g3we4U1xHOPy;
    int U9JbRitH;
    scanf ("%d", &LJr5zyW);
    for (; !(0 == LJr5zyW);) {
        scanf ("%d", &g3we4U1xHOPy);
        scanf ("%d", &U9JbRitH);
        if (g3we4U1xHOPy >= 90 && 140 >= g3we4U1xHOPy && 60 <= U9JbRitH &&U9JbRitH <= 90)
            pSH5Nk = pSH5Nk + 1;
        else
            pSH5Nk = 0;
        if (iukc71xW < pSH5Nk)
            iukc71xW = pSH5Nk;
        LJr5zyW--;
    }
    printf ("%d", iukc71xW);
    return 0;
}

