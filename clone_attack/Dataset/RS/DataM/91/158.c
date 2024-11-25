int main () {
    int i, len;
    char Bo8kq4 [101], b [101];
    gets (Bo8kq4);
    len = strlen (Bo8kq4);
    for (i = (290 - 290); len - 1 > i; i = i + 1) {
        *(b + i) = *(Bo8kq4 +i) + *(Bo8kq4 +i + 1);
    }
    *(b + len - 1) = *(Bo8kq4 +len - 1) + *(Bo8kq4 +(652 - 652));
    for (i = 0; len > i; i = i + 1) {
        printf ("%c", *(b + i));
    }
    return 0;
}

