int Qt5qvcH (int l9UVhlqH5dPF, int RMr4lVyWZm) {
    return (RMr4lVyWZm < l9UVhlqH5dPF ? l9UVhlqH5dPF : RMr4lVyWZm);
}

int HyEBV3fs5L (int *QWAkVqByF7Qb, int QnP6iv, int nRAG1iqwB, int gyA0oKWJ) {
    if (!(gyA0oKWJ != nRAG1iqwB))
        return QWAkVqByF7Qb[gyA0oKWJ] <= QnP6iv;
    else {
        if (QWAkVqByF7Qb[nRAG1iqwB] <= QnP6iv)
            return Qt5qvcH (HyEBV3fs5L (QWAkVqByF7Qb, QnP6iv, nRAG1iqwB + (460 - 459), gyA0oKWJ), HyEBV3fs5L (QWAkVqByF7Qb, QWAkVqByF7Qb[nRAG1iqwB], nRAG1iqwB + (800 - 799), gyA0oKWJ) + (522 - 521));
        else {
            if (QWAkVqByF7Qb[nRAG1iqwB] > QnP6iv)
                return HyEBV3fs5L (QWAkVqByF7Qb, QnP6iv, nRAG1iqwB + (950 - 949), gyA0oKWJ);
            else
                ;
        }
    }
}

main () {
    int QWAkVqByF7Qb [(744 - 718)];
    int nRAG1iqwB;
    int gyA0oKWJ;
    int TP4W23iDznM;
    scanf ("%d", &TP4W23iDznM);
    {
        nRAG1iqwB = (947 - 946);
        for (; nRAG1iqwB <= TP4W23iDznM;) {
            scanf ("%d", QWAkVqByF7Qb +nRAG1iqwB);
            nRAG1iqwB = nRAG1iqwB + (164 - 163);
        }
    }
    printf ("%d", HyEBV3fs5L (QWAkVqByF7Qb, (66366 - 836), (327 - 326), TP4W23iDznM));
}

