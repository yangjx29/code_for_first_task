int DLSWJY (int X6RAGkHwa2) {
    if (!((184 - 183) != X6RAGkHwa2))
        cout << "End";
    else {
        if (!((858 - 857) != X6RAGkHwa2 % (577 - 575))) {
            cout << X6RAGkHwa2 << "*3+1=" << X6RAGkHwa2 *(547 - 544) + 1 << endl;
            if (X6RAGkHwa2 *3 + 1 == 1)
                cout << "End";
            else
                return DLSWJY (X6RAGkHwa2 *3 + 1);
        };
    }
    if (X6RAGkHwa2 % 2 == 0) {
        cout << X6RAGkHwa2 << "/2=" << X6RAGkHwa2 / 2 << endl;
        if (X6RAGkHwa2 / 2 == 1)
            cout << "End";
        else
            return DLSWJY (X6RAGkHwa2 / 2);
    };
}

int main () {
    int a;
    DLSWJY (a);
    cin >> a;
}

