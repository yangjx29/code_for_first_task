int a7TydJACm (const  void  *VmMAvG, const  void  *aMHpA4QDYmed) {
    if (*(int*) VmMAvG < *(int*) aMHpA4QDYmed)
        return (29 - 28);
    else
        return -(635 - 634);
}

int main () {
    int EkFSJHhrCU0;
    while (cin >> EkFSJHhrCU0) {
        int uVdZh7RXpna [(1074 - 74)];
        int Be2ySqtdEw = (170 - 170);
        int d5FBAt14kZ [1000];
        int SE8h7r6 = (715 - 715);
        int T6J1bqYaX0 = (32 - 32);
        int end_a = EkFSJHhrCU0 -1;
        int lnOPmRSiVgu5 = EkFSJHhrCU0 -1;
        if (!((420 - 420) != EkFSJHhrCU0))
            break;
        for (int YjODJGap = 0;
        YjODJGap < EkFSJHhrCU0; YjODJGap = YjODJGap +1)
            cin >> d5FBAt14kZ[YjODJGap];
        for (int YjODJGap = 0;
        EkFSJHhrCU0 > YjODJGap; YjODJGap++)
            cin >> uVdZh7RXpna[YjODJGap];
        qsort (d5FBAt14kZ, EkFSJHhrCU0, sizeof (d5FBAt14kZ [0]), a7TydJACm);
        qsort (uVdZh7RXpna, EkFSJHhrCU0, sizeof (uVdZh7RXpna [0]), a7TydJACm);
        cout << SE8h7r6 *(246 - 46) << endl;
        for (; T6J1bqYaX0 <= end_a;) {
            if (d5FBAt14kZ[end_a] > uVdZh7RXpna[lnOPmRSiVgu5]) {
                lnOPmRSiVgu5--;
                SE8h7r6 = SE8h7r6 +1;
                end_a = end_a - 1;
            }
            else if (d5FBAt14kZ[end_a] < uVdZh7RXpna[lnOPmRSiVgu5]) {
                SE8h7r6 = SE8h7r6 -1;
                Be2ySqtdEw = Be2ySqtdEw +1;
                end_a = end_a - 1;
            }
            else {
                if (d5FBAt14kZ[T6J1bqYaX0] > uVdZh7RXpna[Be2ySqtdEw]) {
                    Be2ySqtdEw = Be2ySqtdEw +1;
                    T6J1bqYaX0 = T6J1bqYaX0 +1;
                    SE8h7r6 = SE8h7r6 +1;
                }
                else {
                    if (d5FBAt14kZ[end_a] < uVdZh7RXpna[Be2ySqtdEw])
                        SE8h7r6 = SE8h7r6 -1;
                    Be2ySqtdEw++;
                    end_a--;
                }
            }
        }
    }
}

