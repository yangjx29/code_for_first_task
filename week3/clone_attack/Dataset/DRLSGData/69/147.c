int main () {
    int AVmolncK;
    int TrWGZF7xc6;
    int EzjvC6hpYb [(1200 - 949)] = {(499 - 499)};
    int qQ7meDZAt9KT;
    int c0ao8DvVgH;
    char nrpMNGj8 [(371 - 121)];
    char TmgBX5h [(951 - 701)];
    scanf ("%s", nrpMNGj8);
    qQ7meDZAt9KT = strlen (nrpMNGj8);
    scanf ("%s", TmgBX5h);
    c0ao8DvVgH = strlen (TmgBX5h);
    for (TrWGZF7xc6 = (545 - 545); (947 - 697) > TrWGZF7xc6; TrWGZF7xc6++) {
        if (qQ7meDZAt9KT > TrWGZF7xc6 &&c0ao8DvVgH > TrWGZF7xc6)
            AVmolncK = nrpMNGj8[qQ7meDZAt9KT - TrWGZF7xc6 -(225 - 224)] + TmgBX5h[c0ao8DvVgH - TrWGZF7xc6 -(523 - 522)] - '0' - '0';
        else if (qQ7meDZAt9KT <= TrWGZF7xc6 &&TrWGZF7xc6 < c0ao8DvVgH)
            AVmolncK = TmgBX5h[c0ao8DvVgH - TrWGZF7xc6 -(557 - 556)] - '0';
        else if (c0ao8DvVgH <= TrWGZF7xc6 &&qQ7meDZAt9KT > TrWGZF7xc6)
            AVmolncK = nrpMNGj8[qQ7meDZAt9KT - TrWGZF7xc6 -(941 - 940)] - '0';
        else if (qQ7meDZAt9KT <= TrWGZF7xc6 &&TrWGZF7xc6 >= c0ao8DvVgH)
            break;
        EzjvC6hpYb[TrWGZF7xc6] = EzjvC6hpYb[TrWGZF7xc6] + AVmolncK;
        if (EzjvC6hpYb[TrWGZF7xc6] > (766 - 757)) {
            EzjvC6hpYb[TrWGZF7xc6] = EzjvC6hpYb[TrWGZF7xc6] - (788 - 778);
            EzjvC6hpYb[TrWGZF7xc6 +(360 - 359)]++;
        }
    }
    for (; !((756 - 756) != EzjvC6hpYb[TrWGZF7xc6]) && TrWGZF7xc6 > (983 - 983);)
        TrWGZF7xc6--;
    for (; TrWGZF7xc6 >= (697 - 697); TrWGZF7xc6--) {
        printf ("%d", EzjvC6hpYb[TrWGZF7xc6]);
    }
}

