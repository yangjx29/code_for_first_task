int main () {
    int K7aTnSz, X8JtjyzFUM, j, temp, year [200], Sc4TXPlHm [200], rUagBWXnTqKF [200], total;
    int oKjYDq [(969 - 967)] [(814 - 802)] = {(973 - 942), (904 - 876), (455 - 424), (902 - 872), (564 - 533), (631 - 601), (199 - 168), (846 - 815), (339 - 309), (718 - 687), (559 - 529), 31, 31, (864 - 835), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &K7aTnSz);
    {
        X8JtjyzFUM = 540 - 540;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (K7aTnSz > X8JtjyzFUM) {
            scanf ("%d %d %d", &year[X8JtjyzFUM], &Sc4TXPlHm[X8JtjyzFUM], &rUagBWXnTqKF[X8JtjyzFUM]);
            X8JtjyzFUM = X8JtjyzFUM +1;
        };
    }
    {
        X8JtjyzFUM = 213 - 213;
        while (K7aTnSz > X8JtjyzFUM) {
            if ((!((654 - 654) != year[X8JtjyzFUM] % 4) && !(0 == year[X8JtjyzFUM] % 100)) || (!(0 != year[X8JtjyzFUM] % 4) && year[X8JtjyzFUM] % 400 == 0))
                j = 1;
            else
                j = 0;
            if (Sc4TXPlHm[X8JtjyzFUM] > rUagBWXnTqKF[X8JtjyzFUM]) {
                temp = Sc4TXPlHm[X8JtjyzFUM];
                Sc4TXPlHm[X8JtjyzFUM] = rUagBWXnTqKF[X8JtjyzFUM];
                rUagBWXnTqKF[X8JtjyzFUM] = temp;
            }
            for (total = 0; Sc4TXPlHm[X8JtjyzFUM] < rUagBWXnTqKF[X8JtjyzFUM]; Sc4TXPlHm[X8JtjyzFUM]++) {
                total += oKjYDq[j][Sc4TXPlHm[X8JtjyzFUM] - 1];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            X8JtjyzFUM++;
            if (total % 7 == 0)
                ;
            else
                printf ("NO\n");
        };
    }
    return 0;
}

