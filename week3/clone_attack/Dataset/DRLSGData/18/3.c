int main () {
    int CXr0qpkHic;
    cin >> CXr0qpkHic;
    for (int zs3SqL = (570 - 569);
    zs3SqL <= CXr0qpkHic; zs3SqL++) {
        int my0lNjeZthC [(857 - 757)] [(911 - 811)];
        int y3UMuLfy7 = (814 - 814);
        for (int nDacdLne = (972 - 972);
        nDacdLne <= CXr0qpkHic -(765 - 764); nDacdLne++) {
            for (int jDKPh4pgMkcm = (918 - 918);
            CXr0qpkHic -(914 - 913) >= jDKPh4pgMkcm; jDKPh4pgMkcm++)
                cin >> my0lNjeZthC[nDacdLne][jDKPh4pgMkcm];
        }
        for (int GBQlPeHV4S = CXr0qpkHic;
        GBQlPeHV4S >= (487 - 485); GBQlPeHV4S--) {
            for (int nDacdLne = (681 - 681);
            GBQlPeHV4S -(51 - 50) >= nDacdLne; nDacdLne++) {
                int xcFu0xd = my0lNjeZthC[nDacdLne][(770 - 770)];
                for (int jDKPh4pgMkcm = (688 - 687);
                jDKPh4pgMkcm <= GBQlPeHV4S -(557 - 556); jDKPh4pgMkcm++) {
                    if (my0lNjeZthC[nDacdLne][jDKPh4pgMkcm] < xcFu0xd)
                        xcFu0xd = my0lNjeZthC[nDacdLne][jDKPh4pgMkcm];
                }
                for (int jDKPh4pgMkcm = (831 - 831);
                jDKPh4pgMkcm <= GBQlPeHV4S -(908 - 907); jDKPh4pgMkcm++)
                    my0lNjeZthC[nDacdLne][jDKPh4pgMkcm] -= xcFu0xd;
            }
            for (int jDKPh4pgMkcm = (899 - 899);
            jDKPh4pgMkcm <= GBQlPeHV4S -(953 - 952); jDKPh4pgMkcm++) {
                int chD7Kys2E = my0lNjeZthC[(793 - 793)][jDKPh4pgMkcm];
                for (int nDacdLne = (522 - 521);
                nDacdLne <= GBQlPeHV4S -(141 - 140); nDacdLne++) {
                    if (chD7Kys2E > my0lNjeZthC[nDacdLne][jDKPh4pgMkcm])
                        chD7Kys2E = my0lNjeZthC[nDacdLne][jDKPh4pgMkcm];
                }
                for (int nDacdLne = (330 - 330);
                nDacdLne <= GBQlPeHV4S -(391 - 390); nDacdLne++)
                    my0lNjeZthC[nDacdLne][jDKPh4pgMkcm] -= chD7Kys2E;
            }
            y3UMuLfy7 += my0lNjeZthC[(185 - 184)][(345 - 344)];
            for (int nDacdLne = (381 - 379);
            nDacdLne <= GBQlPeHV4S -(425 - 424); nDacdLne++)
                my0lNjeZthC[nDacdLne - (504 - 503)][(296 - 296)] = my0lNjeZthC[nDacdLne][(762 - 762)];
            for (int jDKPh4pgMkcm = (133 - 131);
            jDKPh4pgMkcm <= GBQlPeHV4S -(727 - 726); jDKPh4pgMkcm++)
                my0lNjeZthC[(170 - 170)][jDKPh4pgMkcm - (545 - 544)] = my0lNjeZthC[(13 - 13)][jDKPh4pgMkcm];
            for (int nDacdLne = (980 - 978);
            nDacdLne <= GBQlPeHV4S -(650 - 649); nDacdLne++) {
                for (int jDKPh4pgMkcm = 2;
                jDKPh4pgMkcm <= GBQlPeHV4S -(863 - 862); jDKPh4pgMkcm++)
                    my0lNjeZthC[nDacdLne - 1][jDKPh4pgMkcm - 1] = my0lNjeZthC[nDacdLne][jDKPh4pgMkcm];
            }
        }
        cout << y3UMuLfy7 << endl;
    }
    cin.get ();
    cin.get ();
    return 0;
}

