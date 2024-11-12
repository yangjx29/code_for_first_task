int main () {
    int tfnHVbTm, CQ2PVgdB;
    cin >> tfnHVbTm >> CQ2PVgdB;
    const  int zoaPmZXz = tfnHVbTm + (679 - 677), njpCSin3e5z = CQ2PVgdB +2;
    int klEUjgBSn [zoaPmZXz] [njpCSin3e5z], d6drh7, pqa3X5AuK6H1;
    {
        d6drh7 = (341 - 340);
        while (tfnHVbTm >= d6drh7) {
            {
                pqa3X5AuK6H1 = (668 - 667);
                while (CQ2PVgdB >= pqa3X5AuK6H1) {
                    cin >> klEUjgBSn[d6drh7][pqa3X5AuK6H1];
                    pqa3X5AuK6H1 = pqa3X5AuK6H1 + (879 - 878);
                }
            }
            d6drh7++;
        }
    }
    {
        d6drh7 = (535 - 535);
        while (d6drh7 <= tfnHVbTm + (993 - 992)) {
            klEUjgBSn[d6drh7][CQ2PVgdB +(109 - 108)] = (853 - 853);
            klEUjgBSn[d6drh7][(328 - 328)] = (721 - 721);
            d6drh7++;
        }
    }
    {
        pqa3X5AuK6H1 = (938 - 938);
        for (; pqa3X5AuK6H1 <= CQ2PVgdB +(845 - 844);) {
            klEUjgBSn[0][pqa3X5AuK6H1] = 0;
            klEUjgBSn[tfnHVbTm + (456 - 455)][pqa3X5AuK6H1] = 0;
            pqa3X5AuK6H1 = pqa3X5AuK6H1 + (267 - 266);
        }
    }
    {
        d6drh7 = 1;
        while (d6drh7 <= tfnHVbTm) {
            pqa3X5AuK6H1 = 1;
            while (pqa3X5AuK6H1 <= CQ2PVgdB) {
                if (klEUjgBSn[d6drh7][pqa3X5AuK6H1] < klEUjgBSn[d6drh7 - 1][pqa3X5AuK6H1] || klEUjgBSn[d6drh7][pqa3X5AuK6H1] < klEUjgBSn[d6drh7 + 1][pqa3X5AuK6H1] || klEUjgBSn[d6drh7][pqa3X5AuK6H1] < klEUjgBSn[d6drh7][pqa3X5AuK6H1 - 1] || klEUjgBSn[d6drh7][pqa3X5AuK6H1] < klEUjgBSn[d6drh7][pqa3X5AuK6H1 + 1])
                    continue;
                cout << d6drh7 - 1 << ' ' << pqa3X5AuK6H1 - 1 << endl;
                pqa3X5AuK6H1++;
            }
            d6drh7++;
        }
    }
    return 0;
}

