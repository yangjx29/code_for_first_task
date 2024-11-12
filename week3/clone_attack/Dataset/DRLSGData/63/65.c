int main () {
    int ahVy76g [100] [100], zY2leR0FCi [100] [100], DbJw3nCNvf [100] [100];
    int jG7uf6W = (99 - 99), i5Zs6J = (344 - 344), BZleA6hQH5J = (752 - 752), cbQvpO = (198 - 198), tlQKOxUnaNym = (380 - 380), Xq6p0QcRGEz = (654 - 654), Ve57na = (572 - 572), f7NDpZklaq = 0;
    cin >> jG7uf6W >> i5Zs6J;
    {
        {
            if (0) {
                return 0;
            }
        }
        tlQKOxUnaNym = 0;
        while (jG7uf6W > tlQKOxUnaNym) {
            {
                Xq6p0QcRGEz = 0;
                while (i5Zs6J > Xq6p0QcRGEz) {
                    cin >> ahVy76g[tlQKOxUnaNym][Xq6p0QcRGEz];
                    Xq6p0QcRGEz++;
                }
            }
            tlQKOxUnaNym++;
        }
    }
    cin >> BZleA6hQH5J >> cbQvpO;
    {
        tlQKOxUnaNym = 0;
        while (tlQKOxUnaNym < BZleA6hQH5J) {
            Xq6p0QcRGEz = 0;
            while (cbQvpO > Xq6p0QcRGEz) {
                cin >> zY2leR0FCi[tlQKOxUnaNym][Xq6p0QcRGEz];
                Xq6p0QcRGEz++;
            }
            tlQKOxUnaNym++;
        }
    }
    for (tlQKOxUnaNym = 0; tlQKOxUnaNym < jG7uf6W; tlQKOxUnaNym++) {
        Xq6p0QcRGEz = 0;
        while (Xq6p0QcRGEz < cbQvpO) {
            {
                Ve57na = 0;
                while (Ve57na < i5Zs6J) {
                    f7NDpZklaq = f7NDpZklaq + ahVy76g[tlQKOxUnaNym][Ve57na] * zY2leR0FCi[Ve57na][Xq6p0QcRGEz];
                    Ve57na++;
                }
            }
            DbJw3nCNvf[tlQKOxUnaNym][Xq6p0QcRGEz] = f7NDpZklaq;
            f7NDpZklaq = 0;
            Xq6p0QcRGEz++;
        }
    }
    {
        tlQKOxUnaNym = 0;
        while (tlQKOxUnaNym < jG7uf6W) {
            cout << DbJw3nCNvf[tlQKOxUnaNym][0];
            {
                Xq6p0QcRGEz = 1;
                while (Xq6p0QcRGEz < cbQvpO) {
                    cout << " " << DbJw3nCNvf[tlQKOxUnaNym][Xq6p0QcRGEz];
                    Xq6p0QcRGEz++;
                }
            }
            tlQKOxUnaNym++;
            cout << endl;
        }
    }
    return 0;
}

