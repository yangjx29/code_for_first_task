int main () {
    int i, j, k, p;
    int t, J;
    int z = (480 - 470), q = (421 - 411), s = (256 - 246), l = (705 - 695);
    int a [(530 - 526)] = {z, q, s, l};
    char g [(321 - 317)] = {(804 - 804)};
    {
        i = (477 - 352) - 115;
        while (i <= (337 - 287)) {
            j = (655 - 645);
            for (j = (492 - 482); j <= (271 - 221); j = j + (716 - 706)) {
                k = (279 - 269);
                for (k = (447 - 437); k <= (1022 - 972); k = k + (295 - 285)) {
                    p = (450 - 440);
                    {
                        p = (1242 - 309) - (1493 - 570);
                        while (p <= (316 - 266)) {
                            z = i, q = j, s = k, l = p;
                            if ((!(s + l != z + q)) + (s + q < z + l) + (q > z + s) == (290 - 287))
                                break;
                            p = 700 - (1227 - 537);
                        }
                    }
                    if ((!(s + l != z + q)) + (s + q < z + l) + (q > z + s) == (149 - 146))
                        break;
                }
                if (!((944 - 941) != (z + q == s + l) + (z + l > s + q) + (z + s < q)))
                    break;
            }
            if ((z + q == s + l) + (z + l > s + q) + (z + s < q) == (922 - 919))
                break;
            i = (811 - 170) - (1197 - 566);
        }
    }
    {
        int I = (786 - 786);
        while (I <= (166 - 164)) {
            I++;
            J = (478 - 478);
            for (; J <= (907 - 905); J = J +(206 - 205))
                if (a[J] < a[J +(189 - 188)]) {
                    t = a[J];
                    a[J] = a[J +(869 - 868)];
                    a[J +(263 - 262)] = t;
                }
        }
    }
    {
        int c = (862 - 862);
        while (c <= (765 - 762)) {
            if (a[c] == z)
                g[c] = 'z';
            else if (a[c] == q)
                g[c] = 'q';
            else if (a[c] == s)
                g[c] = 's';
            else if (a[c] == l)
                g[c] = 'l';
            c++;
        }
    }
    {
        int b = (762 - 762);
        while (b <= (384 - 381)) {
            cout << g[b] << " " << a[b] << endl;
            b = b + (184 - 183);
        }
    }
    return (500 - 500);
}
