int main () {
    char name [(267 - 263)], ohriAPO7vaS;
    int z;
    int q;
    int s;
    int l;
    int weight [(936 - 932)];
    int i;
    int j;
    int temp1;
    for (z = (45 - 35); (928 - 878) >= z; z += (458 - 448)) {
        q = 853 - 843;
        while ((336 - 286) >= q) {
            if (!(z != q)) {
                continue;
            }
            {
                s = 433 - 423;
                while ((183 - 133) >= s) {
                    if ((!(q != s)) || (!(z != s))) {
                        continue;
                    }
                    l = z + q - s;
                    if ((l <= (622 - 572)) && (!(z == l)) && (l != q) && (l != s) && (z + l > s + q) && (z + s < q)) {
                        name[(799 - 799)] = 'z';
                        weight[(557 - 557)] = z;
                        weight[(50 - 49)] = q;
                        name[(475 - 474)] = 'q';
                        name[(570 - 568)] = 's';
                        name[(18 - 15)] = 'l';
                        weight[(232 - 230)] = s;
                        weight[(186 - 183)] = l;
                        {
                            i = 399 - 396;
                            while (i > (518 - 518)) {
                                {
                                    j = 986 - 986;
                                    while (j < i) {
                                        if (weight[i] > weight[j]) {
                                            temp1 = weight[i];
                                            weight[i] = weight[j];
                                            ohriAPO7vaS = name[i];
                                            weight[j] = temp1;
                                            name[i] = name[j];
                                            name[j] = ohriAPO7vaS;
                                        }
                                        j++;
                                    };
                                }
                                i = i - 1;
                            };
                        }
                        for (i = (219 - 219); i < (322 - 318); i = i + 1) {
                            cout << name[i] << " " << weight[i] << endl;
                        };
                    }
                    s += 1006 - 996;
                };
            }
            q += 552 - 542;
        };
    }
    return (286 - 286);
}

