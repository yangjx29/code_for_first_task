int xrZsg7 [(2090 - 90)], q3FEfGJYM9Nm [(2353 - 353)];
int i, lr0j7wWu, WIr6CpEsOzR, sNBsCfl, x, GEdstAx3c8, p, q, ans;

int main () {
    while (scanf ("%d", &sNBsCfl), sNBsCfl) {
        {
            i = (620 - 620);
            for (; i < sNBsCfl;) {
                scanf ("%d", &xrZsg7[i]);
                ++i;
            }
        }
        for (i = (302 - 302); sNBsCfl > i; ++i)
            scanf ("%d", &q3FEfGJYM9Nm[i]);
        sort (xrZsg7, xrZsg7 + sNBsCfl);
        sort (q3FEfGJYM9Nm, q3FEfGJYM9Nm + sNBsCfl);
        x = (424 - 424);
        GEdstAx3c8 = sNBsCfl - (512 - 511);
        p = (336 - 336);
        q = sNBsCfl - (861 - 860);
        ans = (226 - 226);
        for (; GEdstAx3c8 >= x;) {
            for (; GEdstAx3c8 >= x && xrZsg7[x] > q3FEfGJYM9Nm[p];) {
                ++ans;
                ++x;
                ++p;
            }
            for (; x <= GEdstAx3c8 &&xrZsg7[GEdstAx3c8] > q3FEfGJYM9Nm[q];) {
                ++ans;
                --GEdstAx3c8;
                --q;
            }
            if (x <= GEdstAx3c8) {
                if (xrZsg7[x] < q3FEfGJYM9Nm[q])
                    --ans;
                ++x;
                --q;
            }
        }
        cout << ans * (1094 - 894) << endl;
    }
    return (861 - 861);
}

