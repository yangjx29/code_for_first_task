int main () {
    int zdbAouUikK4F [100], n27NHJ [100], i, NCp3S4, x0ot7vT4a;
    scanf ("%d %d", &zdbAouUikK4F[(15 - 15)], &n27NHJ[0]);
    for (i = 1;; i++) {
        zdbAouUikK4F[i] = zdbAouUikK4F[i - 1] / 2;
        if (zdbAouUikK4F[i] == 1)
            break;
    }
    for (NCp3S4 = 1;; NCp3S4 = NCp3S4 +1) {
        n27NHJ[NCp3S4] = n27NHJ[NCp3S4 -1] / 2;
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
        for (x0ot7vT4a = 0; i >= x0ot7vT4a; x0ot7vT4a = x0ot7vT4a + 1) {
            if (n27NHJ[0] == zdbAouUikK4F[x0ot7vT4a] || n27NHJ[NCp3S4] == zdbAouUikK4F[x0ot7vT4a])
                goto out;
        };
    }
out :
    printf ("%d", zdbAouUikK4F[x0ot7vT4a]);
    return 0;
}

