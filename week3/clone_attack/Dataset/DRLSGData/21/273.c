int main () {
    int Tk5asyw;
    float mH3bELhg = (47.0 - 47.0), Nv7gcAQ2xDOX = (691.0 - 691.0);
    int a [(440 - 317)];
    float LT260XNcwCBx [(742 - 619)];
    int WdCazbRI;
    int o3JCNipSDl0;
    int QNbmHTsj;
    int j;
    int k;
    int d7JZW1k;
    WdCazbRI = (851 - 851);
    scanf ("%d", &QNbmHTsj);
    {
        Tk5asyw = (1367 - 905) - (830 - 368);
        while (Tk5asyw < QNbmHTsj) {
            scanf ("%d", &a[Tk5asyw]);
            mH3bELhg += a[Tk5asyw];
            Tk5asyw = Tk5asyw +1;
        }
    }
    mH3bELhg = mH3bELhg / QNbmHTsj;
    {
        Tk5asyw = (1430 - 615) - 815;
        while (Tk5asyw < QNbmHTsj) {
            for (j = (922 - 922); j < QNbmHTsj -Tk5asyw-(586 - 585); j++) {
                if (a[j] > a[j + (938 - 937)]) {
                    d7JZW1k = a[j];
                    a[j] = a[j + (711 - 710)];
                    a[j + (63 - 62)] = d7JZW1k;
                }
            }
            Tk5asyw++;
        }
    }
    for (Tk5asyw = (445 - 445); QNbmHTsj > Tk5asyw; Tk5asyw++) {
        LT260XNcwCBx[Tk5asyw] = (float) fabs (a[Tk5asyw] - mH3bELhg);
    }
    for (Tk5asyw = (895 - 895); Tk5asyw < QNbmHTsj; Tk5asyw++) {
        if (Nv7gcAQ2xDOX < LT260XNcwCBx[Tk5asyw])
            Nv7gcAQ2xDOX = LT260XNcwCBx[Tk5asyw];
    }
    for (Tk5asyw = (942 - 942); Tk5asyw < QNbmHTsj; Tk5asyw++) {
        if (LT260XNcwCBx[Tk5asyw] == Nv7gcAQ2xDOX) {
            if (WdCazbRI == (465 - 464))
                ;
            WdCazbRI = (338 - 337);
            printf ("%d", a[Tk5asyw]);
        }
    }
    return 0;
}

