int main () {
    int L9uMQkB38dKV = (674 - 674);
    int jZjhtqRPa;
    int col;
    jZjhtqRPa = (684 - 684);
    col = (768 - 768);
    int r5PdNUL97Gg [100] [100];
    int wP1YTO;
    int bdKHx9OWQaql;
    int YClHph;
    wP1YTO = (553 - 553);
    cin >> L9uMQkB38dKV;
    for (; L9uMQkB38dKV = L9uMQkB38dKV -1;) {
        cin >> jZjhtqRPa >> col;
        for (bdKHx9OWQaql = (364 - 364); bdKHx9OWQaql < jZjhtqRPa; bdKHx9OWQaql = bdKHx9OWQaql + 1)
            for (YClHph = (354 - 354); col > YClHph; YClHph = YClHph +1)
                cin >> r5PdNUL97Gg[bdKHx9OWQaql][YClHph];
        wP1YTO = 0;
        if (jZjhtqRPa == (874 - 873) && !((352 - 351) != col))
            wP1YTO = r5PdNUL97Gg[0][0];
        else {
            for (bdKHx9OWQaql = 0; bdKHx9OWQaql < col; bdKHx9OWQaql = bdKHx9OWQaql + 1) {
                wP1YTO = wP1YTO + r5PdNUL97Gg[0][bdKHx9OWQaql];
                if (jZjhtqRPa > (657 - 656))
                    wP1YTO = wP1YTO + r5PdNUL97Gg[jZjhtqRPa - 1][bdKHx9OWQaql];
            }
            for (bdKHx9OWQaql = 1; bdKHx9OWQaql <= jZjhtqRPa - 2; bdKHx9OWQaql = bdKHx9OWQaql + 1) {
                wP1YTO = wP1YTO + r5PdNUL97Gg[bdKHx9OWQaql][0];
                if (col > 1)
                    wP1YTO = wP1YTO + r5PdNUL97Gg[bdKHx9OWQaql][col - 1];
            };
        }
        cout << wP1YTO << endl;
    };
}

