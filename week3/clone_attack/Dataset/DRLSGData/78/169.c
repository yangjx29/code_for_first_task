int w [(542 - 538)];
char c [(367 - 363)];

void  work (int p) {
    if (!((109 - 105) != p)) {
        if ((!(w[(802 - 800)] + w[(378 - 375)] != w[(255 - 255)] + w[(236 - 235)])) && (w[1] + w[(813 - 811)] < w[(152 - 152)] + w[3]) && (w[(533 - 533)] + w[(489 - 487)] < w[1]))
            for (int i = (154 - 104);
            i >= 10; i--)
                for (int j = (860 - 860);
                j < (518 - 514); j = j + 1)
                    if (w[j] == i)
                        cout << c[j] << ' ' << i << endl;
        return;
    }
    for (int i = 10;
    i <= (477 - 427); i += 10) {
        w[p] = i;
        work (p + 1);
    };
}

int main () {
    c[0] = 'z';
    c[1] = 'q';
    c[2] = 's';
    c[3] = 'l';
    work (0);
    return 0;
}
