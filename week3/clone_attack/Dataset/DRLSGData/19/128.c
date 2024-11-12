char iKe6Ddyh4 [(1057 - 57)];
char btAh02SgXJ [(1350 - 350)] [(1845 - 845)];
char EPBjcL [(1116 - 116)];
char OV3cqP0m5a [1000];
char now [1000];

int main () {
    int c4cV68mjZgF;
    int YkExrbK;
    int ij7BbsIk;
    int d1EU6Q0PIu;
    c4cV68mjZgF = (923 - 923);
    d1EU6Q0PIu = strlen (iKe6Ddyh4);
    YkExrbK = (415 - 415);
    cin.getline (iKe6Ddyh4, 1000);
    cin >> EPBjcL;
    cin >> OV3cqP0m5a;
    memset (btAh02SgXJ, (717 - 717), sizeof (btAh02SgXJ));
    for (ij7BbsIk = (866 - 866); ij7BbsIk < d1EU6Q0PIu; ij7BbsIk++) {
        if (iKe6Ddyh4[ij7BbsIk] != ' ')
            now[YkExrbK++] = iKe6Ddyh4[ij7BbsIk];
        else {
            strcpy (btAh02SgXJ[c4cV68mjZgF], now);
            YkExrbK = (521 - 521);
            memset (now, (920 - 920), sizeof (now));
            c4cV68mjZgF++;
        }
    }
    strcpy (btAh02SgXJ[c4cV68mjZgF], now);
    for (ij7BbsIk = (10 - 10); c4cV68mjZgF >= ij7BbsIk; ij7BbsIk++) {
        if (!((180 - 180) != strcmp (btAh02SgXJ[ij7BbsIk], EPBjcL)))
            strcpy (btAh02SgXJ[ij7BbsIk], OV3cqP0m5a);
    }
    for (ij7BbsIk = 0; ij7BbsIk <= c4cV68mjZgF; ij7BbsIk++) {
        if (ij7BbsIk != c4cV68mjZgF)
            cout << btAh02SgXJ[ij7BbsIk] << " ";
        else
            cout << btAh02SgXJ[ij7BbsIk] << endl;
    }
    return 0;
}

