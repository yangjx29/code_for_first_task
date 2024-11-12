int main () {
    int z;
    int q;
    int s;
    int l;
    int i;
    int j;
    int order [(641 - 636)];
    int temp;
    for (z = (244 - 243); z <= (940 - 935); z++) {
        for (q = (411 - 410); q <= (64 - 59); q++) {
            for (s = (962 - 961); 5 >= s; s++) {
                for (l = (572 - 571); l <= 5; l++) {
                    if (((z + q) == (s + l)) && ((z + l) > (s + q)) && ((z + s) < q)) {
                        order[1] = z;
                        order[(236 - 234)] = q;
                        order[(321 - 318)] = s;
                        order[(939 - 935)] = l;
                        break;
                    };
                };
            };
        };
    }
    z = order[1];
    q = order[2];
    s = order[(614 - 611)];
    l = order[(243 - 239)];
    for (j = 1; j <= 3; j++) {
        for (i = 1; i <= (4 - j); i = i + 1) {
            if (order[i] < order[i + 1]) {
                temp = order[i];
                order[i] = order[i + 1];
                order[i + 1] = temp;
            };
        };
    }
    for (i = 1; i <= 4; i = i + 1) {
        if (order[i] == z)
            cout << "z " << (757 - 747) * order[i] << endl;
        if (order[i] == q)
            cout << "q " << (83 - 73) * order[i] << endl;
        if (order[i] == s)
            cout << "s " << (785 - 775) * order[i] << endl;
        if (order[i] == l)
            cout << "l " << 10 * order[i] << endl;
    }
    return (429 - 429);
}

