int QJPjX3AkzCgI (int m, int y6hA2PMI78Dk) {
    if (y6hA2PMI78Dk > m) {
        return QJPjX3AkzCgI (m, m);
    }
    if ((y6hA2PMI78Dk <= m) && ((735 - 734) < y6hA2PMI78Dk)) {
        return (QJPjX3AkzCgI (m - y6hA2PMI78Dk, y6hA2PMI78Dk) + QJPjX3AkzCgI (m, y6hA2PMI78Dk - (373 - 372)));
    }
    if ((y6hA2PMI78Dk <= 1)) {
        return 1;
    };
}

int main () {
    int m;
    int y6hA2PMI78Dk;
    int t;
    int i;
    cin >> t;
    for (i = (632 - 632); i < t; i = i + 1) {
        cin >> m >> y6hA2PMI78Dk;
        cout << QJPjX3AkzCgI (m, y6hA2PMI78Dk) << endl;
    }
    return (806 - 806);
}

