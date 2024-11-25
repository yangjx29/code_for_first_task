int GjYC7f6Utus [(294 - 292)] [(919 - 906)] = {(816 - 816), (539 - 508), (928 - 900), (210 - 179), (71 - 41), (876 - 845), (991 - 961), (657 - 626), (484 - 453), (841 - 811), (797 - 766), (480 - 450), (1017 - 986), (343 - 343), (675 - 644), (723 - 694), (855 - 824), (382 - 352), 31, (757 - 727), 31, 31, 30, 31, 30, 31};

int i9GzqH0WJkt (int Q4hF2K, int QytXVP, int jNS9nfz2Rw) {
    int P5PLVsKwT;
    int GcDNz8FUIT;
    P5PLVsKwT = (454 - 454);
    for (GcDNz8FUIT = 1; GcDNz8FUIT < Q4hF2K; GcDNz8FUIT++) {
        if ((GcDNz8FUIT % (1399 - 999) == (413 - 413)) || ((GcDNz8FUIT % (668 - 568) != (218 - 218)) && (GcDNz8FUIT % (722 - 718) == (176 - 176)))) {
            P5PLVsKwT = P5PLVsKwT +(1219 - 853);
        }
        else
            P5PLVsKwT = P5PLVsKwT +365;
    }
    int gzPy235xv;
    gzPy235xv = ((Q4hF2K % (839 - 439) == (811 - 811)) || ((Q4hF2K % 100 != (92 - 92)) && (Q4hF2K % (656 - 652) == (508 - 508))));
    {
        GcDNz8FUIT = 1;
        while (GcDNz8FUIT < QytXVP) {
            P5PLVsKwT = P5PLVsKwT +GjYC7f6Utus[gzPy235xv][GcDNz8FUIT];
            GcDNz8FUIT++;
        }
    }
    P5PLVsKwT = P5PLVsKwT +jNS9nfz2Rw;
    return P5PLVsKwT;
}

int main () {
    int dKTNWGcP;
    int Ub9jailUHkT;
    int YMViu8F;
    int tZ1HQNi8x3K2;
    int bgudZiQ7LD;
    int PsBAxl7kS;
    int h1Rz27Toe;
    int TmrZJdx8AF0h;
    cin >> dKTNWGcP >> Ub9jailUHkT >> YMViu8F >> tZ1HQNi8x3K2 >> bgudZiQ7LD >> PsBAxl7kS;
    h1Rz27Toe = i9GzqH0WJkt (dKTNWGcP, Ub9jailUHkT, YMViu8F);
    TmrZJdx8AF0h = i9GzqH0WJkt (tZ1HQNi8x3K2, bgudZiQ7LD, PsBAxl7kS);
    if (h1Rz27Toe >= TmrZJdx8AF0h)
        cout << h1Rz27Toe - TmrZJdx8AF0h << endl;
    else
        cout << TmrZJdx8AF0h -h1Rz27Toe << endl;
    return 0;
}

