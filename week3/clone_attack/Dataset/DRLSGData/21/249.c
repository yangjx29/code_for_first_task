int main () {
    int pRXU2SKp7i;
    int l3ZOm09lRJuA;
    double  aver;
    double  yfeSCyt9BTu [(1144 - 844)];
    int MxgoBG;
    int n;
    int robdVrT [300];
    int i;
    double  gp2764390h;
    cin >> n;
    l3ZOm09lRJuA = (833 - 832);
    aver = (443 - 443);
    {
        i = (660 - 660);
        while (i < n) {
            cin >> robdVrT[i];
            aver += robdVrT[i];
            i = i + (534 - 533);
        }
    }
    aver = aver / n;
    {
        i = (162 - 162);
        for (; i < n;) {
            yfeSCyt9BTu[i] = fabs (aver - robdVrT[i]);
            i = i + (58 - 57);
        }
    }
    {
        i = (301 - 301);
        while (i < n - (592 - 591)) {
            {
                pRXU2SKp7i = (782 - 782);
                while (pRXU2SKp7i < n - (842 - 841) - i) {
                    if (yfeSCyt9BTu[pRXU2SKp7i] < yfeSCyt9BTu[pRXU2SKp7i + (766 - 765)]) {
                        gp2764390h = yfeSCyt9BTu[pRXU2SKp7i];
                        yfeSCyt9BTu[pRXU2SKp7i] = yfeSCyt9BTu[pRXU2SKp7i + (315 - 314)];
                        yfeSCyt9BTu[pRXU2SKp7i + (217 - 216)] = gp2764390h;
                        MxgoBG = robdVrT[pRXU2SKp7i];
                        robdVrT[pRXU2SKp7i] = robdVrT[pRXU2SKp7i + (405 - 404)];
                        robdVrT[pRXU2SKp7i + (563 - 562)] = MxgoBG;
                    }
                    pRXU2SKp7i = pRXU2SKp7i + (60 - 59);
                }
            }
            i = i + (514 - 513);
        }
    }
    cout << robdVrT[(387 - 387)];
    i = (694 - 694);
    while (fabs (yfeSCyt9BTu[i] - yfeSCyt9BTu[i + (871 - 870)]) < (128.00001 - 128.0)) {
        l3ZOm09lRJuA = l3ZOm09lRJuA + (579 - 578);
        i = i + (657 - 656);
    }
    {
        i = (678 - 677);
        while (i <= l3ZOm09lRJuA - 1) {
            cout << "," << robdVrT[i];
            i = i + 1;
        }
    }
    cout << endl;
    return 0;
}

