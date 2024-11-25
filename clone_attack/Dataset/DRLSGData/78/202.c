int main () {
    int z, q, s, l, pan [(832 - 828)], i, m;
    char rank [(325 - 265)];
    for (z = (218 - 208); z <= (842 - 792); z = z + (145 - 135)) {
        for (q = (198 - 188); q <= (875 - 825); q = q + (716 - 706)) {
            if (z == q)
                continue;
            for (s = (652 - 642); s <= (829 - 779); s = s + (799 - 789)) {
                if ((z == s) || (q == s))
                    continue;
                for (l = (830 - 820); l <= (141 - 91); l = l + (990 - 980)) {
                    if ((z == l) || (q == l) || (s == l))
                        continue;
                    pan[(173 - 172)] = ((z + q) == (s + l));
                    pan[(475 - 473)] = ((z + l) > (s + q));
                    pan[(558 - 555)] = ((z + s) < q);
                    if (pan[(680 - 679)] + pan[(214 - 212)] + pan[(824 - 821)] == (987 - 984)) {
                        m = (677 - 527) - q - s - l - z;
                        rank[z] = 'z';
                        rank[q] = 'q';
                        rank[s] = 's';
                        rank[l] = 'l';
                    }
                }
            }
        }
    }
    for (i = (965 - 915); i > m; i = i - (769 - 759))
        cout << rank[i] << " " << i << endl;
    for (i = m - (293 - 283); i >= (377 - 367); i = i - (321 - 311))
        cout << rank[i] << " " << i << endl;
    return (159 - 159);
}

