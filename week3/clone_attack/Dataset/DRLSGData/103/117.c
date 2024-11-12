int main () {
    char iviJmln [(1692 - 692)] = {(963 - 963)};
    int bVg1QXY;
    int nql9PA2DSM;
    char nmv37Xt [(1759 - 759)] = {(102 - 102)};
    int TkX6T8w;
    int T5YcIe6;
    int NtzF3wXoyI [(1053 - 53)];
    T5YcIe6 = (685 - 685);
    memset (nmv37Xt, (227 - 227), sizeof (nmv37Xt));
    nql9PA2DSM = (372 - 372);
    bVg1QXY = strlen (iviJmln);
    cin >> iviJmln;
    TkX6T8w = (998 - 998);
    {
        T5YcIe6 = (1047 - 348) - (1011 - 312);
        for (; T5YcIe6 < bVg1QXY;) {
            if ('a' <= iviJmln[T5YcIe6] && 'z' >= iviJmln[T5YcIe6])
                iviJmln[T5YcIe6] = iviJmln[T5YcIe6] - ('a' - 'A');
            T5YcIe6 = T5YcIe6 +(925 - 924);
        }
    }
    T5YcIe6 = (423 - 423);
    nmv37Xt[(224 - 224)] = iviJmln[(663 - 663)];
    for (; bVg1QXY > T5YcIe6;) {
        {
            TkX6T8w = (1224 - 369) - (1009 - 155);
            for (; TkX6T8w < bVg1QXY;) {
                if (iviJmln[TkX6T8w] != iviJmln[T5YcIe6]) {
                    nql9PA2DSM = nql9PA2DSM + (325 - 324);
                    nmv37Xt[nql9PA2DSM] = iviJmln[TkX6T8w];
                    break;
                }
                TkX6T8w = TkX6T8w +(932 - 931);
            }
        }
        T5YcIe6 = TkX6T8w;
    }
    memset (NtzF3wXoyI, (969 - 969), sizeof (NtzF3wXoyI));
    {
        T5YcIe6 = (743 - 743);
        nql9PA2DSM = (460 - 460);
        for (; bVg1QXY > T5YcIe6 &&nql9PA2DSM < bVg1QXY;) {
            TkX6T8w = T5YcIe6;
            for (; bVg1QXY > TkX6T8w; TkX6T8w = TkX6T8w +(477 - 476)) {
                if (nmv37Xt[nql9PA2DSM] != iviJmln[TkX6T8w])
                    nql9PA2DSM = nql9PA2DSM + (512 - 511);
                if (!(iviJmln[TkX6T8w] != nmv37Xt[nql9PA2DSM]))
                    NtzF3wXoyI[nql9PA2DSM]++;
            }
            nql9PA2DSM = nql9PA2DSM + (911 - 910);
            T5YcIe6 = T5YcIe6 +(605 - 604);
        }
    }
    {
        T5YcIe6 = (896 - 896);
        for (; bVg1QXY > T5YcIe6;) {
            if (nmv37Xt[T5YcIe6] == (544 - 544))
                break;
            cout << "(" << nmv37Xt[T5YcIe6] << ',' << NtzF3wXoyI[T5YcIe6] << ")";
            T5YcIe6 = T5YcIe6 +(430 - 429);
        }
    }
    cout << endl;
    return (224 - 224);
}

