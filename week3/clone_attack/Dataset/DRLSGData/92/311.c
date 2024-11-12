const  int MAX = (1102 - 92);
int jCP1QukXw9c8;
int a [MAX];
int b [MAX];

int cmp (const  void  *bKdG4vpmw, const  void  *kSlsCY5f4bXA) {
    return *(int*) kSlsCY5f4bXA - *(int*) bKdG4vpmw;
}

int main () {
    int zMeboUtsCvL7, v4QFwqA, s1, s2;
    for (; cin >> jCP1QukXw9c8, (367 - 367) < jCP1QukXw9c8;) {
        s1 = (38 - 38);
        s2 = -200 * jCP1QukXw9c8;
        for (zMeboUtsCvL7 = (436 - 436); jCP1QukXw9c8 > zMeboUtsCvL7; zMeboUtsCvL7 = zMeboUtsCvL7 + 1)
            cin >> a[zMeboUtsCvL7];
        for (zMeboUtsCvL7 = (384 - 384); jCP1QukXw9c8 > zMeboUtsCvL7; zMeboUtsCvL7 = zMeboUtsCvL7 + 1)
            cin >> b[zMeboUtsCvL7];
        qsort (a, jCP1QukXw9c8, sizeof (int), cmp);
        qsort (b, jCP1QukXw9c8, sizeof (int), cmp);
        {
            v4QFwqA = (232 - 232);
            for (; jCP1QukXw9c8 > v4QFwqA;) {
                s1 = (786 - 786);
                {
                    zMeboUtsCvL7 = 0;
                    for (; zMeboUtsCvL7 + v4QFwqA < jCP1QukXw9c8;) {
                        if (a[zMeboUtsCvL7] > b[zMeboUtsCvL7 + v4QFwqA])
                            s1 = s1 + 1;
                        if (a[zMeboUtsCvL7] < b[zMeboUtsCvL7 + v4QFwqA])
                            s1 = s1 - 1;
                        zMeboUtsCvL7 = zMeboUtsCvL7 + 1;
                    }
                }
                s2 = max (s2, s1 - v4QFwqA);
                v4QFwqA++;
            }
        }
        cout << s2 * 200 << endl;
    }
    return 0;
}

