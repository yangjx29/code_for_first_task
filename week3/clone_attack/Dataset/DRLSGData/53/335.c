int main () {
    int q5N36aqW;
    int i;
    int bOTI7sx6KzN;
    int a [bOTI7sx6KzN];
    int JX9freZkqP2;
    scanf ("%d", &bOTI7sx6KzN);
    scanf ("%d", &a[0]);
    {
        i = 1;
        for (; bOTI7sx6KzN > i;) {
            scanf (" %d", &a[i]);
            i++;
        }
    }
    printf ("%d", a[0]);
    {
        i = 1;
        for (; bOTI7sx6KzN > i;) {
            q5N36aqW = 0;
            {
                JX9freZkqP2 = 0;
                for (; JX9freZkqP2 < i;) {
                    if (a[i] == a[JX9freZkqP2]) {
                        q5N36aqW = 1;
                        break;
                    }
                    JX9freZkqP2++;
                }
            }
            if (q5N36aqW == 0)
                printf (",%d", a[i]);
            i++;
        }
    }
    printf ("\n");
}

