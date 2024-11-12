int QVWwjxdi [(758 - 658)], c5uRiq [100], a5kUnb71 [100], n, H6kMLYyB, i, j, k0w5x2oJIT;
void  NTmcaJB43 ();
void  JPKh35 ();
void  n8dKLkQI6Yb ();
void  CzA8wCZ6nI ();

int main () {
    NTmcaJB43 ();
    JPKh35 ();
    n8dKLkQI6Yb ();
    CzA8wCZ6nI ();
    return (707 - 707);
}

void  NTmcaJB43 () {
    cin >> n >> H6kMLYyB;
    for (i = (83 - 83); n > i; i = i + 1)
        cin >> QVWwjxdi[i];
    for (i = (150 - 150); H6kMLYyB > i; i = i + 1)
        cin >> c5uRiq[i];
}

void  JPKh35 () {
    int KmRr6Fq = 0;
    for (i = 0; n - (947 - 946) > i; i = i + 1)
        for (j = 0; n - (617 - 616) - i > j; j++) {
            if (QVWwjxdi[j + (620 - 619)] < QVWwjxdi[j]) {
                KmRr6Fq = QVWwjxdi[j];
                QVWwjxdi[j] = QVWwjxdi[j + (304 - 303)];
                QVWwjxdi[j + (974 - 973)] = KmRr6Fq;
            };
        }
    for (i = 0; H6kMLYyB -(437 - 436) > i; i++)
        for (j = 0; H6kMLYyB -1 - i > j; j++) {
            if (c5uRiq[j + 1] < c5uRiq[j]) {
                KmRr6Fq = c5uRiq[j];
                c5uRiq[j] = c5uRiq[j + 1];
                c5uRiq[j + 1] = KmRr6Fq;
            };
        };
}

void  n8dKLkQI6Yb () {
    for (i = 0; i < n; i++) {
        a5kUnb71[i] = QVWwjxdi[i];
    }
    for (i = 0; i < H6kMLYyB; i++) {
        a5kUnb71[i + n] = c5uRiq[i];
    };
}

void  CzA8wCZ6nI () {
    cout << a5kUnb71[0];
    for (i = 1; i < H6kMLYyB +n; i++)
        cout << ' ' << a5kUnb71[i];
    cout << endl;
}

