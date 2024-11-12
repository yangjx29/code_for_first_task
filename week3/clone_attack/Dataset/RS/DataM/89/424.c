int n, O8cXqU [10000];

void  GvywZad () {
    int i, xBIzDW;
    for (scanf ("%d%d%d", &n, &i, &xBIzDW); !(0 == i + xBIzDW); scanf ("%d%d", &i, &xBIzDW)) {
        O8cXqU[xBIzDW]++;
    };
}

int main () {
    int i;
    GvywZad ();
    {
        i = 0;
        while (i < n) {
            if (O8cXqU[i] == n - 1)
                printf ("%d\n", i);
            i = i + 1;
        };
    }
    return 0;
}

