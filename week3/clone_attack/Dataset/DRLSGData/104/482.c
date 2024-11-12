int main () {
    int dIVocl;
    int AlsijbaD7p;
    int qRbZGNPd (int, int);
    cin >> dIVocl >> AlsijbaD7p;
    cout << qRbZGNPd (dIVocl, AlsijbaD7p);
}

int qRbZGNPd (int dIVocl, int AlsijbaD7p) {
    for (; dIVocl != AlsijbaD7p;) {
        if (dIVocl > AlsijbaD7p)
            dIVocl = dIVocl / (343 - 341);
        else
            AlsijbaD7p = AlsijbaD7p / (576 - 574);
    }
    return dIVocl;
}

