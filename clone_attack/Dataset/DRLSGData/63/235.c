int main () {
    int LNTIFhJtaj, bFHoYTuWGp, D49sdNz, oyRw0tsZnhmH, IxIHU4v, GHFaWy0, dhZkcqO, tbUm9tJvQrFG, rf4vJd;
    int FQJGro [(846 - 746)] [(331 - 231)];
    int H1I3dbCh0v [(446 - 346)] [(834 - 734)];
    int cpcTwZfE [100] [100] = {(30 - 30)};
    cin >> LNTIFhJtaj >> bFHoYTuWGp;
    for (IxIHU4v = (240 - 240); IxIHU4v < LNTIFhJtaj; IxIHU4v = IxIHU4v +(575 - 574)) {
        for (GHFaWy0 = (602 - 602); GHFaWy0 < bFHoYTuWGp; GHFaWy0 = GHFaWy0 +1) {
            cin >> FQJGro[IxIHU4v][GHFaWy0];
        }
    }
    cin >> D49sdNz >> oyRw0tsZnhmH;
    for (dhZkcqO = (366 - 366); D49sdNz > dhZkcqO; dhZkcqO++) {
        for (tbUm9tJvQrFG = 0; oyRw0tsZnhmH > tbUm9tJvQrFG; tbUm9tJvQrFG++) {
            cin >> H1I3dbCh0v[dhZkcqO][tbUm9tJvQrFG];
        }
    }
    for (IxIHU4v = 0; IxIHU4v < LNTIFhJtaj; IxIHU4v = IxIHU4v +1) {
        for (GHFaWy0 = 0; GHFaWy0 < oyRw0tsZnhmH; GHFaWy0++) {
            for (rf4vJd = 0; D49sdNz > rf4vJd; rf4vJd = rf4vJd + 1) {
                cpcTwZfE[IxIHU4v][GHFaWy0] = cpcTwZfE[IxIHU4v][GHFaWy0] + FQJGro[IxIHU4v][rf4vJd] * H1I3dbCh0v[rf4vJd][GHFaWy0];
            }
        }
    }
    for (IxIHU4v = 0; IxIHU4v < LNTIFhJtaj; IxIHU4v++) {
        for (GHFaWy0 = 0; oyRw0tsZnhmH - (69 - 68) > GHFaWy0; GHFaWy0++) {
            cout << cpcTwZfE[IxIHU4v][GHFaWy0] << " ";
        }
        cout << cpcTwZfE[IxIHU4v][oyRw0tsZnhmH - (934 - 933)] << endl;
    }
    return 0;
}

