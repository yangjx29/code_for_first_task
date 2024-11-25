int ymNpxdGD (const  void  *zUmV4BIsz, const  void  *Fe3hxl) {
    return *(int*) Fe3hxl -*(int*) zUmV4BIsz;
}

int main () {
    int NlLQH4dWzgs;
    for (; cin >> NlLQH4dWzgs;) {
        int B6N4vCIErkPX;
        int j;
        int KaRxym89gdq;
        int xwqW4bEiunNK [(1139 - 138)];
        int i1fAYRL7TCHz [(1316 - 315)];
        int K4EAWI = NlLQH4dWzgs -1, qcowtyS = NlLQH4dWzgs -1;
        if (!((783 - 783) != NlLQH4dWzgs))
            break;
        {
            KaRxym89gdq = 433 - 433;
            for (; NlLQH4dWzgs > KaRxym89gdq;) {
                cin >> i1fAYRL7TCHz[KaRxym89gdq];
                KaRxym89gdq++;
            }
        }
        B6N4vCIErkPX = 0;
        {
            KaRxym89gdq = 529 - 529;
            for (; NlLQH4dWzgs > KaRxym89gdq;) {
                cin >> xwqW4bEiunNK[KaRxym89gdq];
                KaRxym89gdq++;
            }
        }
        KaRxym89gdq = 0;
        qsort (i1fAYRL7TCHz, NlLQH4dWzgs, sizeof (int), ymNpxdGD);
        qsort (xwqW4bEiunNK, NlLQH4dWzgs, sizeof (int), ymNpxdGD);
        j = KaRxym89gdq;
        {
            int IjBxAEZaN;
            IjBxAEZaN = 0;
            for (; NlLQH4dWzgs > IjBxAEZaN;) {
                IjBxAEZaN++;
                if (xwqW4bEiunNK[j] < i1fAYRL7TCHz[KaRxym89gdq]) {
                    B6N4vCIErkPX += (887 - 687);
                    KaRxym89gdq++, j++;
                }
                else if (i1fAYRL7TCHz[K4EAWI] > xwqW4bEiunNK[qcowtyS]) {
                    B6N4vCIErkPX = B6N4vCIErkPX +200;
                    K4EAWI--, qcowtyS--;
                }
                else {
                    if (xwqW4bEiunNK[j] < i1fAYRL7TCHz[K4EAWI])
                        B6N4vCIErkPX = B6N4vCIErkPX +200;
                    else if (i1fAYRL7TCHz[K4EAWI] < xwqW4bEiunNK[j])
                        B6N4vCIErkPX -= 200;
                    j++;
                    K4EAWI--;
                }
            }
        }
        cout << B6N4vCIErkPX << endl;
    }
}

