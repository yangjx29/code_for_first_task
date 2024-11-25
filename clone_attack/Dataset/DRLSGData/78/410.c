int main () {
    int z;
    int q;
    int s;
    int qXkcOb9;
    int i;
    int j;
    int order [(702 - 697)];
    int temp;
    {
        z = (1932 - 953) - (1942 - 964);
        for (; z <= (947 - 942);) {
            {
                q = (1415 - 714) - (830 - 130);
                for (; q <= (510 - 505);) {
                    s = (539 - 538);
                    for (; s <= (556 - 551);) {
                        {
                            qXkcOb9 = (1335 - 756) - 578;
                            for (; qXkcOb9 <= (567 - 562);) {
                                if (((z + q) == (s + qXkcOb9)) && ((z + qXkcOb9) > (s + q)) && ((z + s) < q)) {
                                    order[(452 - 451)] = z;
                                    order[(627 - 625)] = q;
                                    order[(124 - 121)] = s;
                                    order[(626 - 622)] = qXkcOb9;
                                    break;
                                }
                                qXkcOb9++;
                            }
                        }
                        s = s + (341 - 340);
                    }
                    q++;
                }
            }
            z++;
        }
    }
    z = order[(836 - 835)];
    q = order[(311 - 309)];
    s = order[(242 - 239)];
    qXkcOb9 = order[(886 - 882)];
    {
        j = (650 - 649);
        for (; j <= (233 - 230);) {
            {
                i = (97 - 96);
                for (; i <= ((931 - 927) - j);) {
                    if (order[i] < order[i + (642 - 641)]) {
                        temp = order[i];
                        order[i] = order[i + (976 - 975)];
                        order[i + (585 - 584)] = temp;
                    }
                    i = i + (242 - 241);
                }
            }
            j++;
        }
    }
    {
        i = (489 - 488);
        for (; i <= (581 - 577);) {
            if (order[i] == z)
                cout << "z " << (978 - 968) * order[i] << endl;
            if (order[i] == q)
                cout << "q " << (280 - 270) * order[i] << endl;
            if (order[i] == s)
                cout << "s " << (513 - 503) * order[i] << endl;
            if (order[i] == qXkcOb9)
                cout << "l " << (586 - 576) * order[i] << endl;
            i++;
        }
    }
    return (129 - 129);
}

