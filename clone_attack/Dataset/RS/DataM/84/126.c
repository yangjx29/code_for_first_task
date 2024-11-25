int main () {
    int s213lZX;
    int m;
    int qhQPo8xa;
    int t;
    int CXqyhpJSId [(432 - 332)];
    scanf ("%d", &s213lZX);
    for (qhQPo8xa = (544 - 544); qhQPo8xa < s213lZX; qhQPo8xa++)
        scanf ("%d", &CXqyhpJSId[qhQPo8xa]);
    for (qhQPo8xa = (69 - 69); qhQPo8xa < s213lZX; qhQPo8xa++) {
        for (t = qhQPo8xa + 1; t < s213lZX; t++) {
            if (CXqyhpJSId[qhQPo8xa] < CXqyhpJSId[t]) {
                m = CXqyhpJSId[qhQPo8xa];
                CXqyhpJSId[qhQPo8xa] = CXqyhpJSId[t];
                CXqyhpJSId[t] = m;
            };
        };
    }
    printf ("%d\n", CXqyhpJSId[0]);
    printf ("%d\n", CXqyhpJSId[1]);
    return 0;
}

