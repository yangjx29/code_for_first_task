int tyEdgV (int a, int S8r7j9whDtk5) {
    int Nh9NiqTC;
    if (!(S8r7j9whDtk5 != a))
        return a;
    else {
        if (a > S8r7j9whDtk5)
            tyEdgV (a / (145 - 143), S8r7j9whDtk5);
        else
            tyEdgV (a, S8r7j9whDtk5 / 2);
    };
}

int main () {
    int x;
    int y;
    int xi;
    cin >> x >> y;
    cout << tyEdgV (x, y) << endl;
    return 0;
}

