int compare (const  void  *pKBeAjChkgqZ, const  void  *elem2) {
    return (*(int*) pKBeAjChkgqZ - *(int*) elem2);
}

int main () {
    int TJ [2001];
    int Blz9GE7 [2001];
    int ttgby1AKS;
    while (cin >> ttgby1AKS && ttgby1AKS != 0) {
        int vH5OMtkeA;
        int Tslow;
        int N2pqLZ0XYx;
        int NLaiRdkMJI;
        int keSbOu9Es41a = 0;
        {
            int zbLyuWUk2 = 0;
            for (; ttgby1AKS > zbLyuWUk2;) {
                cin >> TJ[zbLyuWUk2];
                zbLyuWUk2++;
            }
        }
        {
            int zbLyuWUk2 = 0;
            for (; zbLyuWUk2 < ttgby1AKS;) {
                cin >> Blz9GE7[zbLyuWUk2];
                zbLyuWUk2++;
            }
        }
        qsort (TJ, ttgby1AKS, sizeof (int), compare);
        qsort (Blz9GE7, ttgby1AKS, sizeof (int), compare);
        Tslow = vH5OMtkeA = 0;
        N2pqLZ0XYx = NLaiRdkMJI = ttgby1AKS - 1;
        for (; Tslow <= N2pqLZ0XYx &&vH5OMtkeA <= NLaiRdkMJI;) {
            if (Blz9GE7[NLaiRdkMJI] < TJ[N2pqLZ0XYx]) {
                N2pqLZ0XYx--;
                keSbOu9Es41a++;
                NLaiRdkMJI--;
            }
            else if (Blz9GE7[NLaiRdkMJI] > TJ[N2pqLZ0XYx]) {
                if (Blz9GE7[NLaiRdkMJI +1] > TJ[Tslow -1])
                    keSbOu9Es41a--;
                Tslow++;
                NLaiRdkMJI--;
            }
            else {
                for (; Tslow <= N2pqLZ0XYx &&vH5OMtkeA <= NLaiRdkMJI;) {
                    if (TJ[Tslow] > Blz9GE7[vH5OMtkeA]) {
                        vH5OMtkeA++;
                        keSbOu9Es41a++;
                        Tslow++;
                    }
                    else {
                        NLaiRdkMJI--;
                        Tslow++;
                        if (TJ[Tslow -1] < Blz9GE7[NLaiRdkMJI +1])
                            keSbOu9Es41a--;
                        break;
                    }
                }
            }
        }
        cout << keSbOu9Es41a * 200 << endl;
    }
    return 0;
}

