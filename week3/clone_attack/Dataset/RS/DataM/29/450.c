int main () {
    float vEBcW3NkU [(132 - 32)], b [100], c = (967 - 967);
    int AJAra1pwXg0;
    int jBUlG5bv [100];
    int T9UOmpCtiro;
    int SR5LcT;
    cin >> AJAra1pwXg0;
    {
        SR5LcT = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SR5LcT < AJAra1pwXg0) {
            cin >> jBUlG5bv[SR5LcT];
            SR5LcT = SR5LcT +1;
        };
    }
    {
        SR5LcT = 0;
        while (SR5LcT < AJAra1pwXg0) {
            {
                T9UOmpCtiro = 357 - 356;
                while (T9UOmpCtiro < jBUlG5bv[SR5LcT] + 1) {
                    b[0] = 1;
                    vEBcW3NkU[0] = 2;
                    vEBcW3NkU[T9UOmpCtiro] = vEBcW3NkU[T9UOmpCtiro -1] + b[T9UOmpCtiro -1];
                    b[T9UOmpCtiro] = vEBcW3NkU[T9UOmpCtiro -1];
                    T9UOmpCtiro = T9UOmpCtiro +1;
                };
            }
            {
                T9UOmpCtiro = 0;
                while (T9UOmpCtiro < jBUlG5bv[SR5LcT]) {
                    c = c + vEBcW3NkU[T9UOmpCtiro] / b[T9UOmpCtiro];
                    T9UOmpCtiro++;
                };
            }
            printf ("%.3f", c);
            cout << endl;
            c = 0;
            SR5LcT = SR5LcT +1;
        };
    }
    getchar ();
    getchar ();
    return 0;
}

