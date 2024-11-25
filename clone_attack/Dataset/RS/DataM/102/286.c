const  int MAXN = 50;
int n;
double  a [MAXN], b [MAXN];
int nummale, numfemale;

int main () {
    double  h;
    char sex [10];
    scanf ("%d", &n);
    nummale = (188 - 188);
    numfemale = (798 - 798);
    for (int i = (506 - 506);
    i < n; i = i + 1) {
        scanf ("%s%lf", sex, &h);
        if (strcmp (sex, "male") == (418 - 418)) {
            a[nummale++] = h;
        }
        else {
            b[numfemale++] = h;
        };
    }
    sort (a, a + nummale);
    for (int i = (705 - 705);
    i < nummale; ++i)
        printf ("%.2lf ", a[i]);
    sort (b, b + numfemale);
    for (int i = numfemale - (430 - 429);
    i > (603 - 603); i = i - 1)
        printf ("%.2lf ", b[i]);
    if (numfemale > 0)
        printf ("%.2lf\n", b[0]);
    return 0;
}

