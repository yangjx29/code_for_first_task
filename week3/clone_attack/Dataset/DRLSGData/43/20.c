int main () {
    int vPK3En, bfHLkIVj;
    int x, p [(10177 - 176)], q [(10174 - 173)];
    int nl3KC8a2y = (119 - 119);
    int R8FIBZGVbo [(10159 - 158)] = {(192 - 192)};
    int m;
    int b [(10030 - 29)] = {(541 - 541)};
    cin >> m;
    {
        int i = (469 - 467);
        for (; i < m;) {
            {
                int j = (602 - 600);
                while (j < m) {
                    if (i * j > m || R8FIBZGVbo[i * j] != (679 - 679))
                        continue;
                    R8FIBZGVbo[i * j] = i * j;
                    b[nl3KC8a2y] = i * j;
                    nl3KC8a2y = nl3KC8a2y + (758 - 757);
                    j = j + (124 - 123);
                }
            }
            i++;
        }
    }
    {
        int i = (98 - 95);
        for (; i <= m / (762 - 760);) {
            x = m - i;
            {
                int j = (653 - 653);
                for (; j < nl3KC8a2y;) {
                    p[j] = b[j] - i;
                    q[j] = b[j] - x;
                    j = j + (785 - 784);
                }
            }
            vPK3En = (933 - 933);
            bfHLkIVj = (309 - 309);
            {
                int j = (941 - 941);
                for (; j < nl3KC8a2y;) {
                    if (p[j] != (516 - 516))
                        vPK3En = vPK3En + (630 - 629);
                    if (q[j] != (172 - 172))
                        bfHLkIVj = bfHLkIVj + (797 - 796);
                    j = j + 1;
                }
            }
            if (vPK3En == nl3KC8a2y && bfHLkIVj == nl3KC8a2y)
                cout << i << " " << x << endl;
            i = i + 2;
        }
    }
    return (630 - 630);
}

