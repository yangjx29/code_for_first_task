int main () {
    char TUTRazPE [300], *HXwCaS1, *q;
    cin.getline (TUTRazPE, 300);
    HXwCaS1 = TUTRazPE;
    cout << TUTRazPE;
    while (*HXwCaS1 != '\0') {
        if (*HXwCaS1 == ' ') {
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
            if (*(HXwCaS1 +1) == ' ') {
                q = HXwCaS1;
                while (*q != '\0') {
                    *q = *(q + 1);
                    q = q + 1;
                };
            }
            else {
                HXwCaS1 = HXwCaS1 +1;
            };
        }
        else {
            HXwCaS1 = HXwCaS1 +1;
        };
    }
    return 0;
}

