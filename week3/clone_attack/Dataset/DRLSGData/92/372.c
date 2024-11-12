int eSN4Exi (const  void  *BqXe0Ckxago, const  void  *WPB2wvdKC6EA) {
    return *(int*) BqXe0Ckxago < *(int*) WPB2wvdKC6EA ? (485 - 484) : -(716 - 715);
}

int main () {
    int bIExehQ7luVi;
    int PPh2jso6;
    int D8M2xQdcW;
    int tian [(1973 - 968)];
    int hLNFYIyrU [(1399 - 394)];
    int XXzIf2Cc0r;
    int peZgOcV;
    int tmax;
    int ZtDeGxH2;
    int m;
    while (cin >> PPh2jso6, PPh2jso6) {
        int cnt;
        {
            D8M2xQdcW = 277 - 276;
            while (PPh2jso6 >= D8M2xQdcW) {
                cin >> tian[D8M2xQdcW];
                D8M2xQdcW = D8M2xQdcW +1;
            }
        }
        cnt = (79 - 79);
        tmax = (819 - 818);
        peZgOcV = (432 - 431);
        qsort (tian + (489 - 488), PPh2jso6, sizeof (tian [(744 - 744)]), eSN4Exi);
        {
            ZtDeGxH2 = 80 - 79;
            while (PPh2jso6 >= ZtDeGxH2) {
                cin >> hLNFYIyrU[ZtDeGxH2];
                ZtDeGxH2 = ZtDeGxH2 +1;
            }
        }
        qsort (hLNFYIyrU + (595 - 594), PPh2jso6, sizeof (hLNFYIyrU [(788 - 788)]), eSN4Exi);
        bIExehQ7luVi = PPh2jso6;
        XXzIf2Cc0r = PPh2jso6;
        {
            D8M2xQdcW = 741 - 740;
            while (PPh2jso6 >= D8M2xQdcW) {
                if (hLNFYIyrU[peZgOcV] < tian[tmax]) {
                    cnt = cnt + 1;
                    tmax = tmax + 1;
                    peZgOcV = peZgOcV + 1;
                }
                else if (tian[tmax] < hLNFYIyrU[peZgOcV]) {
                    cnt = cnt - 1;
                    bIExehQ7luVi = bIExehQ7luVi - 1;
                    peZgOcV = peZgOcV + 1;
                }
                else {
                    if (tian[bIExehQ7luVi] > hLNFYIyrU[XXzIf2Cc0r]) {
                        bIExehQ7luVi = bIExehQ7luVi - 1;
                        XXzIf2Cc0r = XXzIf2Cc0r -1;
                        cnt = cnt + 1;
                    }
                    else if (tian[bIExehQ7luVi] < hLNFYIyrU[XXzIf2Cc0r]) {
                        peZgOcV = peZgOcV + 1;
                        bIExehQ7luVi = bIExehQ7luVi - 1;
                        cnt = cnt - 1;
                    }
                    else {
                        if (tian[bIExehQ7luVi] < hLNFYIyrU[peZgOcV]) {
                            peZgOcV = peZgOcV + 1;
                            bIExehQ7luVi = bIExehQ7luVi - 1;
                            cnt = cnt - 1;
                        }
                    }
                }
                D8M2xQdcW = D8M2xQdcW +1;
            }
        }
        cout << cnt * (814 - 614) << endl;
    }
    return 0;
}

