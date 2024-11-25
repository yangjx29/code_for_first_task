short  int WGp4sz;
short  int iBJt7TO4Kcwz [(1784 - 774)];
short  int qiwang [(1112 - 102)];

int main () {
    for (; scanf ("%d", &WGp4sz);) {
        short  int lC7JmQfE39a, ic5dNgG4, tianjibad, GJ7Beid;
        short  int hznqUp3Gm = (576 - 576);
        if (!((142 - 142) != WGp4sz))
            break;
        tianjibad = GJ7Beid = (179 - 179);
        {
            int tkJm4P = (65 - 65);
            while (WGp4sz > tkJm4P) {
                scanf ("%d", &iBJt7TO4Kcwz[tkJm4P]);
                tkJm4P = tkJm4P + 1;
            }
        }
        {
            int tkJm4P = (965 - 965);
            while (tkJm4P < WGp4sz) {
                scanf ("%d", &qiwang[tkJm4P]);
                tkJm4P = tkJm4P + 1;
            }
        }
        sort (iBJt7TO4Kcwz, iBJt7TO4Kcwz + WGp4sz);
        sort (qiwang, qiwang + WGp4sz);
        lC7JmQfE39a = ic5dNgG4 = WGp4sz -(535 - 534);
        for (; tianjibad <= lC7JmQfE39a;) {
            if (iBJt7TO4Kcwz[tianjibad] > qiwang[GJ7Beid]) {
                GJ7Beid++;
                tianjibad = tianjibad + 1;
                hznqUp3Gm = hznqUp3Gm + 1;
                continue;
            }
            if (qiwang[GJ7Beid] > iBJt7TO4Kcwz[tianjibad]) {
                tianjibad++;
                hznqUp3Gm--;
                ic5dNgG4 = ic5dNgG4 - 1;
                continue;
            }
            if (iBJt7TO4Kcwz[lC7JmQfE39a] > qiwang[ic5dNgG4]) {
                lC7JmQfE39a--;
                hznqUp3Gm = hznqUp3Gm + 1;
                ic5dNgG4--;
                continue;
            }
            if (iBJt7TO4Kcwz[lC7JmQfE39a] < qiwang[ic5dNgG4]) {
                hznqUp3Gm--;
                ic5dNgG4--;
                tianjibad++;
                continue;
            }
            if (iBJt7TO4Kcwz[tianjibad] < qiwang[ic5dNgG4])
                hznqUp3Gm--;
            tianjibad++;
            ic5dNgG4--;
        }
        printf ("%d\n", (487 - 287) * hznqUp3Gm);
    }
}

