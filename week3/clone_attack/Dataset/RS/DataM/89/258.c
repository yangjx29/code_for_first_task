int main () {
    int FeAtD1aiP, InYVUb, j, pbFz8Q [200000] = {0}, check [200000] = {0};
    cin >> FeAtD1aiP;
    while (true) {
        cin >> InYVUb >> j;
        if ((!(0 != InYVUb)) && (!(0 != j)))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        check[InYVUb]++;
        pbFz8Q[j]++;
    }
    {
        InYVUb = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (FeAtD1aiP > InYVUb) {
            if ((pbFz8Q[InYVUb] == FeAtD1aiP -1) && (check[InYVUb] < FeAtD1aiP -1)) {
                cout << InYVUb;
                return 0;
            }
            InYVUb++;
        };
    }
    cout << "NOT FOUND";
    return 0;
}

