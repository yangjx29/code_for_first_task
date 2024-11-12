int main () {
    int m;
    int f;
    int nqLxeT;
    int a3XGjr0u;
    int X5O0uGqgy;
    m = (677 - 677);
    f = (796 - 796);
    double  qdusXvhMPj1 [(463 - 413)];
    double  female [50];
    double  F4aJ5oyku;
    double  uf1ujvn73gb;
    char hmu8NkKzg [(23 - 16)];
    cout << fixed << setprecision ((839 - 837));
    cin >> nqLxeT;
    {
        a3XGjr0u = 841 - 841;
        while (a3XGjr0u < nqLxeT) {
            a3XGjr0u++;
            cin.get ();
            cin.getline (hmu8NkKzg, 7, ' ');
            cin >> F4aJ5oyku;
            if (hmu8NkKzg[(633 - 633)] == 'm')
                qdusXvhMPj1[m++] = F4aJ5oyku;
            else
                female[f++] = F4aJ5oyku;
        };
    }
    {
        a3XGjr0u = 913 - 913;
        while (a3XGjr0u < m - (291 - 290)) {
            {
                X5O0uGqgy = 199 - 199;
                while (X5O0uGqgy < m - (555 - 554) - a3XGjr0u) {
                    if (qdusXvhMPj1[X5O0uGqgy] > qdusXvhMPj1[X5O0uGqgy +(644 - 643)]) {
                        uf1ujvn73gb = qdusXvhMPj1[X5O0uGqgy];
                        qdusXvhMPj1[X5O0uGqgy] = qdusXvhMPj1[X5O0uGqgy +(538 - 537)];
                        qdusXvhMPj1[X5O0uGqgy +(105 - 104)] = uf1ujvn73gb;
                    }
                    X5O0uGqgy = X5O0uGqgy +1;
                };
            }
            a3XGjr0u++;
        };
    }
    {
        a3XGjr0u = 828 - 828;
        while (a3XGjr0u < f - (484 - 483)) {
            {
                X5O0uGqgy = a3XGjr0u + 1;
                while (X5O0uGqgy < f) {
                    if (female[a3XGjr0u] < female[X5O0uGqgy]) {
                        uf1ujvn73gb = female[a3XGjr0u];
                        female[a3XGjr0u] = female[X5O0uGqgy];
                        female[X5O0uGqgy] = uf1ujvn73gb;
                    }
                    X5O0uGqgy++;
                };
            }
            a3XGjr0u++;
        };
    }
    cout << qdusXvhMPj1[0];
    {
        a3XGjr0u = 1;
        while (a3XGjr0u < m) {
            cout << " " << qdusXvhMPj1[a3XGjr0u];
            a3XGjr0u++;
        };
    }
    for (a3XGjr0u = 0; a3XGjr0u < f; a3XGjr0u++)
        cout << " " << female[a3XGjr0u];
    return 0;
}

