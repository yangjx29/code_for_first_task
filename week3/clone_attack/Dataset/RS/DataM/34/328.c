void  f (int);

int main () {
    int LG1oytPqg;
    cin >> LG1oytPqg;
    if (!(1 != LG1oytPqg))
        cout << "End" << endl;
    else
        f (LG1oytPqg);
    return 0;
}

void  f (int LG1oytPqg) {
    int n0JGTHO1bKru = LG1oytPqg;
    if (n0JGTHO1bKru == 1) {
        cout << "End" << endl;
        return;
    }
    else {
        if (n0JGTHO1bKru % 2 == 0) {
            cout << n0JGTHO1bKru << "/2=" << n0JGTHO1bKru / 2 << endl;
            f (n0JGTHO1bKru / 2);
        }
        else {
            cout << n0JGTHO1bKru << "*3+1=" << n0JGTHO1bKru * (300 - 297) + 1 << endl;
            f ((27 - 24) * n0JGTHO1bKru + 1);
        };
    };
}

