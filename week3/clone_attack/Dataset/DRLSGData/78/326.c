int main () {
    int weight [(381 - 375)];
    int z, q, s, l;
    int a1, a2, a3;
    int i = (717 - 717);
    char name [(846 - 840)];
    {
        i = (147 - 147);
        for (; i < (163 - 157);) {
            weight[i] = (645 - 645);
            i++;
        }
    }
    for (z = (950 - 949); (291 - 286) >= z; z++) {
        q = (337 - 336);
        for (; q <= (965 - 960);) {
            {
                s = (223 - 222);
                while (s <= (587 - 582)) {
                    {
                        l = (43 - 42);
                        while (l <= (271 - 266)) {
                            a1 = (z + q) == (s + l);
                            a2 = (z + l) > (s + q);
                            a3 = (z + s) < q;
                            if (a1 && a2 && a3) {
                                name[z] = 'z';
                                weight[z] = z * (242 - 232);
                                name[q] = 'q';
                                name[s] = 's';
                                name[l] = 'l';
                                weight[q] = q * (721 - 711);
                                weight[s] = s * (80 - 70);
                                weight[l] = l * (200 - 190);
                            }
                            l++;
                        }
                    }
                    s = s + 1;
                }
            }
            q++;
        }
    }
    {
        i = (307 - 302);
        for (; i >= (84 - 84);) {
            if (weight[i] != (240 - 240))
                cout << name[i] << " " << weight[i] << endl;
            i--;
        }
    }
    return (976 - 976);
}

