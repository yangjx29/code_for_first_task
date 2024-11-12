int main () {
    char tHj7SoZ [(549 - 448)];
    int n;
    int i;
    int s;
    int DxKqG8g;
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
    int k;
    scanf ("%d", &n);
    {
        i = 925 - 925;
        while (i < n) {
            scanf ("%s", &tHj7SoZ);
            s = strlen (tHj7SoZ);
            printf ("%s\n", tHj7SoZ);
            getchar ();
            {
                DxKqG8g = 961 - 961;
                while (DxKqG8g < s) {
                    if (tHj7SoZ[DxKqG8g] != '(' && tHj7SoZ[DxKqG8g] != ')')
                        tHj7SoZ[DxKqG8g] = ' ';
                    if (tHj7SoZ[DxKqG8g] == ')') {
                        k = DxKqG8g;
                        while (k >= (843 - 843)) {
                            if (tHj7SoZ[k] == '(') {
                                tHj7SoZ[DxKqG8g] = ' ';
                                tHj7SoZ[k] = ' ';
                                break;
                            }
                            k = k - 1;
                        };
                    }
                    DxKqG8g = DxKqG8g +1;
                };
            }
            i = i + 1;
            {
                DxKqG8g = 841 - 841;
                while (DxKqG8g < s) {
                    if (tHj7SoZ[DxKqG8g] == '(')
                        tHj7SoZ[DxKqG8g] = '$';
                    if (tHj7SoZ[DxKqG8g] == ')')
                        tHj7SoZ[DxKqG8g] = '?';
                    DxKqG8g = DxKqG8g +1;
                };
            }
            printf ("%s\n", tHj7SoZ);
        };
    }
    return 0;
}

