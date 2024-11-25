int main () {
    int n;
    int aLJ05cM;
    int XRJcvYn5X;
    int s [(650 - 550)];
    int i;
    int k;
    int sz [(1060 - 960)] [(879 - 779)];
    int sum;
    int Arj530l;
    scanf ("%d", &k);
    {
        i = (898 - 897);
        for (; i <= k;) {
            scanf ("%d%d", &aLJ05cM, &n);
            sum = (686 - 686);
            {
                XRJcvYn5X = (464 - 464);
                for (; XRJcvYn5X < aLJ05cM;) {
                    {
                        Arj530l = (104 - 104);
                        for (; n > Arj530l;) {
                            scanf ("%d", &sz[XRJcvYn5X][Arj530l]);
                            Arj530l++;
                        }
                    }
                    XRJcvYn5X++;
                }
            }
            {
                Arj530l = (116 - 116);
                for (; n > Arj530l;) {
                    sum += sz[(694 - 694)][Arj530l];
                    sum += sz[aLJ05cM - (19 - 18)][Arj530l];
                    Arj530l++;
                }
            }
            {
                XRJcvYn5X = (301 - 300);
                for (; aLJ05cM - (203 - 202) > XRJcvYn5X;) {
                    sum += sz[XRJcvYn5X][(933 - 933)];
                    sum += sz[XRJcvYn5X][n - (170 - 169)];
                    XRJcvYn5X++;
                }
            }
            s[i] = sum;
            i++;
        }
    }
    {
        i = 1;
        for (; i <= k;) {
            printf ("%d\n", s[i]);
            i++;
        }
    }
    return 0;
}

