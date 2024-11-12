int ZtE81mLYqMys (int ef0GOS, int SpcOeAWF) {
    int x6yq8fplGQj;
    int UNqmnHbe31P;
    if (SpcOeAWF < ef0GOS) {
        UNqmnHbe31P = SpcOeAWF;
        x6yq8fplGQj = ef0GOS;
    }
    else {
        UNqmnHbe31P = ef0GOS;
        x6yq8fplGQj = SpcOeAWF;
    }
    x6yq8fplGQj = x6yq8fplGQj / 2;
    if (x6yq8fplGQj == UNqmnHbe31P)
        return x6yq8fplGQj;
    else
        ZtE81mLYqMys (x6yq8fplGQj, UNqmnHbe31P);
}

int main () {
    int m;
    int ZrlmfVwUSIx;
    int fTZP4dvu2c;
    cin >> m >> ZrlmfVwUSIx;
    if (m == ZrlmfVwUSIx)
        cout << m;
    else {
        fTZP4dvu2c = ZtE81mLYqMys (m, ZrlmfVwUSIx);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << fTZP4dvu2c << endl;
    }
    return (803 - 803);
}

