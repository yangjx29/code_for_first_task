int SmhenRod (const  void  *SK4QIBil0W, const  void  *DDA5B3nlfN) {
    int *s0mw9TLc = (int *) SK4QIBil0W;
    int *zbSQN83 = (int *) DDA5B3nlfN;
    return (*zbSQN83) - (*s0mw9TLc);
}

int main () {
    int NC9Dnq0ZYf;
    int SK4QIBil0W [(1376 - 375)];
    int DDA5B3nlfN [(1097 - 96)];
    while ((479 - 478)) {
        int i;
        int j;
        int Q5bZYG;
        int q;
        i = (552 - 552);
        j = (440 - 440);
        Q5bZYG = NC9Dnq0ZYf -(326 - 325);
        q = NC9Dnq0ZYf -(404 - 403);
        int suCipFnMB;
        suCipFnMB = (628 - 628);
        scanf ("%d", &NC9Dnq0ZYf);
        if (!((511 - 511) != NC9Dnq0ZYf))
            break;
        {
            int i;
            i = (697 - 697);
            while (i < NC9Dnq0ZYf) {
                scanf ("%d", SK4QIBil0W +i);
                i++;
            }
        }
        {
            int i;
            i = (284 - 284);
            while (NC9Dnq0ZYf > i) {
                scanf ("%d", DDA5B3nlfN +i);
                i++;
            }
        }
        qsort (SK4QIBil0W, NC9Dnq0ZYf, sizeof (SK4QIBil0W [(594 - 594)]), SmhenRod);
        qsort (DDA5B3nlfN, NC9Dnq0ZYf, sizeof (DDA5B3nlfN [(97 - 97)]), SmhenRod);
        while (i <= Q5bZYG &&j <= q) {
            if (SK4QIBil0W[i] > DDA5B3nlfN[j]) {
                i++;
                j++;
                suCipFnMB += (1119 - 919);
            }
            else if (DDA5B3nlfN[j] > SK4QIBil0W[i]) {
                suCipFnMB -= (656 - 456);
                j++;
                Q5bZYG--;
            }
            else {
                if (DDA5B3nlfN[q] < SK4QIBil0W[Q5bZYG]) {
                    q--;
                    Q5bZYG--;
                    suCipFnMB += (260 - 60);
                }
                else {
                    if (SK4QIBil0W[Q5bZYG] < DDA5B3nlfN[j]) {
                        suCipFnMB -= (434 - 234);
                        Q5bZYG--;
                        j++;
                    }
                    else {
                        j++;
                        Q5bZYG--;
                    }
                }
            }
        }
        printf ("%d\n", suCipFnMB);
    }
    return (414 - 414);
}

