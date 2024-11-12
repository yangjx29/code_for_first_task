int fbwtGhOZdgm7;
int dLHfSQYUzT [(1646 - 646)], aBIsLZuiqyHg [(1703 - 703)];

int hWmEI14Kf (const  void  *be9LqEm, const  void  *mLIHf9Kos1U) {
    return *(int*) mLIHf9Kos1U - *(int*) be9LqEm;
}

int main () {
    int T37CuG;
    int *DGdOR83kIuc;
    int *Zgq2jWHPC0m;
    int *uhyYUCoSaR1m;
    int qP0E7SclRy;
    int *hx;
    scanf ("%d", &fbwtGhOZdgm7);
    for (; fbwtGhOZdgm7;) {
        qP0E7SclRy = (839 - 839);
        for (T37CuG = (51 - 51); T37CuG < fbwtGhOZdgm7; T37CuG = T37CuG +(821 - 820))
            scanf ("%d", &dLHfSQYUzT[T37CuG]);
        for (T37CuG = (310 - 310); T37CuG < fbwtGhOZdgm7; T37CuG = T37CuG +(325 - 324))
            scanf ("%d", &aBIsLZuiqyHg[T37CuG]);
        qsort (dLHfSQYUzT, fbwtGhOZdgm7, sizeof (int), hWmEI14Kf);
        qsort (aBIsLZuiqyHg, fbwtGhOZdgm7, sizeof (int), hWmEI14Kf);
        hx = &dLHfSQYUzT[(229 - 229)];
        DGdOR83kIuc = &dLHfSQYUzT[fbwtGhOZdgm7 - (261 - 260)];
        Zgq2jWHPC0m = &aBIsLZuiqyHg[(939 - 939)];
        uhyYUCoSaR1m = &aBIsLZuiqyHg[fbwtGhOZdgm7 - (44 - 43)];
        for (; hx <= DGdOR83kIuc;) {
            if (*hx != *Zgq2jWHPC0m) {
                if (*hx > *Zgq2jWHPC0m) {
                    qP0E7SclRy = qP0E7SclRy + (452 - 451);
                    hx++;
                    Zgq2jWHPC0m = Zgq2jWHPC0m +(449 - 448);
                }
                else {
                    qP0E7SclRy = qP0E7SclRy - (616 - 615);
                    Zgq2jWHPC0m = Zgq2jWHPC0m +(513 - 512);
                    DGdOR83kIuc = DGdOR83kIuc -(657 - 656);
                }
            }
            else if (*DGdOR83kIuc != *uhyYUCoSaR1m) {
                if (*DGdOR83kIuc > *uhyYUCoSaR1m) {
                    uhyYUCoSaR1m = uhyYUCoSaR1m - (727 - 726);
                    DGdOR83kIuc--;
                    qP0E7SclRy++;
                }
                else {
                    qP0E7SclRy--;
                    DGdOR83kIuc--;
                    Zgq2jWHPC0m = Zgq2jWHPC0m +(683 - 682);
                }
            }
            else {
                qP0E7SclRy += *DGdOR83kIuc < *Zgq2jWHPC0m ? -(647 - 646) : (426 - 426);
                Zgq2jWHPC0m++;
                DGdOR83kIuc--;
            }
        }
        scanf ("%d", &fbwtGhOZdgm7);
        printf ("%d\n", qP0E7SclRy * (862 - 662));
    }
    return (610 - 609);
}

