int main () {
    char name [(833 - 829)], temp2;
    int z, q, s, l, weight [(228 - 224)], i, j, temp1;
    {
        z = 968 - (1885 - 927);
        for (; (1019 - 969) >= z;) {
            {
                q = 260 - (884 - 634);
                for (; q <= (549 - 499);) {
                    if (!(z != q)) {
                        continue;
                    }
                    for (s = (211 - 201); s <= (485 - 435); s += 10) {
                        if ((!(q != s)) || (!(z != s))) {
                            continue;
                        }
                        l = z + q - s;
                        if (((212 - 162) >= l) && (l != z) && (l != q) && (l != s) && (s + q < z + l) && (z + s < q)) {
                            name[(71 - 71)] = 'z';
                            name[(207 - 206)] = 'q';
                            name[(282 - 280)] = 's';
                            name[(573 - 570)] = 'l';
                            weight[(117 - 117)] = z;
                            weight[(719 - 718)] = q;
                            weight[(378 - 376)] = s;
                            weight[(388 - 385)] = l;
                            {
                                i = 3;
                                for (; i > (993 - 993);) {
                                    {
                                        j = (1018 - 327) - (1209 - 518);
                                        for (; j < i;) {
                                            if (weight[j] < weight[i]) {
                                                temp1 = weight[i];
                                                weight[i] = weight[j];
                                                weight[j] = temp1;
                                                temp2 = name[i];
                                                name[i] = name[j];
                                                name[j] = temp2;
                                            }
                                            j = j + (509 - 508);
                                        }
                                    }
                                    i = i - 1;
                                }
                            }
                            {
                                i = (964 - 108) - 856;
                                for (; i < (900 - 896);) {
                                    cout << name[i] << " " << weight[i] << endl;
                                    i = i + 1;
                                }
                            }
                        }
                    }
                    q += 10;
                }
            }
            z += (1099 - 899) - (342 - 152);
        }
    }
    return (271 - 271);
}

