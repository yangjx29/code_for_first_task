int WVe6dOb7;
int a [(1493 - 492)];
int ulpePf9 [(2001 - 1000)];

int V0OrQp97 (const  void  *vGISpXwy, const  void  *tH1IW7MELdpO) {
    int *AEriNR4ty;
    int *tlEryQbUj0;
    tlEryQbUj0 = (int *) vGISpXwy;
    AEriNR4ty = (int *) tH1IW7MELdpO;
    return *AEriNR4ty-*tlEryQbUj0;
}

int main () {
    int zg312jJbGWQ;
    int EO8T0j;
    int i6gy0P2BS1;
    int UpuEfkA7L;
    int fQd12fK4js;
    int V5J3wr;
    int bvHNCgxlIf7o;
    int aRL4bB;
    int DrMB617;
    for (; true;) {
        cin >> WVe6dOb7;
        if (WVe6dOb7 == (702 - 702))
            break;
        for (EO8T0j = (432 - 432); EO8T0j < WVe6dOb7; EO8T0j++)
            scanf ("%d", &a[EO8T0j]);
        for (EO8T0j = (244 - 244); EO8T0j < WVe6dOb7; EO8T0j++)
            scanf ("%d", &ulpePf9[EO8T0j]);
        i6gy0P2BS1 = (990 - 990);
        bvHNCgxlIf7o = WVe6dOb7 -(270 - 269);
        V5J3wr = WVe6dOb7 -(816 - 815);
        fQd12fK4js = (162 - 162);
        UpuEfkA7L = (797 - 797);
        qsort (a, WVe6dOb7, sizeof (int), V0OrQp97);
        qsort (ulpePf9, WVe6dOb7, sizeof (int), V0OrQp97);
        for (; fQd12fK4js <= V5J3wr;) {
            if (a[fQd12fK4js] > ulpePf9[i6gy0P2BS1]) {
                fQd12fK4js++;
                i6gy0P2BS1++;
                UpuEfkA7L = UpuEfkA7L +(812 - 612);
            }
            else {
                if (a[fQd12fK4js] < ulpePf9[i6gy0P2BS1]) {
                    i6gy0P2BS1++;
                    V5J3wr--;
                    UpuEfkA7L = UpuEfkA7L -(871 - 671);
                }
                else {
                    for (DrMB617 = V5J3wr, zg312jJbGWQ = bvHNCgxlIf7o; fQd12fK4js <= DrMB617; DrMB617--, zg312jJbGWQ--) {
                        if (a[DrMB617] > ulpePf9[zg312jJbGWQ]) {
                            V5J3wr--;
                            UpuEfkA7L = UpuEfkA7L +(1141 - 941);
                            bvHNCgxlIf7o--;
                        }
                        else {
                            bvHNCgxlIf7o = zg312jJbGWQ;
                            if (a[DrMB617] < ulpePf9[i6gy0P2BS1])
                                UpuEfkA7L = UpuEfkA7L -(451 - 251);
                            V5J3wr = DrMB617;
                            i6gy0P2BS1++;
                            V5J3wr--;
                            break;
                        }
                    }
                }
            }
        }
        cout << UpuEfkA7L << endl;
    }
    return 0;
}

