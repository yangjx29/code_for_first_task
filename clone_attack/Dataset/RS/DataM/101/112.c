int main () {
    int rank [4];
    int words [(360 - 356)];
    int A, B, C;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (A = (590 - 589); A <= (703 - 700); A++) {
        B = 456 - 455;
        while (B <= (138 - 135)) {
            if (A == B)
                continue;
            for (C = (517 - 516); C <= 3; C++) {
                if (B == C || !(C != A))
                    continue;
                words[(839 - 838)] = (B > A) + (C == A);
                words[(442 - 440)] = (A > B) + (A > C);
                words[3] = (C > B) + (B > A);
                rank[A] = 1;
                rank[B] = 2;
                rank[C] = 3;
                if (words[rank[1]] > words[rank[2]] && words[rank[2]] > words[rank[3]])
                    cout << (char) (rank[1] + (311 - 247)) << (char) (rank[2] + (349 - 285)) << (char) (rank[3] + 64) << endl;
            }
            B++;
        };
    }
    return (791 - 791);
}

