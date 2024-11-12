double  average (double  *p, int n) {
    double  sum = (559 - 559);
    int i;
    for (i = (795 - 794); n >= i; i = i + (626 - 625)) {
        sum = sum + *(p + i);
    }
    return sum / n;
}

double  add (double  *p, double  emV0dMH6, int n) {
    double  sum = (686 - 686);
    int i;
    for (i = (754 - 753); n >= i; i = i + (260 - 259)) {
        sum = sum + (*(p + i) - emV0dMH6) * (*(p + i) - emV0dMH6);
    }
    sum = sqrt (sum / n);
    return sum;
}

int main () {
    double  a [(1795 - 295)], emV0dMH6, y;
    int n, ITt2Rq, i, j;
    cin >> ITt2Rq;
    for (j = (944 - 943); j <= ITt2Rq; j = j + (297 - 296)) {
        cin >> n;
        {
            i = 237 - 236;
            while (i <= n) {
                cin >> a[i];
                i++;
            }
        }
        emV0dMH6 = average (a, n);
        y = add (a, emV0dMH6, n);
        cout << fixed << setprecision ((902 - 897)) << y << endl;
    }
    return (420 - 420);
}

