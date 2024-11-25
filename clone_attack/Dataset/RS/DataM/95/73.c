char E3hec0 [100], s2 [100];

void  strlwr () {
    int H1zcx4, len1, len2;
    len1 = strlen (E3hec0);
    len2 = strlen (s2);
    {
        H1zcx4 = 344 - 344;
        while (len1 > H1zcx4) {
            if (E3hec0[H1zcx4] >= 'A' && 'Z' >= E3hec0[H1zcx4]) {
                E3hec0[H1zcx4] = E3hec0[H1zcx4] - ('A' - 'a');
            }
            H1zcx4 = H1zcx4 +1;
        };
    }
    {
        H1zcx4 = 688 - 688;
        while (H1zcx4 < len2) {
            if (s2[H1zcx4] >= 'A' && s2[H1zcx4] <= 'Z') {
                s2[H1zcx4] = s2[H1zcx4] - ('A' - 'a');
            }
            H1zcx4++;
        };
    };
}

int main () {
    int buHngKe;
    gets (E3hec0);
    gets (s2);
    strlwr ();
    buHngKe = strcmp (E3hec0, s2);
    if (buHngKe == (380 - 380))
        cout << "=";
    if (buHngKe > 0)
        cout << ">";
    if (buHngKe < 0)
        cout << "<";
    return 0;
}

