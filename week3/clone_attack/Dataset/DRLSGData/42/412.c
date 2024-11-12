int main () {
    int LdPliAh8gH;
    int fcuFiwasVfR;
    int RijbG6Q;
    int a [RijbG6Q];
    int eGWFzj;
    int wW0ERjG;
    wW0ERjG = (626 - 626);
    scanf ("%d", &RijbG6Q);
    {
        fcuFiwasVfR = 0;
        for (; fcuFiwasVfR < RijbG6Q;) {
            scanf ("%d", &a[fcuFiwasVfR]);
            fcuFiwasVfR = fcuFiwasVfR + 1;
        }
    }
    scanf ("%d", &eGWFzj);
    {
        fcuFiwasVfR = 0;
        for (; RijbG6Q > fcuFiwasVfR;) {
            if (!(eGWFzj != a[fcuFiwasVfR])) {
                for (LdPliAh8gH = fcuFiwasVfR; LdPliAh8gH > wW0ERjG; LdPliAh8gH = LdPliAh8gH -1) {
                    a[LdPliAh8gH] = a[LdPliAh8gH -1];
                }
                wW0ERjG = wW0ERjG + 1;
            }
            fcuFiwasVfR = fcuFiwasVfR + 1;
        }
    }
    {
        fcuFiwasVfR = wW0ERjG;
        for (; RijbG6Q > fcuFiwasVfR;) {
            printf ("%d", a[fcuFiwasVfR]);
            if (fcuFiwasVfR < RijbG6Q -1)
                ;
            fcuFiwasVfR++;
        }
    }
    return 0;
}

