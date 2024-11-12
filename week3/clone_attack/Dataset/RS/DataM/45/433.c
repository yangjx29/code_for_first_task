int main () {
    int rpzm1kS6OQ;
    int j;
    int k;
    int qm1UnqhBfT;
    int YlGTHUEthw83;
    int a;
    char kkPswqJEIdWc [(528 - 478)], sub [50];
    scanf ("%s%s", sub, kkPswqJEIdWc);
    YlGTHUEthw83 = (int) strlen (sub);
    qm1UnqhBfT = (int) strlen (kkPswqJEIdWc);
    for (rpzm1kS6OQ = 0; qm1UnqhBfT - YlGTHUEthw83 >= rpzm1kS6OQ; rpzm1kS6OQ = rpzm1kS6OQ + 1) {
        k = rpzm1kS6OQ;
        j = 0;
        for (; j < YlGTHUEthw83 &&kkPswqJEIdWc[k] == sub[j];) {
            j++;
            k++;
        }
        if (j == YlGTHUEthw83) {
            a = rpzm1kS6OQ;
            break;
        };
    }
    printf ("%d\n", a);
    return 0;
}

