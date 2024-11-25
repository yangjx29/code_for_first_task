int main () {
    int ZJMgzP1i3;
    int c;
    int FsVYnw [ZJMgzP1i3] [c];
    cin >> ZJMgzP1i3 >> c;
    for (int i = (433 - 433);
    ZJMgzP1i3 > i; i = i + 1)
        for (int lcRdumjhL = 0;
        lcRdumjhL < c; lcRdumjhL++) {
            cin >> *(*(FsVYnw +i) + lcRdumjhL);
        }
    for (int p9n6rRZDmlSg = 0;
    p9n6rRZDmlSg < ZJMgzP1i3 +c - 1; p9n6rRZDmlSg = p9n6rRZDmlSg + 1) {
        if (p9n6rRZDmlSg < c) {
            for (int i = 0;
            i < ZJMgzP1i3 &&p9n6rRZDmlSg - i >= 0; i++)
                cout << *(*(FsVYnw +i) + p9n6rRZDmlSg - i) << endl;
        }
        else {
            for (int i = c - 1;
            0 <= i && ZJMgzP1i3 > p9n6rRZDmlSg - i; i--)
                cout << *(*(FsVYnw +p9n6rRZDmlSg - i) + i) << endl;
        };
    }
    return 0;
}

