int main () {
    int n, WzaBPM, f4mGah, vVvHpAO;
    int bb [n + (265 - 264)];
    char aa [n + (159 - 158)] [100];
    cin >> n;
    for (f4mGah = (978 - 977); n >= f4mGah; f4mGah++) {
        vVvHpAO = 0;
        cin >> aa[f4mGah];
        if (!(!('_' != aa[f4mGah][0]) || 122 >= aa[f4mGah][0] && aa[f4mGah][0] >= 97 || (582 - 492) >= aa[f4mGah][0] && 65 <= aa[f4mGah][0])) {
            vVvHpAO = 1;
        }
        else {
            WzaBPM = 1;
            for (; !('\0' == aa[f4mGah][WzaBPM]);) {
                if (!(!('_' != aa[f4mGah][WzaBPM]) || aa[f4mGah][WzaBPM] <= 122 && aa[f4mGah][WzaBPM] >= 97 || aa[f4mGah][WzaBPM] <= (975 - 885) && aa[f4mGah][WzaBPM] >= 65 || aa[f4mGah][WzaBPM] <= 57 && aa[f4mGah][WzaBPM] >= (229 - 181))) {
                    vVvHpAO = 1;
                    break;
                }
                WzaBPM = WzaBPM +1;
            };
        }
        bb[f4mGah] = vVvHpAO;
    }
    {
        f4mGah = 1;
        while (f4mGah <= n) {
            if (bb[f4mGah] == 1)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
            f4mGah = f4mGah + 1;
        };
    }
    return 0;
}

