int main (int awRJ6i, char *argv []) {
    int *oFVqjfrGIbe;
    int mlod9X, Icvtp6FXie52, qs2btdh = 0, wLrFkU, oqL7Myl;
    scanf ("%d", &mlod9X);
    oFVqjfrGIbe = (int *) (malloc (mlod9X * sizeof (int)));
    for (wLrFkU = 0; mlod9X > wLrFkU; wLrFkU++) {
        for (oqL7Myl = 0; mlod9X > oqL7Myl; oqL7Myl = oqL7Myl + 1)
            scanf ("%d", &oFVqjfrGIbe[oqL7Myl]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            oqL7Myl = 0;
            while (oqL7Myl < mlod9X) {
                if (oFVqjfrGIbe[oqL7Myl] == 0)
                    break;
                oqL7Myl++;
            };
        }
        {
            Icvtp6FXie52 = 823 - 822;
            while (mlod9X > Icvtp6FXie52) {
                if (oFVqjfrGIbe[Icvtp6FXie52] == 0) {
                    qs2btdh = qs2btdh + Icvtp6FXie52 -oqL7Myl - 1;
                    break;
                }
                Icvtp6FXie52 = Icvtp6FXie52 +1;
            };
        };
    }
    printf ("%d", qs2btdh);
    return 0;
}

