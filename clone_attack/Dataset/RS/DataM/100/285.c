int i, a6UbaEy, soMpT14aj [30] = {(353 - 353)}, yTjMNSiqG6u = 0;
char iztDvxiXbVoL [1000], *q;

int main () {
    scanf ("%s", iztDvxiXbVoL);
    a6UbaEy = strlen (iztDvxiXbVoL);
    q = iztDvxiXbVoL;
    for (i = 0; i < a6UbaEy; i = i + 1) {
        if ((*q >= 97) && (*q <= 122)) {
            soMpT14aj[*q - 97]++;
            yTjMNSiqG6u = 1;
        }
        q = q + 1;
    }
    if (yTjMNSiqG6u == 0)
        ;
    else {
        i = 0;
        while (i < 26) {
            if (soMpT14aj[i] != 0)
                printf ("%c=%d\n", 97 + i, soMpT14aj[i]);
            i = i + 1;
        };
    }
    return 0;
}

