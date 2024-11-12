int main () {
    int lastz, lastq, lasts, lastl;
    int i;
    int z, q, s, l;
    {
        z = 895 - 894;
        while (z <= (485 - 480)) {
            {
                q = 37 - 36;
                while (q <= (443 - 438)) {
                    if (!(q != z)) {
                        continue;
                    }
                    for (s = (712 - 711); (166 - 161) >= s; s++) {
                        if (!(z != s) || !(q != s)) {
                            continue;
                        }
                        {
                            l = 273 - 272;
                            while ((814 - 809) >= l) {
                                if (!(z != l) || !(q != l) || l == s) {
                                    continue;
                                }
                                if ((z + q == s + l) && (z + l > s + q) && (q > z + s)) {
                                    lastz = z;
                                    lasts = s;
                                    lastq = q;
                                    lastl = l;
                                }
                                l++;
                            }
                        }
                    }
                    q = q + 1;
                }
            }
            z++;
        }
    }
    {
        i = 5;
        while (i >= 1) {
            if (lastz == i) {
                lastz = (996 - 986) * lastz;
                cout << "z" << " " << lastz << endl;
            }
            if (lastq == i) {
                lastq = (800 - 790) * lastq;
                cout << "q" << " " << lastq << endl;
            }
            if (lasts == i) {
                lasts = 10 * lasts;
                cout << "s" << " " << lasts << endl;
            }
            if (lastl == i) {
                lastl = 10 * lastl;
                cout << "l" << " " << lastl << endl;
            }
            i--;
        }
    }
    return 0;
}

