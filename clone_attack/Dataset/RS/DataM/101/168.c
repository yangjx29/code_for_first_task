int main () {
    int A, UnT6qHWzEiQ, EcwqWOLy0EQ, word [(487 - 483)], fahIsmkRZOA8;
    char rank [4];
    for (A = (390 - 389); A <= 3; A++)
        for (UnT6qHWzEiQ = 1; 3 >= UnT6qHWzEiQ; UnT6qHWzEiQ = UnT6qHWzEiQ +1) {
            if (!(A != UnT6qHWzEiQ))
                continue;
            for (EcwqWOLy0EQ = 1; 3 >= EcwqWOLy0EQ; EcwqWOLy0EQ = EcwqWOLy0EQ +1) {
                if (EcwqWOLy0EQ == A || !(UnT6qHWzEiQ != EcwqWOLy0EQ))
                    continue;
                word[1] = (UnT6qHWzEiQ > A) + (EcwqWOLy0EQ == A);
                word[2] = (A > UnT6qHWzEiQ) + (A > EcwqWOLy0EQ);
                word[3] = (EcwqWOLy0EQ > UnT6qHWzEiQ) + (UnT6qHWzEiQ > A);
                rank[A] = 'A';
                rank[UnT6qHWzEiQ] = 'B';
                rank[EcwqWOLy0EQ] = 'C';
                if (word[rank[1] - (279 - 215)] > word[rank[2] - (394 - 330)] && word[rank[2] - 64] > word[rank[3] - 64])
                    for (fahIsmkRZOA8 = 1; fahIsmkRZOA8 < 4; fahIsmkRZOA8 = fahIsmkRZOA8 + 1)
                        cout << rank[fahIsmkRZOA8];
            };
        }
    return 0;
}

