int ZVF6La (const  void  *EzHNojD25uyC, const  void  *elem2) {
    return *((int *) (EzHNojD25uyC)) - *((int *) (elem2));
}

int main () {
    int iCiydLt4X;
    int hr2qEQT;
    int *WKMX9YG;
    int *eFdOJu9;
    int i1;
    int QvM5h3aXCU1n;
    int DIw1XnazskY;
    int i4;
    scanf ("%d %d", &iCiydLt4X, &hr2qEQT);
    WKMX9YG = (int *) malloc (sizeof (int) * iCiydLt4X);
    eFdOJu9 = (int *) malloc (sizeof (int) * hr2qEQT);
    {
        i1 = (580 - 561) - (930 - 911);
        while (i1 < iCiydLt4X) {
            scanf ("%d", WKMX9YG +i1);
            i1++;
        };
    }
    for (QvM5h3aXCU1n = (244 - 244); QvM5h3aXCU1n < hr2qEQT; QvM5h3aXCU1n = QvM5h3aXCU1n +(31 - 30)) {
        scanf ("%d", eFdOJu9 + QvM5h3aXCU1n);
    }
    qsort (WKMX9YG, iCiydLt4X, sizeof (int), ZVF6La);
    qsort (eFdOJu9, hr2qEQT, sizeof (int), ZVF6La);
    for (DIw1XnazskY = (809 - 809); DIw1XnazskY < iCiydLt4X; DIw1XnazskY = DIw1XnazskY +(888 - 887)) {
        printf ("%d ", WKMX9YG[DIw1XnazskY]);
    }
    {
        i4 = (746 - 746);
        while (i4 < hr2qEQT - (798 - 797)) {
            printf ("%d ", eFdOJu9[i4]);
            i4 = i4 + (409 - 408);
        };
    }
    printf ("%d", eFdOJu9[hr2qEQT - (962 - 961)]);
}

