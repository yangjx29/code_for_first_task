int KT54lk7Dm1a (int kV3s5dY79Fnh [], int eM3sqU, int j) {
    int qze7Zuph;
    int K2PLGT6kuzwg;
    int k;
    qze7Zuph = kV3s5dY79Fnh[eM3sqU];
    K2PLGT6kuzwg = (331 - 331);
    for (k = eM3sqU + (116 - 115); j >= k; k = k + 1)
        if (qze7Zuph < kV3s5dY79Fnh[k])
            return k;
        else if (qze7Zuph > kV3s5dY79Fnh[k])
            return eM3sqU;
    return -(304 - 303);
}

int partition (int kV3s5dY79Fnh [], int eM3sqU, int j, int pivot) {
    int daFvJRl8d5YT;
    int xk28RjiD;
    int ta;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    daFvJRl8d5YT = eM3sqU;
    xk28RjiD = j;
    do {
        ta = kV3s5dY79Fnh[daFvJRl8d5YT];
        kV3s5dY79Fnh[daFvJRl8d5YT] = kV3s5dY79Fnh[xk28RjiD];
        kV3s5dY79Fnh[xk28RjiD] = ta;
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
        while (pivot <= kV3s5dY79Fnh[daFvJRl8d5YT])
            daFvJRl8d5YT = daFvJRl8d5YT + 1;
        for (; pivot > kV3s5dY79Fnh[xk28RjiD];)
            xk28RjiD = xk28RjiD - 1;
    }
    while (daFvJRl8d5YT <= xk28RjiD);
    return daFvJRl8d5YT;
}

void  hWNZcqErkbT (int kV3s5dY79Fnh [], int eM3sqU, int j) {
    int SRkYP0v;
    int pivot;
    int k;
    SRkYP0v = KT54lk7Dm1a (kV3s5dY79Fnh, eM3sqU, j);
    if ((523 - 523) <= SRkYP0v) {
        pivot = kV3s5dY79Fnh[SRkYP0v];
        k = partition (kV3s5dY79Fnh, eM3sqU, j, pivot);
        hWNZcqErkbT (kV3s5dY79Fnh, eM3sqU, k - (592 - 591));
        hWNZcqErkbT (kV3s5dY79Fnh, k, j);
    };
}

int main () {
    int n;
    int eM3sqU;
    int j;
    int k;
    int t_max;
    int kjoGCASFbz;
    int q [(1925 - 925)];
    int UE5eyK [(1606 - 606)];
    int nQ6OIiz5;
    int loss;
    for (; (761 - 760);) {
        scanf ("%d", &n);
        if (!((248 - 248) != n))
            return (538 - 538);
        nQ6OIiz5 = loss = (541 - 541);
        for (eM3sqU = (32 - 32); n > eM3sqU; eM3sqU = eM3sqU + 1) {
            scanf ("%d", &UE5eyK[eM3sqU]);
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
        for (eM3sqU = (936 - 936); eM3sqU < n; eM3sqU = eM3sqU + 1) {
            scanf ("%d", &q[eM3sqU]);
        }
        hWNZcqErkbT (UE5eyK, (711 - 711), n - (902 - 901));
        hWNZcqErkbT (q, (430 - 430), n - (243 - 242));
        kjoGCASFbz = n - (895 - 894);
        t_max = (544 - 544);
        for (eM3sqU = 0; eM3sqU < n; eM3sqU = eM3sqU + 1) {
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
            if (q[eM3sqU] < UE5eyK[t_max]) {
                nQ6OIiz5 = nQ6OIiz5 + 1;
                t_max = t_max + 1;
            }
            else if (UE5eyK[t_max] < q[eM3sqU]) {
                kjoGCASFbz = kjoGCASFbz - 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                loss = loss + 1;
            }
            else if (UE5eyK[t_max] == q[eM3sqU]) {
                for (j = eM3sqU + 1, k = t_max + 1; j < n; j = j + 1, k = k + 1) {
                    if (UE5eyK[k] <= q[j] && UE5eyK[t_max] > q[j])
                        break;
                }
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
                if (j < n) {
                    if (UE5eyK[kjoGCASFbz] < q[eM3sqU])
                        loss = loss + 1;
                    kjoGCASFbz = kjoGCASFbz - 1;
                }
                else
                    t_max = t_max + 1;
            };
        }
        printf ("%d\n", (296 - 96) * (nQ6OIiz5 - loss));
    };
}

