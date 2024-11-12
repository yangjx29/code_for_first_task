int main () {
    int L9axDm, V1jDyJvgh2, jizc8hJVX, a [101], sZ97hji5Uf [101];
    scanf ("%d %d", &V1jDyJvgh2, &L9axDm);
    {
        jizc8hJVX = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (V1jDyJvgh2 >= jizc8hJVX) {
            scanf ("%d", &a[jizc8hJVX]);
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
            jizc8hJVX = jizc8hJVX + 1;
        };
    }
    {
        jizc8hJVX = 1;
        while (jizc8hJVX <= V1jDyJvgh2) {
            if (jizc8hJVX <= L9axDm)
                sZ97hji5Uf[jizc8hJVX] = a[V1jDyJvgh2 -L9axDm+jizc8hJVX];
            else
                sZ97hji5Uf[jizc8hJVX] = a[jizc8hJVX - L9axDm];
            jizc8hJVX = jizc8hJVX + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    printf ("%d", sZ97hji5Uf[1]);
    {
        jizc8hJVX = 2;
        while (jizc8hJVX <= V1jDyJvgh2) {
            printf (" %d", sZ97hji5Uf[jizc8hJVX]);
            jizc8hJVX++;
        };
    }
    return 0;
}

