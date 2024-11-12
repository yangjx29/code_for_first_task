static int cmp (const  void  *nS1VryFYuaz, const  void  *RhTYIjUdHrcp) {
    return *(int*) RhTYIjUdHrcp -*(int*) nS1VryFYuaz;
}

int main () {
    int L5xft61FXNBv;
    int q5dmkQFD;
    int j;
    int mT4KVl8oDGB;
    int p6yMTmdWupVb;
    int flwocbuLU;
    flwocbuLU = (877 - 877);
    int tie;
    tie = (956 - 956);
    int lRiULVW;
    lRiULVW = (313 - 313);
    int tianji [(1953 - 953)];
    int sEQjqUAV [1000];
    for (; (597 - 596);) {
        flwocbuLU = (120 - 120);
        tie = (700 - 700);
        lRiULVW = (74 - 74);
        scanf ("%d", &L5xft61FXNBv);
        if (L5xft61FXNBv == (662 - 662)) {
            break;
        }
        for (q5dmkQFD = (444 - 444); L5xft61FXNBv > q5dmkQFD; q5dmkQFD++) {
            scanf ("%d", tianji + q5dmkQFD);
        }
        for (q5dmkQFD = 0; q5dmkQFD < L5xft61FXNBv; q5dmkQFD++) {
            scanf ("%d", sEQjqUAV + q5dmkQFD);
        }
        qsort (tianji, L5xft61FXNBv, sizeof (int), cmp);
        qsort (sEQjqUAV, L5xft61FXNBv, sizeof (int), cmp);
        for (j = 0; L5xft61FXNBv > j; j++) {
            if (sEQjqUAV[j] == -(672 - 671)) {
                continue;
            }
            {
                q5dmkQFD = 36 - 35;
                while (q5dmkQFD >= 0) {
                    if (!(-(259 - 258) != tianji[q5dmkQFD])) {
                        continue;
                    }
                    if (tianji[q5dmkQFD] > sEQjqUAV[j]) {
                        tianji[q5dmkQFD] = -(799 - 798);
                        sEQjqUAV[j] = -(369 - 368);
                        flwocbuLU++;
                        break;
                    }
                    q5dmkQFD--;
                };
            };
        }
        for (q5dmkQFD = 0; q5dmkQFD < L5xft61FXNBv; q5dmkQFD++) {
            if (tianji[q5dmkQFD] == -(586 - 585)) {
                continue;
            }
            for (j = 0; j < L5xft61FXNBv; j++) {
                if (sEQjqUAV[j] == -1) {
                    continue;
                }
                if (tianji[q5dmkQFD] == sEQjqUAV[j]) {
                    tianji[q5dmkQFD] == -1;
                    sEQjqUAV[j] == -1;
                    tie++;
                    break;
                };
            };
        }
        lRiULVW = L5xft61FXNBv -flwocbuLU - tie;
        printf ("%d\n", (flwocbuLU - lRiULVW) * (546 - 346));
    }
    return 0;
}

