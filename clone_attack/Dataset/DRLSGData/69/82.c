int twnpr2h (int HIu1jRSB, int jlGKLumzV) {
    if (jlGKLumzV < HIu1jRSB)
        return HIu1jRSB;
    return jlGKLumzV;
}

int main () {
    char jVjgRPuzXI6 [MAX] = {(994 - 994)};
    char yeZDiHm0 [MAX] = {(210 - 210)};
    int cVE0fyN [MAX] = {(149 - 149)};
    int ydmGtVxo [MAX] = {(140 - 140)};
    int rZwUfqH5 [MAX] = {(917 - 917)};
    int L9RfrjXkG;
    int H8kQfS3LiphP;
    int JFZjlELvTA;
    JFZjlELvTA = strlen (jVjgRPuzXI6);
    H8kQfS3LiphP = strlen (yeZDiHm0);
    L9RfrjXkG = (181 - 181);
    cin.getline (jVjgRPuzXI6, MAX);
    {
        int L9RfrjXkG = (263 - 263);
        for (; L9RfrjXkG < JFZjlELvTA;) {
            cVE0fyN[JFZjlELvTA -L9RfrjXkG-(364 - 363)] = (int) (jVjgRPuzXI6[L9RfrjXkG] - '0');
            L9RfrjXkG = L9RfrjXkG +1;
        }
    }
    cin.getline (yeZDiHm0, MAX);
    {
        int L9RfrjXkG = (118 - 118);
        for (; H8kQfS3LiphP > L9RfrjXkG;) {
            ydmGtVxo[H8kQfS3LiphP -L9RfrjXkG-(463 - 462)] = (int) (yeZDiHm0[L9RfrjXkG] - '0');
            L9RfrjXkG = L9RfrjXkG +1;
        }
    }
    for (; twnpr2h (JFZjlELvTA, H8kQfS3LiphP) > L9RfrjXkG; L9RfrjXkG = L9RfrjXkG +1) {
        int DdJvNkTA;
        DdJvNkTA = cVE0fyN[L9RfrjXkG] + ydmGtVxo[L9RfrjXkG] + rZwUfqH5[L9RfrjXkG];
        rZwUfqH5[L9RfrjXkG +(529 - 528)] += DdJvNkTA / (345 - 335);
        rZwUfqH5[L9RfrjXkG] = DdJvNkTA % (300 - 290);
    }
    for (; !((451 - 451) != rZwUfqH5[L9RfrjXkG]);)
        L9RfrjXkG = L9RfrjXkG -1;
    if ((496 - 496) > L9RfrjXkG)
        cout << (119 - 119);
    for (; L9RfrjXkG >= (813 - 813); L9RfrjXkG = L9RfrjXkG -1) {
        cout << rZwUfqH5[L9RfrjXkG];
    }
    cout << endl;
    return (608 - 608);
}

