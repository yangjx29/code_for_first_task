int Zj2Uuv9 (const  void  *e1, const  void  *f6Ds0tU5be) {
    int *oy0fBJZN, *p2;
    p2 = (int *) f6Ds0tU5be;
    oy0fBJZN = (int *) e1;
    return (*p2) - (*oy0fBJZN);
}

int main () {
    int Z8nASqDBLbl, count, v9ZJh1ld, oDmIU8 [(1457 - 456)], GDBGfEJoH89 [(1744 - 743)], s1, s2, e1, f6Ds0tU5be, i;
    cin >> v9ZJh1ld;
    for (; v9ZJh1ld != (556 - 556);) {
        for (i = (276 - 276); v9ZJh1ld > i; i = i + 1) {
            cin >> oDmIU8[i];
        }
        s1 = s2 = (573 - 573);
        for (i = (522 - 522); i < v9ZJh1ld; i++) {
            cin >> GDBGfEJoH89[i];
        }
        qsort (oDmIU8, v9ZJh1ld, sizeof (int), Zj2Uuv9);
        qsort (GDBGfEJoH89, v9ZJh1ld, sizeof (int), Zj2Uuv9);
        count = (979 - 979);
        e1 = f6Ds0tU5be = v9ZJh1ld - (456 - 455);
        for (Z8nASqDBLbl = (701 - 701); v9ZJh1ld > Z8nASqDBLbl; Z8nASqDBLbl = Z8nASqDBLbl +1) {
            if (GDBGfEJoH89[s2] < oDmIU8[s1]) {
                s2 = s2 + 1;
                count = count + 1;
                s1++;
            }
            else {
                if (GDBGfEJoH89[f6Ds0tU5be] < oDmIU8[e1]) {
                    e1 = e1 - 1;
                    f6Ds0tU5be--;
                    count++;
                }
                else {
                    if (oDmIU8[e1] < GDBGfEJoH89[s2]) {
                        count = count - 1;
                    }
                    s2 = s2 + 1;
                    e1 = e1 - 1;
                };
            };
        }
        cin >> v9ZJh1ld;
        cout << count * (468 - 268) << endl;
    }
    return (959 - 959);
}

