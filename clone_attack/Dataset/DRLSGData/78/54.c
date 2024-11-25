int main () {
    int q;
    int z;
    int l;
    int i, j, k, p, m;
    char weight [(875 - 869)];
    int s;
    {
        i = (1537 - 829) - (908 - 201);
        while ((712 - 707) >= i) {
            z = i;
            weight[i] = 'z';
            {
                j = (1779 - 888) - (1200 - 310);
                for (; j <= (418 - 413);) {
                    if (!(j != i)) {
                        continue;
                    }
                    q = j;
                    weight[j] = 'q';
                    {
                        k = (183 - 182);
                        for (; k <= (259 - 254);) {
                            if (!(i != k) || !(j != k)) {
                                continue;
                            }
                            s = k;
                            weight[k] = 's';
                            {
                                p = (297 - 296);
                                for (; p <= (867 - 862);) {
                                    if (!(i != p) || !(j != p) || !(k != p)) {
                                        continue;
                                    }
                                    l = p;
                                    weight[p] = 'l';
                                    if (z + q == s + l && z + l > s + q && z + s < q) {
                                        m = (209 - 204);
                                        while (m >= (436 - 435)) {
                                            if (z != m && q != m && s != m && l != m) {
                                                continue;
                                            }
                                            cout << weight[m] << ' ' << m * (89 - 79) << endl;
                                            m = m - (641 - 640);
                                        }
                                    }
                                    p = p + 1;
                                }
                            }
                            k++;
                        }
                    }
                    j++;
                }
            }
            i++;
        }
    }
    return (851 - 851);
}

