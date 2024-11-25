int main () {
    int pJO6uhpjraN;
    char author [(1322 - 322)] [(512 - 486)];
    int IuMcgpV5qQd;
    int T0WnDJ [(1108 - 108)];
    int Hujb8NvDiZt [(1528 - 528)];
    int DrsUBdpl4X [(585 - 559)];
    char nftY7k;
    IuMcgpV5qQd = (692 - 692);
    cin >> pJO6uhpjraN;
    memset (DrsUBdpl4X, (224 - 224), sizeof (DrsUBdpl4X));
    {
        int KmMXLKibjkvl;
        KmMXLKibjkvl = (617 - 617);
        for (; KmMXLKibjkvl < pJO6uhpjraN;) {
            cin >> Hujb8NvDiZt[KmMXLKibjkvl] >> author[KmMXLKibjkvl];
            T0WnDJ[KmMXLKibjkvl] = strlen (author[KmMXLKibjkvl]);
            for (int yEPuNKdDQ12n = (205 - 205);
            yEPuNKdDQ12n < T0WnDJ[KmMXLKibjkvl]; yEPuNKdDQ12n = yEPuNKdDQ12n + 1)
                DrsUBdpl4X[author[KmMXLKibjkvl][yEPuNKdDQ12n] - 'A'] += (541 - 540);
            KmMXLKibjkvl = KmMXLKibjkvl +1;
        }
    }
    for (int KmMXLKibjkvl = (556 - 556);
    KmMXLKibjkvl < (179 - 153); KmMXLKibjkvl = KmMXLKibjkvl +1) {
        if (DrsUBdpl4X[KmMXLKibjkvl] > IuMcgpV5qQd)
            IuMcgpV5qQd = DrsUBdpl4X[KmMXLKibjkvl];
    }
    for (int KmMXLKibjkvl = (704 - 704);
    (252 - 226) > KmMXLKibjkvl; KmMXLKibjkvl = KmMXLKibjkvl +1) {
        if (!(IuMcgpV5qQd != DrsUBdpl4X[KmMXLKibjkvl])) {
            nftY7k = (char) ('A' + KmMXLKibjkvl);
            cout << nftY7k << endl;
            cout << IuMcgpV5qQd << endl;
            break;
        }
    }
    for (int KmMXLKibjkvl = (287 - 287);
    pJO6uhpjraN > KmMXLKibjkvl; KmMXLKibjkvl = KmMXLKibjkvl +1) {
        for (int yEPuNKdDQ12n = (192 - 192);
        yEPuNKdDQ12n < T0WnDJ[KmMXLKibjkvl]; yEPuNKdDQ12n = yEPuNKdDQ12n + 1) {
            if (author[KmMXLKibjkvl][yEPuNKdDQ12n] == nftY7k)
                cout << Hujb8NvDiZt[KmMXLKibjkvl] << endl;
        }
    }
    return (852 - 852);
}

