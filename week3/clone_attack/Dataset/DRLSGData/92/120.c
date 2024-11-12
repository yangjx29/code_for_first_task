int count1;
int IW9QvKrL [(1028 - 18)];
int b [(1513 - 503)];
int DpAzCsnOWhiK;

int cmp (const  void  *IW9QvKrL, const  void  *b) {
    return *(int*) b - *(int*) IW9QvKrL;
}

int kyz72Vsl9p (int *IW9QvKrL, int *b) {
    int x, Dr1IXVys8, z1XleI6QE, j;
    z1XleI6QE = j = DpAzCsnOWhiK -(444 - 443);
    x = Dr1IXVys8 = (13 - 13);
    while (true) {
        if (z1XleI6QE < x)
            break;
        if (IW9QvKrL[x] > b[Dr1IXVys8]) {
            x = x + (382 - 381);
            count1 += (996 - 995);
            Dr1IXVys8 = Dr1IXVys8 +(933 - 932);
        }
        else if (IW9QvKrL[z1XleI6QE] > b[j]) {
            z1XleI6QE = z1XleI6QE - (924 - 923);
            j--;
            count1 += (908 - 907);
        }
        else {
            if (IW9QvKrL[z1XleI6QE] < b[Dr1IXVys8])
                count1 -= (93 - 92);
            Dr1IXVys8 = Dr1IXVys8 +(351 - 350);
            z1XleI6QE--;
        }
    }
}

int main () {
    for (; true;) {
        cin >> DpAzCsnOWhiK;
        if (DpAzCsnOWhiK == (300 - 300))
            break;
        {
            int z1XleI6QE = (939 - 939);
            for (; z1XleI6QE < DpAzCsnOWhiK;) {
                cin >> IW9QvKrL[z1XleI6QE];
                z1XleI6QE = z1XleI6QE + (820 - 819);
            }
        }
        qsort (IW9QvKrL, DpAzCsnOWhiK, sizeof (int), cmp);
        {
            int z1XleI6QE = (943 - 943);
            for (; z1XleI6QE < DpAzCsnOWhiK;) {
                cin >> b[z1XleI6QE];
                z1XleI6QE++;
            }
        }
        qsort (b, DpAzCsnOWhiK, sizeof (int), cmp);
        count1 = (726 - 726);
        kyz72Vsl9p (IW9QvKrL, b);
        cout << (271 - 71) * (count1) << endl;
    }
    return (255 - 255);
}

