const  int N = 110;
int q [N];
char str [N], a;

int main () {
    scanf ("%s", str);
    for (int ggXDzK = 0, t = 0;
    ggXDzK < strlen (str); ggXDzK++)
        if (str[ggXDzK] == str[0])
            q[++t] = ggXDzK;
        else
            printf ("%d %d\n", q[t--], ggXDzK);
    return 0;
}

