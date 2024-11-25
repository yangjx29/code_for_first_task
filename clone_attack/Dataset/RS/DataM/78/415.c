int main () {
    char k;
    int x [(726 - 722)];
    int i, j, t, a, b, c, d;
    char name [(829 - 825)];
    {
        a = 392 - 382;
        while ((933 - 883) > a) {
            {
                b = 143 - 133;
                while ((366 - 316) > b) {
                    if (!(b == a)) {
                        {
                            c = 586 - 576;
                            while ((160 - 110) > c) {
                                if (!(c == b) && !(c == a)) {
                                    {
                                        d = 10;
                                        while (50 > d) {
                                            if (!(d == a) && !(d == b) && !(d == c)) {
                                                if ((!(c + d != a + b)) && (b + c < a + d) && (b > a + c))
                                                    break;
                                            }
                                            d += 10;
                                        };
                                    }
                                    if ((!(c + d != a + b)) && (a + d > b + c) && (a + c < b))
                                        break;
                                }
                                c += 324 - 314;
                            };
                        }
                        if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
                            break;
                    }
                    b += 632 - 622;
                };
            }
            if ((a + b == c + d) && (a + d > b + c) && (a + c < b))
                break;
            a += 324 - 314;
        };
    }
    name[(57 - 57)] = 'z';
    name[(961 - 960)] = 'q';
    name[(893 - 891)] = 's';
    x[(481 - 481)] = a;
    x[(450 - 449)] = b;
    x[(241 - 239)] = c;
    x[(402 - 399)] = d;
    name[(473 - 470)] = 'l';
    {
        j = 357 - 357;
        while (j < 3) {
            {
                i = 866 - 866;
                while (i < 3 - j) {
                    if (x[i] < x[i + (614 - 613)]) {
                        t = x[i];
                        x[i] = x[i + (949 - 948)];
                        x[i + 1] = t;
                        k = name[i];
                        name[i] = name[i + 1];
                        name[i + 1] = k;
                    }
                    i = i + 1;
                };
            }
            j++;
        };
    }
    {
        i = 337 - 337;
        while (i < (570 - 566)) {
            cout << name[i] << " " << x[i] << endl;
            i++;
        };
    }
    return 0;
}

