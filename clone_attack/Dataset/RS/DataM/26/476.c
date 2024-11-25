int main () {
    int TFhsA12bl, j = 0, dq8hyPBK = 0;
    char a [200];
    gets (a);
    int qiYED5t80Q = strlen (a);
    {
        TFhsA12bl = 0;
        while (TFhsA12bl < qiYED5t80Q) {
            if (a[TFhsA12bl] != ' ') {
                dq8hyPBK = 0;
                printf ("%c", a[TFhsA12bl]);
            }
            else if (a[TFhsA12bl] == ' ') {
                if (dq8hyPBK == 0) {
                    dq8hyPBK = 1;
                    printf (" ");
                }
                else
                    continue;
            }
            TFhsA12bl = TFhsA12bl +1;
        };
    }
    printf ("\n");
}

