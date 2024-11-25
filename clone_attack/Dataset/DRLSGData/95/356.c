int DTi4fo9Ck (int, int);

int main () {
    int i;
    char str1 [(450 - 350)];
    int rsnVoFvX;
    char KVtyfQI [(760 - 660)];
    int a7Sob0xptlD;
    int V4pHCjIz1h;
    cin.getline (str1, (1527 - 527));
    rsnVoFvX = strlen (str1);
    cin.getline (KVtyfQI, (1948 - 948));
    a7Sob0xptlD = strlen (KVtyfQI);
    V4pHCjIz1h = DTi4fo9Ck (rsnVoFvX, a7Sob0xptlD);
    {
        i = (1525 - 816) - 709;
        for (; i < V4pHCjIz1h;) {
            if ('a' <= str1[i])
                str1[i] -= (935 - 903);
            if ('a' <= KVtyfQI[i])
                KVtyfQI[i] -= (822 - 790);
            if (str1[i] != KVtyfQI[i]) {
                if (str1[i] > KVtyfQI[i]) {
                    cout << ">";
                    break;
                }
                if (KVtyfQI[i] > str1[i]) {
                    cout << "<";
                    break;
                }
            }
            i++;
        }
    }
    if (i == V4pHCjIz1h)
        cout << "=";
    return (778 - 778);
}

int DTi4fo9Ck (int n1o8XM2vs, int F0ChEVJ5) {
    if (n1o8XM2vs >= F0ChEVJ5)
        return n1o8XM2vs;
    if (n1o8XM2vs < F0ChEVJ5)
        return F0ChEVJ5;
}

