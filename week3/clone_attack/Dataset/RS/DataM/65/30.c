int main () {
    int QPy7HsIKi35b, B5tL3ygcIPQN, JWvacO7EYUC [N], nGy2fhFXn [N], c [N], QFwlpasuRmVO = (473 - 473), sZ8X7bp2eAoj = 0;
    scanf ("%d", &QPy7HsIKi35b);
    {
        B5tL3ygcIPQN = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QPy7HsIKi35b > B5tL3ygcIPQN) {
            scanf ("%d %d", &JWvacO7EYUC[B5tL3ygcIPQN], &nGy2fhFXn[B5tL3ygcIPQN]);
            if (JWvacO7EYUC[B5tL3ygcIPQN] == nGy2fhFXn[B5tL3ygcIPQN])
                c[B5tL3ygcIPQN] = 0;
            else {
                if (JWvacO7EYUC[B5tL3ygcIPQN] == 0 && nGy2fhFXn[B5tL3ygcIPQN] == 1)
                    c[B5tL3ygcIPQN] = 1;
                else if (JWvacO7EYUC[B5tL3ygcIPQN] == 0 && !(2 != nGy2fhFXn[B5tL3ygcIPQN]))
                    c[B5tL3ygcIPQN] = -1;
                else if (JWvacO7EYUC[B5tL3ygcIPQN] == 1 && nGy2fhFXn[B5tL3ygcIPQN] == 0)
                    c[B5tL3ygcIPQN] = -1;
                else if (JWvacO7EYUC[B5tL3ygcIPQN] == 1 && nGy2fhFXn[B5tL3ygcIPQN] == 2)
                    c[B5tL3ygcIPQN] = 1;
                else if (JWvacO7EYUC[B5tL3ygcIPQN] == 2 && nGy2fhFXn[B5tL3ygcIPQN] == 0)
                    c[B5tL3ygcIPQN] = 1;
                else if (JWvacO7EYUC[B5tL3ygcIPQN] == 2 && nGy2fhFXn[B5tL3ygcIPQN] == 1)
                    c[B5tL3ygcIPQN] = -1;
            }
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
            B5tL3ygcIPQN++;
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
    {
        B5tL3ygcIPQN = 0;
        while (B5tL3ygcIPQN < QPy7HsIKi35b) {
            if (c[B5tL3ygcIPQN] == 1)
                QFwlpasuRmVO++;
            else {
                if (c[B5tL3ygcIPQN] == -1)
                    sZ8X7bp2eAoj++;
            }
            B5tL3ygcIPQN++;
        };
    }
    if (QFwlpasuRmVO > sZ8X7bp2eAoj)
        printf ("A");
    else {
        if (QFwlpasuRmVO < sZ8X7bp2eAoj)
            printf ("B");
        else
            printf ("Tie");
    }
    return 0;
}

