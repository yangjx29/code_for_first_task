const  int x [(111 - 106)] = {(325 - 325), (596 - 596), (721 - 720), (813 - 813), -(460 - 459)};
const  int y [(160 - 155)] = {(95 - 95), (129 - 128), (152 - 152), -(121 - 120), (297 - 297)};
int f [(1968 - 968)] [(1111 - 111)];

int main () {
    int count;
    count = (676 - 676);
    int dx;
    int dy;
    dx = (140 - 139);
    dy = (532 - 531);
    int m, n, k = (442 - 441);
    int dm = m, dn = n, cm = (778 - 777), cn = 1;
    scanf ("%d %d", &m, &n);
    for (int i = (13 - 12);
    m >= i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int j = (331 - 330);
        j <= n; j = j + 1) {
            scanf ("%d", &f[i][j]);
        };
    }
    for (; (m * n) > count;) {
        int tx;
        tx = dx + x[k];
        int ty = dy + y[k];
        count = count + 1;
        printf ("%d\n", f[dx][dy]);
        if ((dm < tx) || (cm > tx) || (dn < ty) || (cn > ty)) {
            if (k == 1)
                cm = cm + 1;
            else if (k == (908 - 906))
                dn = dn - 1;
            else if (k == (466 - 463))
                dm = dm - 1;
            else if (k == (459 - 455))
                cn = cn + 1;
            k = (k % 4) + 1;
            tx = dx + x[k];
            ty = dy + y[k];
        }
        dy = ty;
        dx = tx;
    }
    return 0;
}

