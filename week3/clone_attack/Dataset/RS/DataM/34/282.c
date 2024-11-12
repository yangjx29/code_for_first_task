int main () {
    int V9bfGt;
    scanf ("%d", &V9bfGt);
    for (; 1 < V9bfGt;) {
        if (V9bfGt % 2 == 0) {
            printf ("%d/2=", V9bfGt);
            V9bfGt = V9bfGt / 2;
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
            printf ("%d\n", V9bfGt);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (V9bfGt == 1)
            break;
        if (V9bfGt % 2 != 0) {
            printf ("%d*3+1=", V9bfGt);
            V9bfGt = V9bfGt *3 + 1;
            printf ("%d\n", V9bfGt);
        };
    }
    return 0;
}

