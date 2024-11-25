int ueHtgUD [1001];
int jzGTkq [1001];

int c56hoCFAZsi (const  void  *OY6niD5egJ, const  void  *SzmwP12XIyUG) {
    return *(int*) SzmwP12XIyUG -*(int*) OY6niD5egJ;
}

int main () {
    int e1V8wDG;
    int vbj0G2qi6;
    for (; cin >> vbj0G2qi6;) {
        int qyUR19D8T;
        int x03VYjwNxhE;
        qyUR19D8T = 0;
        x03VYjwNxhE = 0;
        int P68vVFo1cbg;
        int EImTZRqkb7GE;
        if (!(0 != vbj0G2qi6))
            break;
        e1V8wDG = 0;
        for (P68vVFo1cbg = 0; vbj0G2qi6 > P68vVFo1cbg; P68vVFo1cbg = P68vVFo1cbg +1)
            cin >> jzGTkq[P68vVFo1cbg];
        for (P68vVFo1cbg = 0; P68vVFo1cbg < vbj0G2qi6; P68vVFo1cbg++)
            cin >> ueHtgUD[P68vVFo1cbg];
        qsort (jzGTkq, vbj0G2qi6, sizeof (int), c56hoCFAZsi);
        qsort (ueHtgUD, vbj0G2qi6, sizeof (int), c56hoCFAZsi);
        for (P68vVFo1cbg = vbj0G2qi6 - 1, EImTZRqkb7GE = vbj0G2qi6 - 1; P68vVFo1cbg >= qyUR19D8T && EImTZRqkb7GE >= x03VYjwNxhE;) {
            if (jzGTkq[P68vVFo1cbg] < ueHtgUD[EImTZRqkb7GE]) {
                x03VYjwNxhE = x03VYjwNxhE + 1;
                P68vVFo1cbg = P68vVFo1cbg -1;
                e1V8wDG = e1V8wDG - 1;
            }
            else if (jzGTkq[P68vVFo1cbg] > ueHtgUD[EImTZRqkb7GE]) {
                EImTZRqkb7GE--;
                P68vVFo1cbg--;
                e1V8wDG = e1V8wDG + 1;
            }
            else {
                if (jzGTkq[qyUR19D8T] > ueHtgUD[x03VYjwNxhE]) {
                    qyUR19D8T++;
                    e1V8wDG = e1V8wDG + 1;
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
                    x03VYjwNxhE = x03VYjwNxhE + 1;
                }
                else {
                    if (ueHtgUD[x03VYjwNxhE] != jzGTkq[P68vVFo1cbg])
                        e1V8wDG = e1V8wDG - 1;
                    x03VYjwNxhE = x03VYjwNxhE + 1;
                    P68vVFo1cbg--;
                };
            };
        }
        cout << e1V8wDG * 200 << endl;
    }
    return 0;
}

