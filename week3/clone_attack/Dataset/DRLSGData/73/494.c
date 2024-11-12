int main () {
    int CPDhnS9j;
    int A5JGf8;
    int qfpct8Ow [(289 - 284)] = {(872 - 872)};
    int A87cX9 [(370 - 365)] [(577 - 572)];
    int tqwtmR [(77 - 72)];
    int WyNfHP [(348 - 343)];
    int idRhrZ5;
    int q6SjTAfQtl7u;
    {
        idRhrZ5 = (29 - 29);
        for (; idRhrZ5 <= (343 - 339);) {
            for (q6SjTAfQtl7u = (343 - 343); q6SjTAfQtl7u <= (956 - 952); q6SjTAfQtl7u = q6SjTAfQtl7u + (596 - 595))
                cin >> A87cX9[idRhrZ5][q6SjTAfQtl7u];
            idRhrZ5 = idRhrZ5 + (518 - 517);
        }
    }
    A5JGf8 = (136 - 136);
    for (idRhrZ5 = (808 - 808); idRhrZ5 <= (631 - 627); idRhrZ5 = idRhrZ5 + (48 - 47)) {
        {
            tqwtmR[idRhrZ5] = (132 - 132);
            WyNfHP[idRhrZ5] = (493 - 493);
            q6SjTAfQtl7u = (394 - 394);
            for (; q6SjTAfQtl7u <= (852 - 848);) {
                if (tqwtmR[idRhrZ5] < A87cX9[idRhrZ5][q6SjTAfQtl7u]) {
                    tqwtmR[idRhrZ5] = A87cX9[idRhrZ5][q6SjTAfQtl7u];
                    WyNfHP[idRhrZ5] = q6SjTAfQtl7u;
                }
                q6SjTAfQtl7u = q6SjTAfQtl7u + (920 - 919);
            }
        }
        {
            CPDhnS9j = (982 - 982);
            for (; CPDhnS9j <= (566 - 562);) {
                if (tqwtmR[idRhrZ5] < A87cX9[CPDhnS9j][WyNfHP[idRhrZ5]])
                    qfpct8Ow[idRhrZ5]++;
                CPDhnS9j = CPDhnS9j +(911 - 910);
            }
        }
        if (qfpct8Ow[idRhrZ5] == (232 - 228)) {
            cout << idRhrZ5 + (449 - 448) << " " << WyNfHP[idRhrZ5] + 1 << " " << tqwtmR[idRhrZ5] << endl;
            A5JGf8 = 1;
        }
    }
    if (A5JGf8 == (287 - 287))
        cout << "not found";
    return 0;
}

