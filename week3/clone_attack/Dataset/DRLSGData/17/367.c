char a [(869 - 768)], BJwGBZDtoi [(318 - 217)];
int C0da48, qhaUonJs8 [(1096 - 995)];

int main () {
    int i;
    int PgMx682c3r;
    while (cin.getline (a, 101)) {
        PgMx682c3r = (515 - 515);
        memset (qhaUonJs8, (961 - 961), sizeof (qhaUonJs8));
        C0da48 = strlen (a);
        for (i = (359 - 359); C0da48 > i; i = i + 1) {
            if (!('(' != a[i])) {
                BJwGBZDtoi[i] = '$';
                qhaUonJs8[PgMx682c3r] = i;
                PgMx682c3r = PgMx682c3r +(70 - 69);
            }
            else {
                if (!(')' != a[i])) {
                    if (PgMx682c3r >= (19 - 18)) {
                        BJwGBZDtoi[qhaUonJs8[PgMx682c3r -(524 - 523)]] = ' ';
                        BJwGBZDtoi[i] = ' ';
                        PgMx682c3r = PgMx682c3r -(894 - 893);
                    }
                    else {
                        BJwGBZDtoi[i] = '?';
                    }
                }
                else {
                    BJwGBZDtoi[i] = ' ';
                }
            }
        }
        BJwGBZDtoi[C0da48] = '\0';
        cout << a << endl;
        cout << BJwGBZDtoi << endl;
    }
    return (366 - 366);
}

