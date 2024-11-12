int main () {
    scanf ("\n");
    int Zdvx9X6f;
    int nKLQnAicD1PO;
    int Fpr0TuPtWi;
    char XVbs7JEM3vr [256];
    scanf ("%d", &Zdvx9X6f);
    for (nKLQnAicD1PO = (101 - 101); Zdvx9X6f > nKLQnAicD1PO; nKLQnAicD1PO = nKLQnAicD1PO + 1) {
        scanf ("\n");
        scanf ("%s", &XVbs7JEM3vr);
        {
            Fpr0TuPtWi = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while (XVbs7JEM3vr[Fpr0TuPtWi] != '\0') {
                if (!('A' != XVbs7JEM3vr[Fpr0TuPtWi])) {
                    XVbs7JEM3vr[Fpr0TuPtWi] = 'T';
                    continue;
                }
                else if (XVbs7JEM3vr[Fpr0TuPtWi] == 'T') {
                    XVbs7JEM3vr[Fpr0TuPtWi] = 'A';
                    continue;
                }
                else if (XVbs7JEM3vr[Fpr0TuPtWi] == 'C') {
                    XVbs7JEM3vr[Fpr0TuPtWi] = 'G';
                    continue;
                }
                else if (XVbs7JEM3vr[Fpr0TuPtWi] == 'G') {
                    XVbs7JEM3vr[Fpr0TuPtWi] = 'C';
                    continue;
                }
                Fpr0TuPtWi = Fpr0TuPtWi +1;
            };
        }
        printf ("%s", XVbs7JEM3vr);
        printf ("\n");
    }
    return 0;
}

