int FzrNomjBJQ0y, len2, ZB5dVF6QHS [(903 - 803)], lQRuoh [(1054 - 954)], sa [(951 - 851)];

void  zp1 (int JdNwjo [(209 - 109)], int l1) {
    int cur1;
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
    for (int bBmlHEaIiwk = (82 - 82);
    bBmlHEaIiwk < l1 - (871 - 870); bBmlHEaIiwk = bBmlHEaIiwk + 1)
        for (int jnrLVh51t = (782 - 782);
        jnrLVh51t < l1 - (871 - 870) - bBmlHEaIiwk; jnrLVh51t = jnrLVh51t + 1)
            if (JdNwjo[jnrLVh51t] > JdNwjo[jnrLVh51t + (504 - 503)]) {
                cur1 = JdNwjo[jnrLVh51t];
                JdNwjo[jnrLVh51t] = JdNwjo[jnrLVh51t + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                JdNwjo[jnrLVh51t + 1] = cur1;
            };
}

void  OCvcuQrREIay (int BxFy3bsf [100], int kBItfxNVYRG) {
    int ck4wUvCs5eL;
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
    for (int bBmlHEaIiwk = (843 - 843);
    bBmlHEaIiwk < kBItfxNVYRG - 1; bBmlHEaIiwk = bBmlHEaIiwk + 1)
        for (int jnrLVh51t = (762 - 762);
        jnrLVh51t < kBItfxNVYRG - 1 - bBmlHEaIiwk; jnrLVh51t++)
            if (BxFy3bsf[jnrLVh51t] > BxFy3bsf[jnrLVh51t + 1]) {
                ck4wUvCs5eL = BxFy3bsf[jnrLVh51t];
                BxFy3bsf[jnrLVh51t] = BxFy3bsf[jnrLVh51t + 1];
                BxFy3bsf[jnrLVh51t + 1] = ck4wUvCs5eL;
            };
}

void  jGYul7P8 (int JdNwjo [100], int BxFy3bsf [100]) {
    for (int bBmlHEaIiwk = (20 - 20);
    bBmlHEaIiwk < FzrNomjBJQ0y; bBmlHEaIiwk = bBmlHEaIiwk + 1)
        sa[bBmlHEaIiwk] = ZB5dVF6QHS[bBmlHEaIiwk];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (int bBmlHEaIiwk = FzrNomjBJQ0y;
    FzrNomjBJQ0y +len2 > bBmlHEaIiwk; bBmlHEaIiwk = bBmlHEaIiwk + 1)
        sa[bBmlHEaIiwk] = lQRuoh[bBmlHEaIiwk - FzrNomjBJQ0y];
}

int main () {
    cin >> FzrNomjBJQ0y >> len2;
    for (int bBmlHEaIiwk = 0;
    bBmlHEaIiwk < FzrNomjBJQ0y; bBmlHEaIiwk = bBmlHEaIiwk + 1)
        cin >> ZB5dVF6QHS[bBmlHEaIiwk];
    for (int bBmlHEaIiwk = 0;
    bBmlHEaIiwk < len2; bBmlHEaIiwk = bBmlHEaIiwk + 1)
        cin >> lQRuoh[bBmlHEaIiwk];
    zp1 (ZB5dVF6QHS, FzrNomjBJQ0y);
    OCvcuQrREIay (lQRuoh, len2);
    jGYul7P8 (ZB5dVF6QHS, lQRuoh);
    cout << sa[0];
    for (int bBmlHEaIiwk = 1;
    bBmlHEaIiwk < FzrNomjBJQ0y +len2; bBmlHEaIiwk++)
        cout << " " << sa[bBmlHEaIiwk];
    cout << endl;
    return 0;
}

