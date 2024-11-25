struct   stu {
    int ID;
    int Zx35g74vhijQ;
    int D7hPX9IL;
    int sum;
}
BTa8MEB5Z [100000], uGDB5Erhozb, mx1, mx2;

int main () {
    int xnhYPy8SCBz;
    int XXI6xAg;
    int j;
    cin >> xnhYPy8SCBz;
    for (XXI6xAg = (616 - 616); xnhYPy8SCBz > XXI6xAg; XXI6xAg = XXI6xAg +1) {
        cin >> BTa8MEB5Z[XXI6xAg].ID >> BTa8MEB5Z[XXI6xAg].Zx35g74vhijQ >> BTa8MEB5Z[XXI6xAg].D7hPX9IL;
        BTa8MEB5Z[XXI6xAg].sum = BTa8MEB5Z[XXI6xAg].Zx35g74vhijQ + BTa8MEB5Z[XXI6xAg].D7hPX9IL;
    }
    uGDB5Erhozb = BTa8MEB5Z[0];
    {
        XXI6xAg = 0;
        while (xnhYPy8SCBz > XXI6xAg) {
            if (uGDB5Erhozb.sum < BTa8MEB5Z[XXI6xAg].sum)
                uGDB5Erhozb = BTa8MEB5Z[XXI6xAg];
            XXI6xAg = XXI6xAg +1;
        };
    }
    cout << uGDB5Erhozb.ID << ' ' << uGDB5Erhozb.sum << endl;
    uGDB5Erhozb.sum = 0;
    mx1 = uGDB5Erhozb;
    {
        XXI6xAg = 0;
        while (XXI6xAg < xnhYPy8SCBz) {
            if (mx1.sum < BTa8MEB5Z[XXI6xAg].sum) {
                if (!(uGDB5Erhozb.ID != BTa8MEB5Z[XXI6xAg].ID))
                    continue;
                mx1 = BTa8MEB5Z[XXI6xAg];
            }
            XXI6xAg = XXI6xAg +1;
        };
    }
    cout << mx1.ID << ' ' << mx1.sum << endl;
    mx1.sum = 0;
    mx2 = mx1;
    for (XXI6xAg = 0; XXI6xAg < xnhYPy8SCBz; XXI6xAg++) {
        if (BTa8MEB5Z[XXI6xAg].sum > mx2.sum) {
            if (BTa8MEB5Z[XXI6xAg].ID == uGDB5Erhozb.ID || BTa8MEB5Z[XXI6xAg].ID == mx1.ID)
                continue;
            mx2 = BTa8MEB5Z[XXI6xAg];
        };
    }
    cout << mx2.ID << ' ' << mx2.sum << endl;
}

