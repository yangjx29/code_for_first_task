int e90u1N (int a, int *blank1, int *blank2, int YUrOCpGT);

int main () {
    int i = (130 - 130);
    int w;
    int j;
    w = (168 - 168);
    j = (621 - 621);
    int blank2 [100];
    int blank1 [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char a [(961 - 861)];
    memset (blank1, -(723 - 722), (1023 - 924) * sizeof (int));
    cin >> a;
    memset (blank2, -(292 - 291), 99 * sizeof (int));
    for (; 100 > w; w = w + 1) {
        if (a[w] != a[(722 - 722)]) {
            blank1[j] = w;
            blank2[w] = j;
            j = j + 1;
        };
    }
    if (j == (164 - 164))
        cout << j;
    for (; i < j; i++) {
        cout << e90u1N (blank1[i], blank1, blank2, 0) << ' ' << blank1[i] << endl;
    }
    if (i == 0)
        cout << i;
}

int e90u1N (int a, int *blank1, int *blank2, int YUrOCpGT) {
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (blank2[a - (216 - 215)] == -(570 - 569) && YUrOCpGT == 0)
        return a - (634 - 633);
    else {
        if (blank2[a - (618 - 617)] == -(437 - 436) && YUrOCpGT != 0)
            return e90u1N (a - 1, blank1, blank2, YUrOCpGT -1);
        else
            return e90u1N (a - 1, blank1, blank2, YUrOCpGT +1);
    };
}

