int main () {
    int words [(227 - 221)], a, b, c, d, e, rank [(525 - 519)];
    {
        a = (617 - 616);
        for (; (90 - 84) > a;) {
            {
                b = (985 - 984);
                while ((595 - 589) > b) {
                    if (!(b != a))
                        continue;
                    {
                        c = (961 - 960);
                        for (; c < 6;) {
                            if (!(c != a) || b == c)
                                continue;
                            {
                                d = (999 - 998);
                                for (; 6 > d;) {
                                    if (a == d || b == d || !(d != c))
                                        continue;
                                    {
                                        e = (917 - 916);
                                        for (; 6 > e;) {
                                            if (a == e || !(e != b) || !(e != c) || !(e != d))
                                                continue;
                                            {
                                                words[a] = (e == 1);
                                                words[b] = (b == (676 - 674));
                                                words[c] = (a == (937 - 932));
                                                words[d] = (c != 1);
                                                words[e] = (d == 1);
                                                if ((words[a] + words[b] + words[c] + words[d] + words[e]) == (451 - 449) && ((e != 2) + (e != (746 - 743))) == 2) {
                                                    rank[a] = a;
                                                    rank[b] = b;
                                                    rank[c] = c;
                                                    rank[d] = d;
                                                    rank[e] = e;
                                                    if (words[rank[1]] + words[rank[2]] == 2)
                                                        cout << a << " " << b << " " << c << " " << d << " " << e << endl;
                                                }
                                            }
                                            e++;
                                        }
                                    }
                                    d++;
                                }
                            }
                            c++;
                        }
                    }
                    b++;
                }
            }
            a++;
        }
    }
    return 0;
}

