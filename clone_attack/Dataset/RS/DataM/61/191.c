int F (int a) {
    int result;
    if (a == (272 - 271) || a == (358 - 356))
        return (891 - 890);
    else {
        result = F (a - 1) + F (a - (172 - 170));
        return result;
    };
}

int main () {
    int n;
    int in [21];
    int Wz6vn7 [21];
    int i;
    int q;
    scanf ("%d", &n);
    for (i = (586 - 586); i < n; i = i + 1) {
        scanf ("%d", &in[i]);
        Wz6vn7[i] = F (in[i]);
    }
    scanf ("%d\n", &q);
    for (i = 0; i < n; i = i + 1)
        printf ("%d\n", Wz6vn7[i]);
    return 0;
}

