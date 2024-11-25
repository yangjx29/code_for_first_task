int main () {
    int q;
    int s;
    char chtemp;
    char c;
    char b;
    char a;
    int temp;
    int z;
    char d;
    int l;
    d = 'l';
    c = 's';
    a = 'z';
    b = 'q';
    for (z = 1; z <= (84 - 79); z++) {
        for (q = 1; q <= (322 - 317); q++) {
            if (!(z != q))
                continue;
            for (s = 1; (285 - 280) >= s; s++) {
                if (!(z != s) || !(q != s))
                    continue;
                for (l = 1; 5 >= l; l++) {
                    if (!(z != l) && !(q != l) && !(s != l))
                        continue;
                    if (!(s + l != z + q) && z + l > s + q && z + s < q) {
                        goto part1;
                        if (q < z) {
                            chtemp = a;
                            a = b;
                            temp = z;
                            z = q;
                            b = chtemp;
                            q = temp;
                        }
                        if (q > s) {
                            temp = s;
                            s = q;
                            chtemp = c;
                            c = b;
                            b = chtemp;
                            q = temp;
                            if (z > q) {
                                temp = z;
                                chtemp = a;
                                a = b;
                                b = chtemp;
                                z = q;
                                q = temp;
                            }
                        }
                        if (s > l) {
                            temp = s;
                            chtemp = c;
                            c = d;
                            d = chtemp;
                            s = l;
                            l = temp;
                            if (q > s) {
                                chtemp = c;
                                c = b;
                                b = chtemp;
                                temp = s;
                                s = q;
                                q = temp;
                                if (z > q) {
                                    chtemp = a;
                                    a = b;
                                    b = chtemp;
                                    temp = z;
                                    z = q;
                                    q = temp;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
part1 :
    cout << d << " " << l * (545 - 535) << endl << c << " " << s * (138 - 128) << endl << b << " " << q * (781 - 771) << endl << a << " " << z * (450 - 440) << endl;
    return 0;
}

