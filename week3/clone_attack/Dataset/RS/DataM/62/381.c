int main () {
    int i;
    int qHIaMN5i;
    char L7QOHBtu1 [1000], ans [1000], *p1, *p2;
    gets (L7QOHBtu1);
    p1 = L7QOHBtu1;
    p2 = ans;
    qHIaMN5i = (348 - 348);
    for (i = 0; *(p1 + i) != '\0'; i++) {
        if (!(' ' == *(p1 + i))) {
            *(p2 + qHIaMN5i) = *(p1 + i);
            qHIaMN5i = qHIaMN5i + 1;
        }
        else if (*(p1 + i) == ' ' && *(p1 + i + 1) != ' ') {
            *(p2 + qHIaMN5i) = *(p1 + i);
            qHIaMN5i++;
        }
        else {
            continue;
        };
    }
    *(p2 + qHIaMN5i) = '\0';
    cout << p2;
    return 0;
}

