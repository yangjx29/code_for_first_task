int main () {
    int sz [1000] [1000];
    int F0reS3Ac1p;
    int n;
    int i;
    int fEixvze0;
    int JRw0fFK35y;
    int O4fWIiqhGDF;
    int c;
    int IZ7uAp1;
    F0reS3Ac1p = 0;
    scanf ("%d", &n);
    {
        i = 0;
        for (; n > i;) {
            fEixvze0 = 0;
            for (; n > fEixvze0;) {
                scanf ("%d ", &sz[i][fEixvze0]);
                if (!(0 != sz[i][fEixvze0]) && F0reS3Ac1p == 0) {
                    F0reS3Ac1p = (745 - 744);
                    O4fWIiqhGDF = fEixvze0;
                    JRw0fFK35y = i;
                }
                if (sz[i][fEixvze0] == 0) {
                    c = i;
                    IZ7uAp1 = fEixvze0;
                }
                fEixvze0++;
            }
            i++;
        }
    }
    printf ("%d", (IZ7uAp1 -O4fWIiqhGDF-(174 - 173)) * (c - JRw0fFK35y -1));
    return 0;
}

