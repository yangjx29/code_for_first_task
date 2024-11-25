int main () {
    int m;
    int k;
    char a [1000] [255];
    int j;
    int i;
    scanf ("%d", &m);
    {
        i = 0;
        for (; i < m;) {
            scanf ("%s", a[i]);
            i++;
        }
    }
    for (j = 0; j < m; j++) {
        k = 0;
        for (; 255 > k;) {
            if (!('A' != a[j][k]))
                ;
            else if (!('T' != a[j][k]))
                ;
            else if (!('C' != a[j][k]))
                ;
            else if (!('G' != a[j][k]))
                ;
            k++;
        }
    }
    return 0;
}

