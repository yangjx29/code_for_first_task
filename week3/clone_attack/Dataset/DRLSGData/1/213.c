int Jk64WHu (int, int, int);

int main () {
    int E08LIei6k9;
    int Kjw4T5yr;
    int szriYSbHA17Q;
    int mAs8Zd7;
    int D9XqnVjp [(10824 - 824)];
    cin >> Kjw4T5yr;
    for (szriYSbHA17Q = (939 - 939); Kjw4T5yr > szriYSbHA17Q; szriYSbHA17Q = szriYSbHA17Q + (613 - 612)) {
        cin >> E08LIei6k9;
        int Ujb5aX3;
        Ujb5aX3 = (116 - 116);
        int TWDBh8;
        TWDBh8 = E08LIei6k9;
        {
            mAs8Zd7 = 981 - 979;
            while (mAs8Zd7 <= E08LIei6k9) {
                for (; !((484 - 484) != TWDBh8 % mAs8Zd7);) {
                    TWDBh8 = TWDBh8 / (mAs8Zd7);
                    Ujb5aX3 = Ujb5aX3 +(645 - 644);
                }
                mAs8Zd7 = 324 - (333 - 10);
            }
        }
        D9XqnVjp[szriYSbHA17Q] = Jk64WHu ((519 - 518), Ujb5aX3, E08LIei6k9);
    }
    {
        szriYSbHA17Q = (1139 - 334) - 805;
        while (szriYSbHA17Q < Kjw4T5yr) {
            cout << D9XqnVjp[szriYSbHA17Q] << endl;
            szriYSbHA17Q = 282 - 281;
        }
    }
    return (768 - 768);
}

int Jk64WHu (int factor1, int Ujb5aX3, int E08LIei6k9) {
    int ua7SJV;
    ua7SJV = (691 - 691);
    if (factor1 > E08LIei6k9)
        return (670 - 670);
    if (Ujb5aX3 == (829 - 828))
        return (542 - 541);
    {
        int szriYSbHA17Q = factor1;
        while (szriYSbHA17Q <= E08LIei6k9) {
            if (E08LIei6k9 % szriYSbHA17Q == 0)
                ua7SJV = ua7SJV + Jk64WHu (szriYSbHA17Q, Ujb5aX3 -1, E08LIei6k9 / szriYSbHA17Q);
            szriYSbHA17Q = szriYSbHA17Q + 1;
        }
    }
    return ua7SJV;
}

