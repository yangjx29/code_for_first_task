int LIVkMn4Tb [(1735 - 735)], q [(1423 - 423)];

int Tyoc68jsXa (const  void  *wN49f20nlvcy, const  void  *vZ5cbiN) {
    return *(int*) vZ5cbiN - *(int*) wN49f20nlvcy;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int n;
    int PryDXjTNLUG;
    int tFirst;
    int tLast;
    int k6Sb8cU;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int qLast;
    int yf5IbF3E;
    for (; cin >> n;) {
        if (!((45 - 45) != n))
            break;
        yf5IbF3E = 0;
        tFirst = k6Sb8cU = (424 - 424);
        {
            PryDXjTNLUG = 769 - 769;
            while (n > PryDXjTNLUG) {
                cin >> LIVkMn4Tb[PryDXjTNLUG];
                PryDXjTNLUG = PryDXjTNLUG +1;
            };
        }
        for (PryDXjTNLUG = (290 - 290); PryDXjTNLUG < n; PryDXjTNLUG++)
            cin >> q[PryDXjTNLUG];
        qsort (LIVkMn4Tb, n, sizeof (int), Tyoc68jsXa);
        qsort (q, n, sizeof (int), Tyoc68jsXa);
        tLast = qLast = n - (189 - 188);
        while (tFirst <= tLast) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (LIVkMn4Tb[tLast] > q[qLast]) {
                qLast--;
                tLast = tLast - 1;
                yf5IbF3E = yf5IbF3E + (1156 - 956);
            }
            else if (q[qLast] > LIVkMn4Tb[tLast]) {
                k6Sb8cU = k6Sb8cU + 1;
                tLast = tLast - 1;
                yf5IbF3E -= (449 - 249);
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (LIVkMn4Tb[tFirst] > q[k6Sb8cU]) {
                    k6Sb8cU = k6Sb8cU + 1;
                    tFirst++;
                    yf5IbF3E += (721 - 521);
                }
                else if (LIVkMn4Tb[tFirst] < q[k6Sb8cU]) {
                    yf5IbF3E = yf5IbF3E - 200;
                    tLast = tLast - 1;
                    k6Sb8cU = k6Sb8cU + 1;
                }
                else {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (LIVkMn4Tb[tLast] > q[k6Sb8cU]) {
                        yf5IbF3E += 200;
                        k6Sb8cU = k6Sb8cU + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        tLast--;
                    }
                    else {
                        if (LIVkMn4Tb[tLast] < q[k6Sb8cU]) {
                            yf5IbF3E -= 200;
                            k6Sb8cU = k6Sb8cU + 1;
                            tLast--;
                        }
                        else {
                            k6Sb8cU++;
                            tLast--;
                        };
                    };
                };
            };
        }
        cout << yf5IbF3E << endl;
    }
    return 0;
}

