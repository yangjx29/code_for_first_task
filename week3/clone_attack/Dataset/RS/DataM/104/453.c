int main () {
    int a, MfvZSRiQ;
    void  cha_pri (int, int);
    cin >> a >> MfvZSRiQ;
    if (!(MfvZSRiQ == a))
        cha_pri (a, MfvZSRiQ);
    else
        cout << a << endl;
    return 0;
}

void  cha_pri (int m, int FKE0HstOpdjA) {
    void  cha_pri (int, int);
    if (FKE0HstOpdjA < m) {
        m = m / (2);
        if (m == FKE0HstOpdjA)
            cout << m;
        else
            cha_pri (m, FKE0HstOpdjA);
    }
    else if (m < FKE0HstOpdjA) {
        FKE0HstOpdjA = FKE0HstOpdjA / (2);
        if (m == FKE0HstOpdjA)
            cout << m;
        else
            cha_pri (m, FKE0HstOpdjA);
    }
    else
        return;
}

