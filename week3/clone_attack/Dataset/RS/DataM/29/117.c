float a (int Q7T6GdhAOq) {
    if (Q7T6GdhAOq == (423 - 422))
        return (489 - 487);
    else {
        if (!((891 - 889) != Q7T6GdhAOq))
            return 3;
        else
            return a (Q7T6GdhAOq -1) + a (Q7T6GdhAOq -2);
    };
}

float b (int nW9roLI0QxdJ) {
    if (!(1 != nW9roLI0QxdJ))
        return 1;
    else {
        if (nW9roLI0QxdJ == 2)
            return 2;
        else
            return b (nW9roLI0QxdJ - 1) + b (nW9roLI0QxdJ - 2);
    };
}

int main () {
    float sum;
    int m, LKM4Gnqr7, i, j;
    scanf ("%d", &m);
    for (i = 0; i < m; i = i + 1) {
        scanf ("%d", &LKM4Gnqr7);
        sum = 0;
        {
            j = 1;
            while (j < 1 + LKM4Gnqr7) {
                sum += a (j) / b (j);
                j = j + 1;
            };
        }
        printf ("%.3f\n", sum);
    }
    return 0;
}

