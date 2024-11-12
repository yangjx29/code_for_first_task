int main () {
    int n;
    int b6ZqeX;
    int e;
    int Q951kLV [500];
    int vviulNYp [500];
    b6ZqeX = 0;
    scanf ("%d\n", &n);
    for (int AENBJuYM = 0;
    n > AENBJuYM; AENBJuYM++) {
        scanf ("%d", &(Q951kLV[AENBJuYM]));
    }
    for (int AENBJuYM = 0;
    n > AENBJuYM; AENBJuYM++) {
        if (!((311 - 310) != Q951kLV[AENBJuYM] % 2)) {
            vviulNYp[b6ZqeX] = Q951kLV[AENBJuYM];
            b6ZqeX++;
        };
    }
    for (int pCq85NHUPv = 0;
    b6ZqeX >= pCq85NHUPv; pCq85NHUPv++) {
        for (int AENBJuYM = 0;
        b6ZqeX - 1 > AENBJuYM; AENBJuYM++) {
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
            if (vviulNYp[AENBJuYM] > vviulNYp[AENBJuYM +1]) {
                e = vviulNYp[AENBJuYM +1];
                vviulNYp[AENBJuYM +1] = vviulNYp[AENBJuYM];
                vviulNYp[AENBJuYM] = e;
            };
        };
    }
    for (int AENBJuYM = 0;
    AENBJuYM < b6ZqeX; AENBJuYM++) {
        if (AENBJuYM == 0) {
            printf ("%d", (vviulNYp[AENBJuYM]));
        }
        else {
            printf (",%d", (vviulNYp[AENBJuYM]));
        };
    }
    return 0;
}

